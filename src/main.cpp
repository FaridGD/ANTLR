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

#include "antlr4-runtime.h"        // основной заголовок ANTLR4 runtime
#include "ExampleLexer.h"          // сгенерированный лексер
#include "ExampleParser.h"         // сгенерированный парсер
#include "ExampleInterpreter.h"    // наш Visitor-интерпретатор

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: main <file>" << std::endl;
        return 1;
    }

    // 1. Чтение файла
    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cerr << "Error: cannot open file " << argv[1] << std::endl;
        return 1;
    }
    std::stringstream buffer;
    buffer << file.rdbuf();

    // 2. Лексер: текст → поток токенов
    antlr4::ANTLRInputStream inputStream(buffer.str());
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

    // 5. Интерпретатор: обход дерева с вычислением
    try {
        ExampleInterpreter interpreter;
        interpreter.visit(tree);
    } catch (const std::exception &e) {
        std::cerr << "Runtime error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
