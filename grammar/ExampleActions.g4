// ============================================================================
// ExampleActions.g4 — грамматика со встроенными действиями.
// Семантика встроена прямо в грамматику (аналог подхода Bison).
//
// Сравните с Example.g4 — тот же язык, но другой способ реализации семантики.
//
// Достоинства:  код компактнее, всё в одном файле.
// Недостатки:   грамматика привязана к C++, нельзя переиспользовать для
//               другого target; семантика перемешана с синтаксисом.
// ============================================================================
grammar ExampleActions;

// @header — вставляется в начало сгенерированного .h-файла парсера.
@header {
#include <iostream>
#include <map>
#include <string>
#include <stdexcept>
}

// @members — вставляется внутрь класса парсера (аналог глобальных переменных Bison).
@members {
}

// Стартовое правило.
program : statement+ EOF ;

// Операторы языка.
// $expr — ссылка на контекст правила expr.
// $expr.value — доступ к атрибуту value, объявленному через returns.
statement
    : 'print' expr ';'
      { std::cout << $expr.value << std::endl; }
    ;

// returns [int value] — объявляет атрибут правила (аналог $$ в Bison).
// $value — текущий атрибут (аналог $$).
// $e1.value, $e2.value — атрибуты подвыражений (аналог $1, $3).
expr returns [int value]
    : e1=expr '*' e2=expr   { $value = $e1.value * $e2.value; }
    | e1=expr '/' e2=expr
      {
        if ($e2.value == 0)
            throw std::runtime_error("Division by zero");
        $value = $e1.value / $e2.value;
      }
    | e1=expr '+' e2=expr   { $value = $e1.value + $e2.value; }
    | e1=expr '-' e2=expr   { $value = $e1.value - $e2.value; }
    | INT                    { $value = std::stoi($INT.text); }
    | '(' e=expr ')'        { $value = $e.value; }
    ;

// === Лексерные правила ===
ID      : [a-zA-Z_] [a-zA-Z_0-9]* ;
INT     : [0-9]+ ;
WS      : [ \t\r\n]+ -> skip ;
COMMENT : '//' ~[\r\n]* -> channel(HIDDEN) ;
