
// Generated from Example.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ExampleParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExampleParser.
 */
class  ExampleVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExampleParser.
   */
    virtual std::any visitProgram(ExampleParser::ProgramContext *context) = 0;

    virtual std::any visitBlock(ExampleParser::BlockContext *context) = 0;

    virtual std::any visitHeader(ExampleParser::HeaderContext *context) = 0;

    virtual std::any visitUnorderedList(ExampleParser::UnorderedListContext *context) = 0;

    virtual std::any visitListItem(ExampleParser::ListItemContext *context) = 0;

    virtual std::any visitCheckbox(ExampleParser::CheckboxContext *context) = 0;

    virtual std::any visitQuote(ExampleParser::QuoteContext *context) = 0;

    virtual std::any visitParagraph(ExampleParser::ParagraphContext *context) = 0;

    virtual std::any visitFencedCodeBlock(ExampleParser::FencedCodeBlockContext *context) = 0;

    virtual std::any visitIndentedCodeBlock(ExampleParser::IndentedCodeBlockContext *context) = 0;

    virtual std::any visitInlineImage(ExampleParser::InlineImageContext *context) = 0;

    virtual std::any visitInlineLink(ExampleParser::InlineLinkContext *context) = 0;

    virtual std::any visitInlineCodeAlt(ExampleParser::InlineCodeAltContext *context) = 0;

    virtual std::any visitInlineBold(ExampleParser::InlineBoldContext *context) = 0;

    virtual std::any visitInlineItalic(ExampleParser::InlineItalicContext *context) = 0;

    virtual std::any visitInlineDoubleStar(ExampleParser::InlineDoubleStarContext *context) = 0;

    virtual std::any visitInlineStar(ExampleParser::InlineStarContext *context) = 0;

    virtual std::any visitInlineLParen(ExampleParser::InlineLParenContext *context) = 0;

    virtual std::any visitInlineRParen(ExampleParser::InlineRParenContext *context) = 0;

    virtual std::any visitInlineText(ExampleParser::InlineTextContext *context) = 0;

    virtual std::any visitInlineWs(ExampleParser::InlineWsContext *context) = 0;

    virtual std::any visitInlineHashes(ExampleParser::InlineHashesContext *context) = 0;

    virtual std::any visitInlineDash(ExampleParser::InlineDashContext *context) = 0;

    virtual std::any visitInlineGt(ExampleParser::InlineGtContext *context) = 0;

    virtual std::any visitLink(ExampleParser::LinkContext *context) = 0;

    virtual std::any visitImage(ExampleParser::ImageContext *context) = 0;

    virtual std::any visitBold(ExampleParser::BoldContext *context) = 0;

    virtual std::any visitItalic(ExampleParser::ItalicContext *context) = 0;

    virtual std::any visitUrlContent(ExampleParser::UrlContentContext *context) = 0;

    virtual std::any visitEmptyLine(ExampleParser::EmptyLineContext *context) = 0;


};

