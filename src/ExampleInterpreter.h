#pragma once
// ============================================================================
// ExampleInterpreter.h — Visitor-интерпретатор.
//
// Наследуется от сгенерированного ExampleBaseVisitor.
// Каждый visit-метод соответствует метке (#) в грамматике.
// Выражения возвращают int через std::any.
// Операторы возвращают пустой std::any (аналог void).
//
// Конвейер: текст → лексер → токены → парсер → CST → Visitor (этот файл)
// ============================================================================

#include <iostream>
#include <map>
#include <string>
#include <any>
#include <stdexcept>
#include "ExampleBaseVisitor.h"

class ExampleInterpreter : public ExampleBaseVisitor {
public:

    // ======================== ВЫРАЖЕНИЯ ========================
    // Каждый visit-метод возвращает std::any, внутри — int.
    // visit(child) рекурсивно обходит поддерево и возвращает результат.
    // std::any_cast<int>(...) извлекает int из std::any.

    std::any visitInteger(ExampleParser::IntegerContext *ctx) override {
        // Листовой узел: текст токена INT → число.
        return std::stoi(ctx->INT()->getText());
    }

    std::any visitParens(ExampleParser::ParensContext *ctx) override {
        // Скобки: просто передаём значение внутреннего выражения.
        return visit(ctx->expr());
    }

    std::any visitMulDiv(ExampleParser::MulDivContext *ctx) override {
        // Рекурсивно вычисляем левое и правое подвыражения.
        int left  = std::any_cast<int>(visit(ctx->expr(0)));
        int right = std::any_cast<int>(visit(ctx->expr(1)));
        // Оператор — текст среднего потомка (индекс 1 в children).
        std::string op = ctx->children[1]->getText();
        if (op == "*") return left * right;
        if (right == 0)
            throw std::runtime_error("Division by zero at line "
                + std::to_string(ctx->getStart()->getLine()));
        return left / right;
    }

    std::any visitAddSub(ExampleParser::AddSubContext *ctx) override {
        int left  = std::any_cast<int>(visit(ctx->expr(0)));
        int right = std::any_cast<int>(visit(ctx->expr(1)));
        std::string op = ctx->children[1]->getText();
        return (op == "+") ? left + right : left - right;
    }

    // ======================== ОПЕРАТОРЫ ========================
    // Операторы возвращают пустой std::any (аналог void).

    std::any visitPrintStmt(ExampleParser::PrintStmtContext *ctx) override {
        int value = std::any_cast<int>(visit(ctx->expr()));
        std::cout << value << std::endl;
        return {};
    }

};
