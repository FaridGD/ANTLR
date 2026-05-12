// ============================================================================
// main.cpp — точка входа (подход Visitor).
//
// Стандартный конвейер ANTLR4:
//   текст → лексер → токены → парсер → CST → Visitor
//
// Этот конвейер одинаков для любого проекта на ANTLR4.
// Меняется только грамматика и реализация Visitor.
// ============================================================================

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <regex>

#include "antlr4-runtime.h"        // основной заголовок ANTLR4 runtime
#include "ExampleLexer.h"          // сгенерированный лексер
#include "ExampleParser.h"         // сгенерированный парсер
#include "ExampleInterpreter.h"    // наш Visitor-интерпретатор

struct SemanticIssue {
    int line;
    std::string message;
};

static std::vector<SemanticIssue> collectSemanticIssues(const std::string &source) {
    std::vector<SemanticIssue> issues;
    std::istringstream in(source);
    std::string line;
    bool insideFence = false;
    int fenceStartLine = -1;
    int lineNo = 0;
    const std::regex linkOrImagePattern(R"((!?\[[^\]]*\]\([^\)]*\)))");

    while (std::getline(in, line)) {
        ++lineNo;

        if (line.rfind("```", 0) == 0) {
            if (!insideFence) {
                insideFence = true;
                fenceStartLine = lineNo;
            } else {
                insideFence = false;
            }
            continue;
        }

        if (insideFence) {
            continue;
        }

        int singleStars = 0;
        int doubleStars = 0;
        int backticks = 0;
        for (size_t i = 0; i < line.size(); ++i) {
            if (line[i] == '`') {
                ++backticks;
                continue;
            }
            if (line[i] == '*' && i + 1 < line.size() && line[i + 1] == '*') {
                ++doubleStars;
                ++i;
                continue;
            }
            if (line[i] == '*') {
                ++singleStars;
            }
        }

        if (backticks % 2 != 0) {
            issues.push_back({lineNo, "unclosed inline code marker (`)"});
        }
        if (doubleStars % 2 != 0) {
            issues.push_back({lineNo, "unclosed bold marker (**)"});
        }
        if (singleStars % 2 != 0) {
            issues.push_back({lineNo, "unclosed italic marker (*)"});
        }

        auto begin = std::sregex_iterator(line.begin(), line.end(), linkOrImagePattern);
        auto end = std::sregex_iterator();
        for (auto it = begin; it != end; ++it) {
            const std::string token = it->str();
            const bool isImage = !token.empty() && token[0] == '!';
            const size_t leftBracket = token.find('[');
            const size_t rightBracket = token.find(']');
            const size_t leftParen = token.find('(', rightBracket);
            const size_t rightParen = token.rfind(')');
            if (leftBracket == std::string::npos || rightBracket == std::string::npos ||
                leftParen == std::string::npos || rightParen == std::string::npos) {
                continue;
            }

            const std::string label = token.substr(leftBracket + 1, rightBracket - leftBracket - 1);
            const std::string url = token.substr(leftParen + 1, rightParen - leftParen - 1);

            if (url.empty()) {
                issues.push_back({lineNo, "empty URL in link/image"});
            }
            if (!isImage && label.empty()) {
                issues.push_back({lineNo, "empty link text"});
            }
        }
    }

    if (insideFence) {
        issues.push_back({fenceStartLine, "unclosed fenced code block (```)"});
    }

    return issues;
}

int main(int argc, char *argv[]) {
    std::string inputPath;
    bool writeToFile = false;
    std::string outputPath;

    if (argc == 2) {
        inputPath = argv[1];
    } else if (argc == 4 && std::string(argv[2]) == "-o") {
        inputPath = argv[1];
        writeToFile = true;
        outputPath = argv[3];
    } else {
        std::cerr << "Usage:\n"
                  << "  main <input.md>              (HTML to stdout)\n"
                  << "  main <input.md> -o <file.html>   (write HTML to file)\n"
                  << "Or redirect: main input.md > out.html"
                  << std::endl;
        return 1;
    }

    // 1. Чтение файла
    std::ifstream file(inputPath);
    if (!file.is_open()) {
        std::cerr << "Error: cannot open file " << inputPath << std::endl;
        return 1;
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    const std::string source = buffer.str();

    // 2. Лексер: текст → поток токенов
    antlr4::ANTLRInputStream inputStream(source);
    ExampleLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);

    // 3. Парсер: поток токенов → дерево разбора (CST)
    ExampleParser parser(&tokens);
    ExampleParser::ProgramContext *tree = parser.program();

    // 4. Проверка ошибок разбора
    if (parser.getNumberOfSyntaxErrors() > 0) {
        std::cerr << "Parsing failed with "
                  << parser.getNumberOfSyntaxErrors()
                  << " syntax error(s)." << std::endl;
        return 1;
    }

    // 5. Простая семантическая валидация (понятные сообщения)
    const auto semanticIssues = collectSemanticIssues(source);
    if (!semanticIssues.empty()) {
        for (const auto &issue : semanticIssues) {
            std::cerr << "Semantic error [line " << issue.line << "]: " << issue.message << std::endl;
        }
        return 1;
    }

    // 6. Интерпретатор: обход дерева с вычислением
    try {
        ExampleInterpreter interpreter;
        std::string result = std::any_cast<std::string>(interpreter.visit(tree));

        if (writeToFile) {
            std::ofstream output(outputPath, std::ios::trunc);
            if (!output.is_open()) {
                std::cerr << "Error: cannot write to file " << outputPath << std::endl;
                return 1;
            }
            output << result;
            std::cout << "Written HTML to: " << outputPath << std::endl;
        } else {
            std::cout << result;
        }

    } catch (const std::exception &e) {
        std::cerr << "Runtime error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
