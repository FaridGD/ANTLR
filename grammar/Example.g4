grammar Example;

// =====================
// Parser rules
// =====================

program : block* EOF ;

block
    : header
    | list
    | quote
    | paragraph
    | fencedCodeBlock
    | indentedCodeBlock
    | emptyLine
    ;

header : HASHES WS* inline+ NEWLINE ;

list : listItem+ # UnorderedList ;
listItem : DASH WS+ (checkbox WS+)? inline+ NEWLINE ;

checkbox
    : LBRACK (WS | 'x' | 'X') RBRACK
    ;

quote : (GT WS? inline+ NEWLINE)+ ;

paragraph : inline+ NEWLINE ;

fencedCodeBlock : FENCED_CODE NEWLINE? ;

indentedCodeBlock : INDENTED_CODE+ ;

inline
    : image       # InlineImage
    | link        # InlineLink
    | INLINE_CODE # InlineCodeAlt
    | bold        # InlineBold
    | italic      # InlineItalic
    | DOUBLESTAR  # InlineDoubleStar
    | STAR        # InlineStar
    | LPAREN      # InlineLParen
    | RPAREN      # InlineRParen
    | TEXT        # InlineText
    | WS          # InlineWs
    | HASHES      # InlineHashes
    | DASH        # InlineDash
    | GT          # InlineGt
    ;

link : LBRACK inline+ RBRACK LPAREN urlContent RPAREN ;
image : EXCL LBRACK inline+ RBRACK LPAREN urlContent RPAREN ;
bold : DOUBLESTAR (italic | image | link | INLINE_CODE | STAR | LPAREN | RPAREN | TEXT | WS | HASHES | DASH | GT)* DOUBLESTAR ;
italic : STAR (bold | image | link | INLINE_CODE | DOUBLESTAR | LPAREN | RPAREN | TEXT | WS | HASHES | DASH | GT)* STAR ;

urlContent : (TEXT | DASH | HASHES | WS | GT)* ;

emptyLine : NEWLINE ;

// =====================
// Lexer rules
// =====================

FENCED_CODE : '```' ( . | '\n' | '\r' )*? '```' ;

// Inline стили
INLINE_CODE : '`' ~[`\r\n]+? '`' ;
DOUBLESTAR  : '**' ;
STAR        : '*' ;

INDENTED_CODE : ('    ' | '\t') ~[\r\n]* NEWLINE ;

LBRACK : '[' ;
RBRACK : ']' ;
LPAREN : '(' ;
RPAREN : ')' ;
EXCL   : '!' ;
GT     : '>' ;

HASHES : '#'+ ;
DASH   : '-' ;

NEWLINE : '\r'? '\n' ;
WS      : [ \t]+ ;

TEXT : ~[#!*`[\]()>\r\n \t\-]+ ;
