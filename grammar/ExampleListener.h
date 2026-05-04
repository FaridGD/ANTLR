
// Generated from Example.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ExampleParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExampleParser.
 */
class  ExampleListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(ExampleParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(ExampleParser::ProgramContext *ctx) = 0;

  virtual void enterBlock(ExampleParser::BlockContext *ctx) = 0;
  virtual void exitBlock(ExampleParser::BlockContext *ctx) = 0;

  virtual void enterHeader(ExampleParser::HeaderContext *ctx) = 0;
  virtual void exitHeader(ExampleParser::HeaderContext *ctx) = 0;

  virtual void enterUnorderedList(ExampleParser::UnorderedListContext *ctx) = 0;
  virtual void exitUnorderedList(ExampleParser::UnorderedListContext *ctx) = 0;

  virtual void enterListItem(ExampleParser::ListItemContext *ctx) = 0;
  virtual void exitListItem(ExampleParser::ListItemContext *ctx) = 0;

  virtual void enterCheckbox(ExampleParser::CheckboxContext *ctx) = 0;
  virtual void exitCheckbox(ExampleParser::CheckboxContext *ctx) = 0;

  virtual void enterQuote(ExampleParser::QuoteContext *ctx) = 0;
  virtual void exitQuote(ExampleParser::QuoteContext *ctx) = 0;

  virtual void enterParagraph(ExampleParser::ParagraphContext *ctx) = 0;
  virtual void exitParagraph(ExampleParser::ParagraphContext *ctx) = 0;

  virtual void enterFencedCodeBlock(ExampleParser::FencedCodeBlockContext *ctx) = 0;
  virtual void exitFencedCodeBlock(ExampleParser::FencedCodeBlockContext *ctx) = 0;

  virtual void enterIndentedCodeBlock(ExampleParser::IndentedCodeBlockContext *ctx) = 0;
  virtual void exitIndentedCodeBlock(ExampleParser::IndentedCodeBlockContext *ctx) = 0;

  virtual void enterInlineImage(ExampleParser::InlineImageContext *ctx) = 0;
  virtual void exitInlineImage(ExampleParser::InlineImageContext *ctx) = 0;

  virtual void enterInlineLink(ExampleParser::InlineLinkContext *ctx) = 0;
  virtual void exitInlineLink(ExampleParser::InlineLinkContext *ctx) = 0;

  virtual void enterInlineCodeAlt(ExampleParser::InlineCodeAltContext *ctx) = 0;
  virtual void exitInlineCodeAlt(ExampleParser::InlineCodeAltContext *ctx) = 0;

  virtual void enterInlineBold(ExampleParser::InlineBoldContext *ctx) = 0;
  virtual void exitInlineBold(ExampleParser::InlineBoldContext *ctx) = 0;

  virtual void enterInlineItalic(ExampleParser::InlineItalicContext *ctx) = 0;
  virtual void exitInlineItalic(ExampleParser::InlineItalicContext *ctx) = 0;

  virtual void enterInlineDoubleStar(ExampleParser::InlineDoubleStarContext *ctx) = 0;
  virtual void exitInlineDoubleStar(ExampleParser::InlineDoubleStarContext *ctx) = 0;

  virtual void enterInlineStar(ExampleParser::InlineStarContext *ctx) = 0;
  virtual void exitInlineStar(ExampleParser::InlineStarContext *ctx) = 0;

  virtual void enterInlineLParen(ExampleParser::InlineLParenContext *ctx) = 0;
  virtual void exitInlineLParen(ExampleParser::InlineLParenContext *ctx) = 0;

  virtual void enterInlineRParen(ExampleParser::InlineRParenContext *ctx) = 0;
  virtual void exitInlineRParen(ExampleParser::InlineRParenContext *ctx) = 0;

  virtual void enterInlineText(ExampleParser::InlineTextContext *ctx) = 0;
  virtual void exitInlineText(ExampleParser::InlineTextContext *ctx) = 0;

  virtual void enterInlineWs(ExampleParser::InlineWsContext *ctx) = 0;
  virtual void exitInlineWs(ExampleParser::InlineWsContext *ctx) = 0;

  virtual void enterInlineHashes(ExampleParser::InlineHashesContext *ctx) = 0;
  virtual void exitInlineHashes(ExampleParser::InlineHashesContext *ctx) = 0;

  virtual void enterInlineDash(ExampleParser::InlineDashContext *ctx) = 0;
  virtual void exitInlineDash(ExampleParser::InlineDashContext *ctx) = 0;

  virtual void enterInlineGt(ExampleParser::InlineGtContext *ctx) = 0;
  virtual void exitInlineGt(ExampleParser::InlineGtContext *ctx) = 0;

  virtual void enterLink(ExampleParser::LinkContext *ctx) = 0;
  virtual void exitLink(ExampleParser::LinkContext *ctx) = 0;

  virtual void enterImage(ExampleParser::ImageContext *ctx) = 0;
  virtual void exitImage(ExampleParser::ImageContext *ctx) = 0;

  virtual void enterBold(ExampleParser::BoldContext *ctx) = 0;
  virtual void exitBold(ExampleParser::BoldContext *ctx) = 0;

  virtual void enterItalic(ExampleParser::ItalicContext *ctx) = 0;
  virtual void exitItalic(ExampleParser::ItalicContext *ctx) = 0;

  virtual void enterUrlContent(ExampleParser::UrlContentContext *ctx) = 0;
  virtual void exitUrlContent(ExampleParser::UrlContentContext *ctx) = 0;

  virtual void enterEmptyLine(ExampleParser::EmptyLineContext *ctx) = 0;
  virtual void exitEmptyLine(ExampleParser::EmptyLineContext *ctx) = 0;


};

