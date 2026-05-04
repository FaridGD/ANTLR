
// Generated from Example.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ExampleVisitor.h"


/**
 * This class provides an empty implementation of ExampleVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExampleBaseVisitor : public ExampleVisitor {
public:

  virtual std::any visitProgram(ExampleParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(ExampleParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHeader(ExampleParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnorderedList(ExampleParser::UnorderedListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitListItem(ExampleParser::ListItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCheckbox(ExampleParser::CheckboxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuote(ExampleParser::QuoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParagraph(ExampleParser::ParagraphContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFencedCodeBlock(ExampleParser::FencedCodeBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndentedCodeBlock(ExampleParser::IndentedCodeBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineImage(ExampleParser::InlineImageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineLink(ExampleParser::InlineLinkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineCodeAlt(ExampleParser::InlineCodeAltContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineBold(ExampleParser::InlineBoldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineItalic(ExampleParser::InlineItalicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineDoubleStar(ExampleParser::InlineDoubleStarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineStar(ExampleParser::InlineStarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineLParen(ExampleParser::InlineLParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineRParen(ExampleParser::InlineRParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineText(ExampleParser::InlineTextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineWs(ExampleParser::InlineWsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineHashes(ExampleParser::InlineHashesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineDash(ExampleParser::InlineDashContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineGt(ExampleParser::InlineGtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLink(ExampleParser::LinkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImage(ExampleParser::ImageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBold(ExampleParser::BoldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitItalic(ExampleParser::ItalicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUrlContent(ExampleParser::UrlContentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmptyLine(ExampleParser::EmptyLineContext *ctx) override {
    return visitChildren(ctx);
  }


};

