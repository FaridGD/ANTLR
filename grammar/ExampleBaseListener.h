
// Generated from Example.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ExampleListener.h"


/**
 * This class provides an empty implementation of ExampleListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExampleBaseListener : public ExampleListener {
public:

  virtual void enterProgram(ExampleParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(ExampleParser::ProgramContext * /*ctx*/) override { }

  virtual void enterBlock(ExampleParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(ExampleParser::BlockContext * /*ctx*/) override { }

  virtual void enterHeader(ExampleParser::HeaderContext * /*ctx*/) override { }
  virtual void exitHeader(ExampleParser::HeaderContext * /*ctx*/) override { }

  virtual void enterUnorderedList(ExampleParser::UnorderedListContext * /*ctx*/) override { }
  virtual void exitUnorderedList(ExampleParser::UnorderedListContext * /*ctx*/) override { }

  virtual void enterListItem(ExampleParser::ListItemContext * /*ctx*/) override { }
  virtual void exitListItem(ExampleParser::ListItemContext * /*ctx*/) override { }

  virtual void enterCheckbox(ExampleParser::CheckboxContext * /*ctx*/) override { }
  virtual void exitCheckbox(ExampleParser::CheckboxContext * /*ctx*/) override { }

  virtual void enterQuote(ExampleParser::QuoteContext * /*ctx*/) override { }
  virtual void exitQuote(ExampleParser::QuoteContext * /*ctx*/) override { }

  virtual void enterParagraph(ExampleParser::ParagraphContext * /*ctx*/) override { }
  virtual void exitParagraph(ExampleParser::ParagraphContext * /*ctx*/) override { }

  virtual void enterFencedCodeBlock(ExampleParser::FencedCodeBlockContext * /*ctx*/) override { }
  virtual void exitFencedCodeBlock(ExampleParser::FencedCodeBlockContext * /*ctx*/) override { }

  virtual void enterIndentedCodeBlock(ExampleParser::IndentedCodeBlockContext * /*ctx*/) override { }
  virtual void exitIndentedCodeBlock(ExampleParser::IndentedCodeBlockContext * /*ctx*/) override { }

  virtual void enterInlineImage(ExampleParser::InlineImageContext * /*ctx*/) override { }
  virtual void exitInlineImage(ExampleParser::InlineImageContext * /*ctx*/) override { }

  virtual void enterInlineLink(ExampleParser::InlineLinkContext * /*ctx*/) override { }
  virtual void exitInlineLink(ExampleParser::InlineLinkContext * /*ctx*/) override { }

  virtual void enterInlineCodeAlt(ExampleParser::InlineCodeAltContext * /*ctx*/) override { }
  virtual void exitInlineCodeAlt(ExampleParser::InlineCodeAltContext * /*ctx*/) override { }

  virtual void enterInlineBold(ExampleParser::InlineBoldContext * /*ctx*/) override { }
  virtual void exitInlineBold(ExampleParser::InlineBoldContext * /*ctx*/) override { }

  virtual void enterInlineItalic(ExampleParser::InlineItalicContext * /*ctx*/) override { }
  virtual void exitInlineItalic(ExampleParser::InlineItalicContext * /*ctx*/) override { }

  virtual void enterInlineDoubleStar(ExampleParser::InlineDoubleStarContext * /*ctx*/) override { }
  virtual void exitInlineDoubleStar(ExampleParser::InlineDoubleStarContext * /*ctx*/) override { }

  virtual void enterInlineStar(ExampleParser::InlineStarContext * /*ctx*/) override { }
  virtual void exitInlineStar(ExampleParser::InlineStarContext * /*ctx*/) override { }

  virtual void enterInlineLParen(ExampleParser::InlineLParenContext * /*ctx*/) override { }
  virtual void exitInlineLParen(ExampleParser::InlineLParenContext * /*ctx*/) override { }

  virtual void enterInlineRParen(ExampleParser::InlineRParenContext * /*ctx*/) override { }
  virtual void exitInlineRParen(ExampleParser::InlineRParenContext * /*ctx*/) override { }

  virtual void enterInlineText(ExampleParser::InlineTextContext * /*ctx*/) override { }
  virtual void exitInlineText(ExampleParser::InlineTextContext * /*ctx*/) override { }

  virtual void enterInlineWs(ExampleParser::InlineWsContext * /*ctx*/) override { }
  virtual void exitInlineWs(ExampleParser::InlineWsContext * /*ctx*/) override { }

  virtual void enterInlineHashes(ExampleParser::InlineHashesContext * /*ctx*/) override { }
  virtual void exitInlineHashes(ExampleParser::InlineHashesContext * /*ctx*/) override { }

  virtual void enterInlineDash(ExampleParser::InlineDashContext * /*ctx*/) override { }
  virtual void exitInlineDash(ExampleParser::InlineDashContext * /*ctx*/) override { }

  virtual void enterInlineGt(ExampleParser::InlineGtContext * /*ctx*/) override { }
  virtual void exitInlineGt(ExampleParser::InlineGtContext * /*ctx*/) override { }

  virtual void enterLink(ExampleParser::LinkContext * /*ctx*/) override { }
  virtual void exitLink(ExampleParser::LinkContext * /*ctx*/) override { }

  virtual void enterImage(ExampleParser::ImageContext * /*ctx*/) override { }
  virtual void exitImage(ExampleParser::ImageContext * /*ctx*/) override { }

  virtual void enterBold(ExampleParser::BoldContext * /*ctx*/) override { }
  virtual void exitBold(ExampleParser::BoldContext * /*ctx*/) override { }

  virtual void enterItalic(ExampleParser::ItalicContext * /*ctx*/) override { }
  virtual void exitItalic(ExampleParser::ItalicContext * /*ctx*/) override { }

  virtual void enterUrlContent(ExampleParser::UrlContentContext * /*ctx*/) override { }
  virtual void exitUrlContent(ExampleParser::UrlContentContext * /*ctx*/) override { }

  virtual void enterEmptyLine(ExampleParser::EmptyLineContext * /*ctx*/) override { }
  virtual void exitEmptyLine(ExampleParser::EmptyLineContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

