
// Generated from Example.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  ExampleParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, FENCED_CODE = 3, INLINE_CODE = 4, DOUBLESTAR = 5, 
    STAR = 6, INDENTED_CODE = 7, LBRACK = 8, RBRACK = 9, LPAREN = 10, RPAREN = 11, 
    EXCL = 12, GT = 13, HASHES = 14, DASH = 15, NEWLINE = 16, WS = 17, TEXT = 18
  };

  enum {
    RuleProgram = 0, RuleBlock = 1, RuleHeader = 2, RuleList = 3, RuleListItem = 4, 
    RuleCheckbox = 5, RuleQuote = 6, RuleParagraph = 7, RuleFencedCodeBlock = 8, 
    RuleIndentedCodeBlock = 9, RuleInline = 10, RuleLink = 11, RuleImage = 12, 
    RuleBold = 13, RuleItalic = 14, RuleUrlContent = 15, RuleEmptyLine = 16
  };

  explicit ExampleParser(antlr4::TokenStream *input);

  ExampleParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ExampleParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class BlockContext;
  class HeaderContext;
  class ListContext;
  class ListItemContext;
  class CheckboxContext;
  class QuoteContext;
  class ParagraphContext;
  class FencedCodeBlockContext;
  class IndentedCodeBlockContext;
  class InlineContext;
  class LinkContext;
  class ImageContext;
  class BoldContext;
  class ItalicContext;
  class UrlContentContext;
  class EmptyLineContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HeaderContext *header();
    ListContext *list();
    QuoteContext *quote();
    ParagraphContext *paragraph();
    FencedCodeBlockContext *fencedCodeBlock();
    IndentedCodeBlockContext *indentedCodeBlock();
    EmptyLineContext *emptyLine();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  HeaderContext : public antlr4::ParserRuleContext {
  public:
    HeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASHES();
    antlr4::tree::TerminalNode *NEWLINE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<InlineContext *> inline_();
    InlineContext* inline_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderContext* header();

  class  ListContext : public antlr4::ParserRuleContext {
  public:
    ListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ListContext() = default;
    void copyFrom(ListContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnorderedListContext : public ListContext {
  public:
    UnorderedListContext(ListContext *ctx);

    std::vector<ListItemContext *> listItem();
    ListItemContext* listItem(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ListContext* list();

  class  ListItemContext : public antlr4::ParserRuleContext {
  public:
    ListItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DASH();
    antlr4::tree::TerminalNode *NEWLINE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    CheckboxContext *checkbox();
    std::vector<InlineContext *> inline_();
    InlineContext* inline_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListItemContext* listItem();

  class  CheckboxContext : public antlr4::ParserRuleContext {
  public:
    CheckboxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *WS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckboxContext* checkbox();

  class  QuoteContext : public antlr4::ParserRuleContext {
  public:
    QuoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<InlineContext *> inline_();
    InlineContext* inline_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuoteContext* quote();

  class  ParagraphContext : public antlr4::ParserRuleContext {
  public:
    ParagraphContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEWLINE();
    std::vector<InlineContext *> inline_();
    InlineContext* inline_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParagraphContext* paragraph();

  class  FencedCodeBlockContext : public antlr4::ParserRuleContext {
  public:
    FencedCodeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FENCED_CODE();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FencedCodeBlockContext* fencedCodeBlock();

  class  IndentedCodeBlockContext : public antlr4::ParserRuleContext {
  public:
    IndentedCodeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INDENTED_CODE();
    antlr4::tree::TerminalNode* INDENTED_CODE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndentedCodeBlockContext* indentedCodeBlock();

  class  InlineContext : public antlr4::ParserRuleContext {
  public:
    InlineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InlineContext() = default;
    void copyFrom(InlineContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InlineLParenContext : public InlineContext {
  public:
    InlineLParenContext(InlineContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineDashContext : public InlineContext {
  public:
    InlineDashContext(InlineContext *ctx);

    antlr4::tree::TerminalNode *DASH();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineRParenContext : public InlineContext {
  public:
    InlineRParenContext(InlineContext *ctx);

    antlr4::tree::TerminalNode *RPAREN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineCodeAltContext : public InlineContext {
  public:
    InlineCodeAltContext(InlineContext *ctx);

    antlr4::tree::TerminalNode *INLINE_CODE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineDoubleStarContext : public InlineContext {
  public:
    InlineDoubleStarContext(InlineContext *ctx);

    antlr4::tree::TerminalNode *DOUBLESTAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineHashesContext : public InlineContext {
  public:
    InlineHashesContext(InlineContext *ctx);

    antlr4::tree::TerminalNode *HASHES();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineGtContext : public InlineContext {
  public:
    InlineGtContext(InlineContext *ctx);

    antlr4::tree::TerminalNode *GT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineBoldContext : public InlineContext {
  public:
    InlineBoldContext(InlineContext *ctx);

    BoldContext *bold();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineTextContext : public InlineContext {
  public:
    InlineTextContext(InlineContext *ctx);

    antlr4::tree::TerminalNode *TEXT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineStarContext : public InlineContext {
  public:
    InlineStarContext(InlineContext *ctx);

    antlr4::tree::TerminalNode *STAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineItalicContext : public InlineContext {
  public:
    InlineItalicContext(InlineContext *ctx);

    ItalicContext *italic();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineImageContext : public InlineContext {
  public:
    InlineImageContext(InlineContext *ctx);

    ImageContext *image();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineWsContext : public InlineContext {
  public:
    InlineWsContext(InlineContext *ctx);

    antlr4::tree::TerminalNode *WS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineLinkContext : public InlineContext {
  public:
    InlineLinkContext(InlineContext *ctx);

    LinkContext *link();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InlineContext* inline_();

  class  LinkContext : public antlr4::ParserRuleContext {
  public:
    LinkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *LPAREN();
    UrlContentContext *urlContent();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<InlineContext *> inline_();
    InlineContext* inline_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LinkContext* link();

  class  ImageContext : public antlr4::ParserRuleContext {
  public:
    ImageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCL();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *LPAREN();
    UrlContentContext *urlContent();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<InlineContext *> inline_();
    InlineContext* inline_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImageContext* image();

  class  BoldContext : public antlr4::ParserRuleContext {
  public:
    BoldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DOUBLESTAR();
    antlr4::tree::TerminalNode* DOUBLESTAR(size_t i);
    std::vector<ItalicContext *> italic();
    ItalicContext* italic(size_t i);
    std::vector<ImageContext *> image();
    ImageContext* image(size_t i);
    std::vector<LinkContext *> link();
    LinkContext* link(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INLINE_CODE();
    antlr4::tree::TerminalNode* INLINE_CODE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TEXT();
    antlr4::tree::TerminalNode* TEXT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HASHES();
    antlr4::tree::TerminalNode* HASHES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DASH();
    antlr4::tree::TerminalNode* DASH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoldContext* bold();

  class  ItalicContext : public antlr4::ParserRuleContext {
  public:
    ItalicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    std::vector<BoldContext *> bold();
    BoldContext* bold(size_t i);
    std::vector<ImageContext *> image();
    ImageContext* image(size_t i);
    std::vector<LinkContext *> link();
    LinkContext* link(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INLINE_CODE();
    antlr4::tree::TerminalNode* INLINE_CODE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOUBLESTAR();
    antlr4::tree::TerminalNode* DOUBLESTAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TEXT();
    antlr4::tree::TerminalNode* TEXT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HASHES();
    antlr4::tree::TerminalNode* HASHES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DASH();
    antlr4::tree::TerminalNode* DASH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ItalicContext* italic();

  class  UrlContentContext : public antlr4::ParserRuleContext {
  public:
    UrlContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> TEXT();
    antlr4::tree::TerminalNode* TEXT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DASH();
    antlr4::tree::TerminalNode* DASH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HASHES();
    antlr4::tree::TerminalNode* HASHES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UrlContentContext* urlContent();

  class  EmptyLineContext : public antlr4::ParserRuleContext {
  public:
    EmptyLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyLineContext* emptyLine();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

