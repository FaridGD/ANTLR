// ============================================================================
// main_actions.cpp — точка входа (подход со встроенными действиями).
//
// Конвейер проще, чем у Visitor:
//   текст → лексер → токены → парсер (действия выполняются при разборе)
//
// Visitor/Listener не нужен: семантика встроена в грамматику.
// Это аналог подхода Bison, где $$ и $1 вычисляются прямо в правилах.
// ============================================================================

#include <iostream>
#include <fstream>
#include <sstream>

#include "antlr4-runtime.h"
#include "ExampleActionsLexer.h"
#include "ExampleActionsParser.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: main_actions <file>" << std::endl;
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

    // 2. Лексер
    antlr4::ANTLRInputStream inputStream(buffer.str());
    ExampleActionsLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);

    // 3. Парсер — действия выполняются автоматически при разборе.
    //    Не нужен отдельный Visitor или Listener.
    ExampleActionsParser parser(&tokens);

    try {
        parser.program();
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    // 4. Проверка ошибок
    if (parser.getNumberOfSyntaxErrors() > 0) {
        std::cerr << "Parsing failed with "
                  << parser.getNumberOfSyntaxErrors()
                  << " syntax error(s)." << std::endl;
        return 1;
    }

    return 0;
}
