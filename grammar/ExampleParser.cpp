
// Generated from Example.g4 by ANTLR 4.13.1


#include "ExampleListener.h"
#include "ExampleVisitor.h"

#include "ExampleParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ExampleParserStaticData final {
  ExampleParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExampleParserStaticData(const ExampleParserStaticData&) = delete;
  ExampleParserStaticData(ExampleParserStaticData&&) = delete;
  ExampleParserStaticData& operator=(const ExampleParserStaticData&) = delete;
  ExampleParserStaticData& operator=(ExampleParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exampleParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ExampleParserStaticData *exampleParserStaticData = nullptr;

void exampleParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exampleParserStaticData != nullptr) {
    return;
  }
#else
  assert(exampleParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExampleParserStaticData>(
    std::vector<std::string>{
      "program", "block", "header", "list", "listItem", "checkbox", "quote", 
      "paragraph", "fencedCodeBlock", "indentedCodeBlock", "inline", "link", 
      "image", "bold", "italic", "urlContent", "emptyLine"
    },
    std::vector<std::string>{
      "", "'x'", "'X'", "", "", "'**'", "'*'", "", "'['", "']'", "'('", 
      "')'", "'!'", "'>'", "", "'-'"
    },
    std::vector<std::string>{
      "", "", "", "FENCED_CODE", "INLINE_CODE", "DOUBLESTAR", "STAR", "INDENTED_CODE", 
      "LBRACK", "RBRACK", "LPAREN", "RPAREN", "EXCL", "GT", "HASHES", "DASH", 
      "NEWLINE", "WS", "TEXT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,18,214,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,1,0,5,0,36,8,0,10,0,12,0,39,9,0,1,0,1,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,3,1,50,8,1,1,2,1,2,5,2,54,8,2,10,2,12,2,57,9,2,
  	1,2,4,2,60,8,2,11,2,12,2,61,1,2,1,2,1,3,4,3,67,8,3,11,3,12,3,68,1,4,1,
  	4,4,4,73,8,4,11,4,12,4,74,1,4,1,4,4,4,79,8,4,11,4,12,4,80,3,4,83,8,4,
  	1,4,4,4,86,8,4,11,4,12,4,87,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,3,6,98,8,
  	6,1,6,4,6,101,8,6,11,6,12,6,102,1,6,1,6,4,6,107,8,6,11,6,12,6,108,1,7,
  	4,7,112,8,7,11,7,12,7,113,1,7,1,7,1,8,1,8,3,8,120,8,8,1,9,4,9,123,8,9,
  	11,9,12,9,124,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,3,10,141,8,10,1,11,1,11,4,11,145,8,11,11,11,12,11,146,
  	1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,4,12,157,8,12,11,12,12,12,158,
  	1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,5,13,179,8,13,10,13,12,13,182,9,13,1,13,1,13,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,5,14,199,
  	8,14,10,14,12,14,202,9,14,1,14,1,14,1,15,5,15,207,8,15,10,15,12,15,210,
  	9,15,1,16,1,16,1,16,0,0,17,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
  	32,0,2,2,0,1,2,17,17,2,0,13,15,17,18,256,0,37,1,0,0,0,2,49,1,0,0,0,4,
  	51,1,0,0,0,6,66,1,0,0,0,8,70,1,0,0,0,10,91,1,0,0,0,12,106,1,0,0,0,14,
  	111,1,0,0,0,16,117,1,0,0,0,18,122,1,0,0,0,20,140,1,0,0,0,22,142,1,0,0,
  	0,24,153,1,0,0,0,26,165,1,0,0,0,28,185,1,0,0,0,30,208,1,0,0,0,32,211,
  	1,0,0,0,34,36,3,2,1,0,35,34,1,0,0,0,36,39,1,0,0,0,37,35,1,0,0,0,37,38,
  	1,0,0,0,38,40,1,0,0,0,39,37,1,0,0,0,40,41,5,0,0,1,41,1,1,0,0,0,42,50,
  	3,4,2,0,43,50,3,6,3,0,44,50,3,12,6,0,45,50,3,14,7,0,46,50,3,16,8,0,47,
  	50,3,18,9,0,48,50,3,32,16,0,49,42,1,0,0,0,49,43,1,0,0,0,49,44,1,0,0,0,
  	49,45,1,0,0,0,49,46,1,0,0,0,49,47,1,0,0,0,49,48,1,0,0,0,50,3,1,0,0,0,
  	51,55,5,14,0,0,52,54,5,17,0,0,53,52,1,0,0,0,54,57,1,0,0,0,55,53,1,0,0,
  	0,55,56,1,0,0,0,56,59,1,0,0,0,57,55,1,0,0,0,58,60,3,20,10,0,59,58,1,0,
  	0,0,60,61,1,0,0,0,61,59,1,0,0,0,61,62,1,0,0,0,62,63,1,0,0,0,63,64,5,16,
  	0,0,64,5,1,0,0,0,65,67,3,8,4,0,66,65,1,0,0,0,67,68,1,0,0,0,68,66,1,0,
  	0,0,68,69,1,0,0,0,69,7,1,0,0,0,70,72,5,15,0,0,71,73,5,17,0,0,72,71,1,
  	0,0,0,73,74,1,0,0,0,74,72,1,0,0,0,74,75,1,0,0,0,75,82,1,0,0,0,76,78,3,
  	10,5,0,77,79,5,17,0,0,78,77,1,0,0,0,79,80,1,0,0,0,80,78,1,0,0,0,80,81,
  	1,0,0,0,81,83,1,0,0,0,82,76,1,0,0,0,82,83,1,0,0,0,83,85,1,0,0,0,84,86,
  	3,20,10,0,85,84,1,0,0,0,86,87,1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,
  	89,1,0,0,0,89,90,5,16,0,0,90,9,1,0,0,0,91,92,5,8,0,0,92,93,7,0,0,0,93,
  	94,5,9,0,0,94,11,1,0,0,0,95,97,5,13,0,0,96,98,5,17,0,0,97,96,1,0,0,0,
  	97,98,1,0,0,0,98,100,1,0,0,0,99,101,3,20,10,0,100,99,1,0,0,0,101,102,
  	1,0,0,0,102,100,1,0,0,0,102,103,1,0,0,0,103,104,1,0,0,0,104,105,5,16,
  	0,0,105,107,1,0,0,0,106,95,1,0,0,0,107,108,1,0,0,0,108,106,1,0,0,0,108,
  	109,1,0,0,0,109,13,1,0,0,0,110,112,3,20,10,0,111,110,1,0,0,0,112,113,
  	1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,115,1,0,0,0,115,116,5,16,
  	0,0,116,15,1,0,0,0,117,119,5,3,0,0,118,120,5,16,0,0,119,118,1,0,0,0,119,
  	120,1,0,0,0,120,17,1,0,0,0,121,123,5,7,0,0,122,121,1,0,0,0,123,124,1,
  	0,0,0,124,122,1,0,0,0,124,125,1,0,0,0,125,19,1,0,0,0,126,141,3,24,12,
  	0,127,141,3,22,11,0,128,141,5,4,0,0,129,141,3,26,13,0,130,141,3,28,14,
  	0,131,141,5,5,0,0,132,141,5,6,0,0,133,141,5,10,0,0,134,141,5,11,0,0,135,
  	141,5,18,0,0,136,141,5,17,0,0,137,141,5,14,0,0,138,141,5,15,0,0,139,141,
  	5,13,0,0,140,126,1,0,0,0,140,127,1,0,0,0,140,128,1,0,0,0,140,129,1,0,
  	0,0,140,130,1,0,0,0,140,131,1,0,0,0,140,132,1,0,0,0,140,133,1,0,0,0,140,
  	134,1,0,0,0,140,135,1,0,0,0,140,136,1,0,0,0,140,137,1,0,0,0,140,138,1,
  	0,0,0,140,139,1,0,0,0,141,21,1,0,0,0,142,144,5,8,0,0,143,145,3,20,10,
  	0,144,143,1,0,0,0,145,146,1,0,0,0,146,144,1,0,0,0,146,147,1,0,0,0,147,
  	148,1,0,0,0,148,149,5,9,0,0,149,150,5,10,0,0,150,151,3,30,15,0,151,152,
  	5,11,0,0,152,23,1,0,0,0,153,154,5,12,0,0,154,156,5,8,0,0,155,157,3,20,
  	10,0,156,155,1,0,0,0,157,158,1,0,0,0,158,156,1,0,0,0,158,159,1,0,0,0,
  	159,160,1,0,0,0,160,161,5,9,0,0,161,162,5,10,0,0,162,163,3,30,15,0,163,
  	164,5,11,0,0,164,25,1,0,0,0,165,180,5,5,0,0,166,179,3,28,14,0,167,179,
  	3,24,12,0,168,179,3,22,11,0,169,179,5,4,0,0,170,179,5,6,0,0,171,179,5,
  	10,0,0,172,179,5,11,0,0,173,179,5,18,0,0,174,179,5,17,0,0,175,179,5,14,
  	0,0,176,179,5,15,0,0,177,179,5,13,0,0,178,166,1,0,0,0,178,167,1,0,0,0,
  	178,168,1,0,0,0,178,169,1,0,0,0,178,170,1,0,0,0,178,171,1,0,0,0,178,172,
  	1,0,0,0,178,173,1,0,0,0,178,174,1,0,0,0,178,175,1,0,0,0,178,176,1,0,0,
  	0,178,177,1,0,0,0,179,182,1,0,0,0,180,178,1,0,0,0,180,181,1,0,0,0,181,
  	183,1,0,0,0,182,180,1,0,0,0,183,184,5,5,0,0,184,27,1,0,0,0,185,200,5,
  	6,0,0,186,199,3,26,13,0,187,199,3,24,12,0,188,199,3,22,11,0,189,199,5,
  	4,0,0,190,199,5,5,0,0,191,199,5,10,0,0,192,199,5,11,0,0,193,199,5,18,
  	0,0,194,199,5,17,0,0,195,199,5,14,0,0,196,199,5,15,0,0,197,199,5,13,0,
  	0,198,186,1,0,0,0,198,187,1,0,0,0,198,188,1,0,0,0,198,189,1,0,0,0,198,
  	190,1,0,0,0,198,191,1,0,0,0,198,192,1,0,0,0,198,193,1,0,0,0,198,194,1,
  	0,0,0,198,195,1,0,0,0,198,196,1,0,0,0,198,197,1,0,0,0,199,202,1,0,0,0,
  	200,198,1,0,0,0,200,201,1,0,0,0,201,203,1,0,0,0,202,200,1,0,0,0,203,204,
  	5,6,0,0,204,29,1,0,0,0,205,207,7,1,0,0,206,205,1,0,0,0,207,210,1,0,0,
  	0,208,206,1,0,0,0,208,209,1,0,0,0,209,31,1,0,0,0,210,208,1,0,0,0,211,
  	212,5,16,0,0,212,33,1,0,0,0,23,37,49,55,61,68,74,80,82,87,97,102,108,
  	113,119,124,140,146,158,178,180,198,200,208
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exampleParserStaticData = staticData.release();
}

}

ExampleParser::ExampleParser(TokenStream *input) : ExampleParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ExampleParser::ExampleParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ExampleParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *exampleParserStaticData->atn, exampleParserStaticData->decisionToDFA, exampleParserStaticData->sharedContextCache, options);
}

ExampleParser::~ExampleParser() {
  delete _interpreter;
}

const atn::ATN& ExampleParser::getATN() const {
  return *exampleParserStaticData->atn;
}

std::string ExampleParser::getGrammarFileName() const {
  return "Example.g4";
}

const std::vector<std::string>& ExampleParser::getRuleNames() const {
  return exampleParserStaticData->ruleNames;
}

const dfa::Vocabulary& ExampleParser::getVocabulary() const {
  return exampleParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExampleParser::getSerializedATN() const {
  return exampleParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

ExampleParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExampleParser::ProgramContext::EOF() {
  return getToken(ExampleParser::EOF, 0);
}

std::vector<ExampleParser::BlockContext *> ExampleParser::ProgramContext::block() {
  return getRuleContexts<ExampleParser::BlockContext>();
}

ExampleParser::BlockContext* ExampleParser::ProgramContext::block(size_t i) {
  return getRuleContext<ExampleParser::BlockContext>(i);
}


size_t ExampleParser::ProgramContext::getRuleIndex() const {
  return ExampleParser::RuleProgram;
}

void ExampleParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void ExampleParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any ExampleParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::ProgramContext* ExampleParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ExampleParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 523768) != 0)) {
      setState(34);
      block();
      setState(39);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(40);
    match(ExampleParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

ExampleParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExampleParser::HeaderContext* ExampleParser::BlockContext::header() {
  return getRuleContext<ExampleParser::HeaderContext>(0);
}

ExampleParser::ListContext* ExampleParser::BlockContext::list() {
  return getRuleContext<ExampleParser::ListContext>(0);
}

ExampleParser::QuoteContext* ExampleParser::BlockContext::quote() {
  return getRuleContext<ExampleParser::QuoteContext>(0);
}

ExampleParser::ParagraphContext* ExampleParser::BlockContext::paragraph() {
  return getRuleContext<ExampleParser::ParagraphContext>(0);
}

ExampleParser::FencedCodeBlockContext* ExampleParser::BlockContext::fencedCodeBlock() {
  return getRuleContext<ExampleParser::FencedCodeBlockContext>(0);
}

ExampleParser::IndentedCodeBlockContext* ExampleParser::BlockContext::indentedCodeBlock() {
  return getRuleContext<ExampleParser::IndentedCodeBlockContext>(0);
}

ExampleParser::EmptyLineContext* ExampleParser::BlockContext::emptyLine() {
  return getRuleContext<ExampleParser::EmptyLineContext>(0);
}


size_t ExampleParser::BlockContext::getRuleIndex() const {
  return ExampleParser::RuleBlock;
}

void ExampleParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void ExampleParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any ExampleParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::BlockContext* ExampleParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, ExampleParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(42);
      header();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(43);
      list();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(44);
      quote();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(45);
      paragraph();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(46);
      fencedCodeBlock();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(47);
      indentedCodeBlock();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(48);
      emptyLine();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

ExampleParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExampleParser::HeaderContext::HASHES() {
  return getToken(ExampleParser::HASHES, 0);
}

tree::TerminalNode* ExampleParser::HeaderContext::NEWLINE() {
  return getToken(ExampleParser::NEWLINE, 0);
}

std::vector<tree::TerminalNode *> ExampleParser::HeaderContext::WS() {
  return getTokens(ExampleParser::WS);
}

tree::TerminalNode* ExampleParser::HeaderContext::WS(size_t i) {
  return getToken(ExampleParser::WS, i);
}

std::vector<ExampleParser::InlineContext *> ExampleParser::HeaderContext::inline_() {
  return getRuleContexts<ExampleParser::InlineContext>();
}

ExampleParser::InlineContext* ExampleParser::HeaderContext::inline_(size_t i) {
  return getRuleContext<ExampleParser::InlineContext>(i);
}


size_t ExampleParser::HeaderContext::getRuleIndex() const {
  return ExampleParser::RuleHeader;
}

void ExampleParser::HeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader(this);
}

void ExampleParser::HeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader(this);
}


std::any ExampleParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::HeaderContext* ExampleParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 4, ExampleParser::RuleHeader);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(ExampleParser::HASHES);
    setState(55);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(52);
        match(ExampleParser::WS); 
      }
      setState(57);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(59); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(58);
      inline_();
      setState(61); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458096) != 0));
    setState(63);
    match(ExampleParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListContext ------------------------------------------------------------------

ExampleParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExampleParser::ListContext::getRuleIndex() const {
  return ExampleParser::RuleList;
}

void ExampleParser::ListContext::copyFrom(ListContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnorderedListContext ------------------------------------------------------------------

std::vector<ExampleParser::ListItemContext *> ExampleParser::UnorderedListContext::listItem() {
  return getRuleContexts<ExampleParser::ListItemContext>();
}

ExampleParser::ListItemContext* ExampleParser::UnorderedListContext::listItem(size_t i) {
  return getRuleContext<ExampleParser::ListItemContext>(i);
}

ExampleParser::UnorderedListContext::UnorderedListContext(ListContext *ctx) { copyFrom(ctx); }

void ExampleParser::UnorderedListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnorderedList(this);
}
void ExampleParser::UnorderedListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnorderedList(this);
}

std::any ExampleParser::UnorderedListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitUnorderedList(this);
  else
    return visitor->visitChildren(this);
}
ExampleParser::ListContext* ExampleParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 6, ExampleParser::RuleList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    _localctx = _tracker.createInstance<ExampleParser::UnorderedListContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(66); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(65);
              listItem();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(68); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListItemContext ------------------------------------------------------------------

ExampleParser::ListItemContext::ListItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExampleParser::ListItemContext::DASH() {
  return getToken(ExampleParser::DASH, 0);
}

tree::TerminalNode* ExampleParser::ListItemContext::NEWLINE() {
  return getToken(ExampleParser::NEWLINE, 0);
}

std::vector<tree::TerminalNode *> ExampleParser::ListItemContext::WS() {
  return getTokens(ExampleParser::WS);
}

tree::TerminalNode* ExampleParser::ListItemContext::WS(size_t i) {
  return getToken(ExampleParser::WS, i);
}

ExampleParser::CheckboxContext* ExampleParser::ListItemContext::checkbox() {
  return getRuleContext<ExampleParser::CheckboxContext>(0);
}

std::vector<ExampleParser::InlineContext *> ExampleParser::ListItemContext::inline_() {
  return getRuleContexts<ExampleParser::InlineContext>();
}

ExampleParser::InlineContext* ExampleParser::ListItemContext::inline_(size_t i) {
  return getRuleContext<ExampleParser::InlineContext>(i);
}


size_t ExampleParser::ListItemContext::getRuleIndex() const {
  return ExampleParser::RuleListItem;
}

void ExampleParser::ListItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListItem(this);
}

void ExampleParser::ListItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListItem(this);
}


std::any ExampleParser::ListItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitListItem(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::ListItemContext* ExampleParser::listItem() {
  ListItemContext *_localctx = _tracker.createInstance<ListItemContext>(_ctx, getState());
  enterRule(_localctx, 8, ExampleParser::RuleListItem);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(ExampleParser::DASH);
    setState(72); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(71);
              match(ExampleParser::WS);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(74); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(82);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(76);
      checkbox();
      setState(78); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(77);
                match(ExampleParser::WS);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(80); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    default:
      break;
    }
    setState(85); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(84);
      inline_();
      setState(87); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458096) != 0));
    setState(89);
    match(ExampleParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CheckboxContext ------------------------------------------------------------------

ExampleParser::CheckboxContext::CheckboxContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExampleParser::CheckboxContext::LBRACK() {
  return getToken(ExampleParser::LBRACK, 0);
}

tree::TerminalNode* ExampleParser::CheckboxContext::RBRACK() {
  return getToken(ExampleParser::RBRACK, 0);
}

tree::TerminalNode* ExampleParser::CheckboxContext::WS() {
  return getToken(ExampleParser::WS, 0);
}


size_t ExampleParser::CheckboxContext::getRuleIndex() const {
  return ExampleParser::RuleCheckbox;
}

void ExampleParser::CheckboxContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCheckbox(this);
}

void ExampleParser::CheckboxContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCheckbox(this);
}


std::any ExampleParser::CheckboxContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitCheckbox(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::CheckboxContext* ExampleParser::checkbox() {
  CheckboxContext *_localctx = _tracker.createInstance<CheckboxContext>(_ctx, getState());
  enterRule(_localctx, 10, ExampleParser::RuleCheckbox);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(ExampleParser::LBRACK);
    setState(92);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 131078) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(93);
    match(ExampleParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuoteContext ------------------------------------------------------------------

ExampleParser::QuoteContext::QuoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExampleParser::QuoteContext::GT() {
  return getTokens(ExampleParser::GT);
}

tree::TerminalNode* ExampleParser::QuoteContext::GT(size_t i) {
  return getToken(ExampleParser::GT, i);
}

std::vector<tree::TerminalNode *> ExampleParser::QuoteContext::NEWLINE() {
  return getTokens(ExampleParser::NEWLINE);
}

tree::TerminalNode* ExampleParser::QuoteContext::NEWLINE(size_t i) {
  return getToken(ExampleParser::NEWLINE, i);
}

std::vector<tree::TerminalNode *> ExampleParser::QuoteContext::WS() {
  return getTokens(ExampleParser::WS);
}

tree::TerminalNode* ExampleParser::QuoteContext::WS(size_t i) {
  return getToken(ExampleParser::WS, i);
}

std::vector<ExampleParser::InlineContext *> ExampleParser::QuoteContext::inline_() {
  return getRuleContexts<ExampleParser::InlineContext>();
}

ExampleParser::InlineContext* ExampleParser::QuoteContext::inline_(size_t i) {
  return getRuleContext<ExampleParser::InlineContext>(i);
}


size_t ExampleParser::QuoteContext::getRuleIndex() const {
  return ExampleParser::RuleQuote;
}

void ExampleParser::QuoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuote(this);
}

void ExampleParser::QuoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuote(this);
}


std::any ExampleParser::QuoteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitQuote(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::QuoteContext* ExampleParser::quote() {
  QuoteContext *_localctx = _tracker.createInstance<QuoteContext>(_ctx, getState());
  enterRule(_localctx, 12, ExampleParser::RuleQuote);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(106); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(95);
              match(ExampleParser::GT);
              setState(97);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
              case 1: {
                setState(96);
                match(ExampleParser::WS);
                break;
              }

              default:
                break;
              }
              setState(100); 
              _errHandler->sync(this);
              _la = _input->LA(1);
              do {
                setState(99);
                inline_();
                setState(102); 
                _errHandler->sync(this);
                _la = _input->LA(1);
              } while ((((_la & ~ 0x3fULL) == 0) &&
                ((1ULL << _la) & 458096) != 0));
              setState(104);
              match(ExampleParser::NEWLINE);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(108); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParagraphContext ------------------------------------------------------------------

ExampleParser::ParagraphContext::ParagraphContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExampleParser::ParagraphContext::NEWLINE() {
  return getToken(ExampleParser::NEWLINE, 0);
}

std::vector<ExampleParser::InlineContext *> ExampleParser::ParagraphContext::inline_() {
  return getRuleContexts<ExampleParser::InlineContext>();
}

ExampleParser::InlineContext* ExampleParser::ParagraphContext::inline_(size_t i) {
  return getRuleContext<ExampleParser::InlineContext>(i);
}


size_t ExampleParser::ParagraphContext::getRuleIndex() const {
  return ExampleParser::RuleParagraph;
}

void ExampleParser::ParagraphContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParagraph(this);
}

void ExampleParser::ParagraphContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParagraph(this);
}


std::any ExampleParser::ParagraphContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitParagraph(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::ParagraphContext* ExampleParser::paragraph() {
  ParagraphContext *_localctx = _tracker.createInstance<ParagraphContext>(_ctx, getState());
  enterRule(_localctx, 14, ExampleParser::RuleParagraph);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(110);
      inline_();
      setState(113); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458096) != 0));
    setState(115);
    match(ExampleParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FencedCodeBlockContext ------------------------------------------------------------------

ExampleParser::FencedCodeBlockContext::FencedCodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExampleParser::FencedCodeBlockContext::FENCED_CODE() {
  return getToken(ExampleParser::FENCED_CODE, 0);
}

tree::TerminalNode* ExampleParser::FencedCodeBlockContext::NEWLINE() {
  return getToken(ExampleParser::NEWLINE, 0);
}


size_t ExampleParser::FencedCodeBlockContext::getRuleIndex() const {
  return ExampleParser::RuleFencedCodeBlock;
}

void ExampleParser::FencedCodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFencedCodeBlock(this);
}

void ExampleParser::FencedCodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFencedCodeBlock(this);
}


std::any ExampleParser::FencedCodeBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitFencedCodeBlock(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::FencedCodeBlockContext* ExampleParser::fencedCodeBlock() {
  FencedCodeBlockContext *_localctx = _tracker.createInstance<FencedCodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 16, ExampleParser::RuleFencedCodeBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(ExampleParser::FENCED_CODE);
    setState(119);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(118);
      match(ExampleParser::NEWLINE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndentedCodeBlockContext ------------------------------------------------------------------

ExampleParser::IndentedCodeBlockContext::IndentedCodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExampleParser::IndentedCodeBlockContext::INDENTED_CODE() {
  return getTokens(ExampleParser::INDENTED_CODE);
}

tree::TerminalNode* ExampleParser::IndentedCodeBlockContext::INDENTED_CODE(size_t i) {
  return getToken(ExampleParser::INDENTED_CODE, i);
}


size_t ExampleParser::IndentedCodeBlockContext::getRuleIndex() const {
  return ExampleParser::RuleIndentedCodeBlock;
}

void ExampleParser::IndentedCodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndentedCodeBlock(this);
}

void ExampleParser::IndentedCodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndentedCodeBlock(this);
}


std::any ExampleParser::IndentedCodeBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitIndentedCodeBlock(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::IndentedCodeBlockContext* ExampleParser::indentedCodeBlock() {
  IndentedCodeBlockContext *_localctx = _tracker.createInstance<IndentedCodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 18, ExampleParser::RuleIndentedCodeBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(122); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(121);
              match(ExampleParser::INDENTED_CODE);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(124); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineContext ------------------------------------------------------------------

ExampleParser::InlineContext::InlineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExampleParser::InlineContext::getRuleIndex() const {
  return ExampleParser::RuleInline;
}

void ExampleParser::InlineContext::copyFrom(InlineContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InlineLParenContext ------------------------------------------------------------------

tree::TerminalNode* ExampleParser::InlineLParenContext::LPAREN() {
  return getToken(ExampleParser::LPAREN, 0);
}

ExampleParser::InlineLParenContext::InlineLParenContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineLParenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineLParen(this);
}
void ExampleParser::InlineLParenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineLParen(this);
}

std::any ExampleParser::InlineLParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineLParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlineDashContext ------------------------------------------------------------------

tree::TerminalNode* ExampleParser::InlineDashContext::DASH() {
  return getToken(ExampleParser::DASH, 0);
}

ExampleParser::InlineDashContext::InlineDashContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineDashContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineDash(this);
}
void ExampleParser::InlineDashContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineDash(this);
}

std::any ExampleParser::InlineDashContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineDash(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlineRParenContext ------------------------------------------------------------------

tree::TerminalNode* ExampleParser::InlineRParenContext::RPAREN() {
  return getToken(ExampleParser::RPAREN, 0);
}

ExampleParser::InlineRParenContext::InlineRParenContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineRParenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineRParen(this);
}
void ExampleParser::InlineRParenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineRParen(this);
}

std::any ExampleParser::InlineRParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineRParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlineCodeAltContext ------------------------------------------------------------------

tree::TerminalNode* ExampleParser::InlineCodeAltContext::INLINE_CODE() {
  return getToken(ExampleParser::INLINE_CODE, 0);
}

ExampleParser::InlineCodeAltContext::InlineCodeAltContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineCodeAltContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineCodeAlt(this);
}
void ExampleParser::InlineCodeAltContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineCodeAlt(this);
}

std::any ExampleParser::InlineCodeAltContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineCodeAlt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlineDoubleStarContext ------------------------------------------------------------------

tree::TerminalNode* ExampleParser::InlineDoubleStarContext::DOUBLESTAR() {
  return getToken(ExampleParser::DOUBLESTAR, 0);
}

ExampleParser::InlineDoubleStarContext::InlineDoubleStarContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineDoubleStarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineDoubleStar(this);
}
void ExampleParser::InlineDoubleStarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineDoubleStar(this);
}

std::any ExampleParser::InlineDoubleStarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineDoubleStar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlineHashesContext ------------------------------------------------------------------

tree::TerminalNode* ExampleParser::InlineHashesContext::HASHES() {
  return getToken(ExampleParser::HASHES, 0);
}

ExampleParser::InlineHashesContext::InlineHashesContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineHashesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineHashes(this);
}
void ExampleParser::InlineHashesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineHashes(this);
}

std::any ExampleParser::InlineHashesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineHashes(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlineGtContext ------------------------------------------------------------------

tree::TerminalNode* ExampleParser::InlineGtContext::GT() {
  return getToken(ExampleParser::GT, 0);
}

ExampleParser::InlineGtContext::InlineGtContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineGtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineGt(this);
}
void ExampleParser::InlineGtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineGt(this);
}

std::any ExampleParser::InlineGtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineGt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlineBoldContext ------------------------------------------------------------------

ExampleParser::BoldContext* ExampleParser::InlineBoldContext::bold() {
  return getRuleContext<ExampleParser::BoldContext>(0);
}

ExampleParser::InlineBoldContext::InlineBoldContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineBoldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineBold(this);
}
void ExampleParser::InlineBoldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineBold(this);
}

std::any ExampleParser::InlineBoldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineBold(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlineTextContext ------------------------------------------------------------------

tree::TerminalNode* ExampleParser::InlineTextContext::TEXT() {
  return getToken(ExampleParser::TEXT, 0);
}

ExampleParser::InlineTextContext::InlineTextContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineTextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineText(this);
}
void ExampleParser::InlineTextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineText(this);
}

std::any ExampleParser::InlineTextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineText(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlineStarContext ------------------------------------------------------------------

tree::TerminalNode* ExampleParser::InlineStarContext::STAR() {
  return getToken(ExampleParser::STAR, 0);
}

ExampleParser::InlineStarContext::InlineStarContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineStarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineStar(this);
}
void ExampleParser::InlineStarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineStar(this);
}

std::any ExampleParser::InlineStarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineStar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlineItalicContext ------------------------------------------------------------------

ExampleParser::ItalicContext* ExampleParser::InlineItalicContext::italic() {
  return getRuleContext<ExampleParser::ItalicContext>(0);
}

ExampleParser::InlineItalicContext::InlineItalicContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineItalicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineItalic(this);
}
void ExampleParser::InlineItalicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineItalic(this);
}

std::any ExampleParser::InlineItalicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineItalic(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlineImageContext ------------------------------------------------------------------

ExampleParser::ImageContext* ExampleParser::InlineImageContext::image() {
  return getRuleContext<ExampleParser::ImageContext>(0);
}

ExampleParser::InlineImageContext::InlineImageContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineImageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineImage(this);
}
void ExampleParser::InlineImageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineImage(this);
}

std::any ExampleParser::InlineImageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineImage(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlineWsContext ------------------------------------------------------------------

tree::TerminalNode* ExampleParser::InlineWsContext::WS() {
  return getToken(ExampleParser::WS, 0);
}

ExampleParser::InlineWsContext::InlineWsContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineWsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineWs(this);
}
void ExampleParser::InlineWsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineWs(this);
}

std::any ExampleParser::InlineWsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineWs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlineLinkContext ------------------------------------------------------------------

ExampleParser::LinkContext* ExampleParser::InlineLinkContext::link() {
  return getRuleContext<ExampleParser::LinkContext>(0);
}

ExampleParser::InlineLinkContext::InlineLinkContext(InlineContext *ctx) { copyFrom(ctx); }

void ExampleParser::InlineLinkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineLink(this);
}
void ExampleParser::InlineLinkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineLink(this);
}

std::any ExampleParser::InlineLinkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitInlineLink(this);
  else
    return visitor->visitChildren(this);
}
ExampleParser::InlineContext* ExampleParser::inline_() {
  InlineContext *_localctx = _tracker.createInstance<InlineContext>(_ctx, getState());
  enterRule(_localctx, 20, ExampleParser::RuleInline);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ExampleParser::InlineImageContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(126);
      image();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ExampleParser::InlineLinkContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(127);
      link();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ExampleParser::InlineCodeAltContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(128);
      match(ExampleParser::INLINE_CODE);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ExampleParser::InlineBoldContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(129);
      bold();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ExampleParser::InlineItalicContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(130);
      italic();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ExampleParser::InlineDoubleStarContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(131);
      match(ExampleParser::DOUBLESTAR);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ExampleParser::InlineStarContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(132);
      match(ExampleParser::STAR);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ExampleParser::InlineLParenContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(133);
      match(ExampleParser::LPAREN);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<ExampleParser::InlineRParenContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(134);
      match(ExampleParser::RPAREN);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<ExampleParser::InlineTextContext>(_localctx);
      enterOuterAlt(_localctx, 10);
      setState(135);
      match(ExampleParser::TEXT);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<ExampleParser::InlineWsContext>(_localctx);
      enterOuterAlt(_localctx, 11);
      setState(136);
      match(ExampleParser::WS);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<ExampleParser::InlineHashesContext>(_localctx);
      enterOuterAlt(_localctx, 12);
      setState(137);
      match(ExampleParser::HASHES);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<ExampleParser::InlineDashContext>(_localctx);
      enterOuterAlt(_localctx, 13);
      setState(138);
      match(ExampleParser::DASH);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<ExampleParser::InlineGtContext>(_localctx);
      enterOuterAlt(_localctx, 14);
      setState(139);
      match(ExampleParser::GT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LinkContext ------------------------------------------------------------------

ExampleParser::LinkContext::LinkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExampleParser::LinkContext::LBRACK() {
  return getToken(ExampleParser::LBRACK, 0);
}

tree::TerminalNode* ExampleParser::LinkContext::RBRACK() {
  return getToken(ExampleParser::RBRACK, 0);
}

tree::TerminalNode* ExampleParser::LinkContext::LPAREN() {
  return getToken(ExampleParser::LPAREN, 0);
}

ExampleParser::UrlContentContext* ExampleParser::LinkContext::urlContent() {
  return getRuleContext<ExampleParser::UrlContentContext>(0);
}

tree::TerminalNode* ExampleParser::LinkContext::RPAREN() {
  return getToken(ExampleParser::RPAREN, 0);
}

std::vector<ExampleParser::InlineContext *> ExampleParser::LinkContext::inline_() {
  return getRuleContexts<ExampleParser::InlineContext>();
}

ExampleParser::InlineContext* ExampleParser::LinkContext::inline_(size_t i) {
  return getRuleContext<ExampleParser::InlineContext>(i);
}


size_t ExampleParser::LinkContext::getRuleIndex() const {
  return ExampleParser::RuleLink;
}

void ExampleParser::LinkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLink(this);
}

void ExampleParser::LinkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLink(this);
}


std::any ExampleParser::LinkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitLink(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::LinkContext* ExampleParser::link() {
  LinkContext *_localctx = _tracker.createInstance<LinkContext>(_ctx, getState());
  enterRule(_localctx, 22, ExampleParser::RuleLink);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(ExampleParser::LBRACK);
    setState(144); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(143);
      inline_();
      setState(146); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458096) != 0));
    setState(148);
    match(ExampleParser::RBRACK);
    setState(149);
    match(ExampleParser::LPAREN);
    setState(150);
    urlContent();
    setState(151);
    match(ExampleParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImageContext ------------------------------------------------------------------

ExampleParser::ImageContext::ImageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExampleParser::ImageContext::EXCL() {
  return getToken(ExampleParser::EXCL, 0);
}

tree::TerminalNode* ExampleParser::ImageContext::LBRACK() {
  return getToken(ExampleParser::LBRACK, 0);
}

tree::TerminalNode* ExampleParser::ImageContext::RBRACK() {
  return getToken(ExampleParser::RBRACK, 0);
}

tree::TerminalNode* ExampleParser::ImageContext::LPAREN() {
  return getToken(ExampleParser::LPAREN, 0);
}

ExampleParser::UrlContentContext* ExampleParser::ImageContext::urlContent() {
  return getRuleContext<ExampleParser::UrlContentContext>(0);
}

tree::TerminalNode* ExampleParser::ImageContext::RPAREN() {
  return getToken(ExampleParser::RPAREN, 0);
}

std::vector<ExampleParser::InlineContext *> ExampleParser::ImageContext::inline_() {
  return getRuleContexts<ExampleParser::InlineContext>();
}

ExampleParser::InlineContext* ExampleParser::ImageContext::inline_(size_t i) {
  return getRuleContext<ExampleParser::InlineContext>(i);
}


size_t ExampleParser::ImageContext::getRuleIndex() const {
  return ExampleParser::RuleImage;
}

void ExampleParser::ImageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImage(this);
}

void ExampleParser::ImageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImage(this);
}


std::any ExampleParser::ImageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitImage(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::ImageContext* ExampleParser::image() {
  ImageContext *_localctx = _tracker.createInstance<ImageContext>(_ctx, getState());
  enterRule(_localctx, 24, ExampleParser::RuleImage);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(ExampleParser::EXCL);
    setState(154);
    match(ExampleParser::LBRACK);
    setState(156); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(155);
      inline_();
      setState(158); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458096) != 0));
    setState(160);
    match(ExampleParser::RBRACK);
    setState(161);
    match(ExampleParser::LPAREN);
    setState(162);
    urlContent();
    setState(163);
    match(ExampleParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoldContext ------------------------------------------------------------------

ExampleParser::BoldContext::BoldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExampleParser::BoldContext::DOUBLESTAR() {
  return getTokens(ExampleParser::DOUBLESTAR);
}

tree::TerminalNode* ExampleParser::BoldContext::DOUBLESTAR(size_t i) {
  return getToken(ExampleParser::DOUBLESTAR, i);
}

std::vector<ExampleParser::ItalicContext *> ExampleParser::BoldContext::italic() {
  return getRuleContexts<ExampleParser::ItalicContext>();
}

ExampleParser::ItalicContext* ExampleParser::BoldContext::italic(size_t i) {
  return getRuleContext<ExampleParser::ItalicContext>(i);
}

std::vector<ExampleParser::ImageContext *> ExampleParser::BoldContext::image() {
  return getRuleContexts<ExampleParser::ImageContext>();
}

ExampleParser::ImageContext* ExampleParser::BoldContext::image(size_t i) {
  return getRuleContext<ExampleParser::ImageContext>(i);
}

std::vector<ExampleParser::LinkContext *> ExampleParser::BoldContext::link() {
  return getRuleContexts<ExampleParser::LinkContext>();
}

ExampleParser::LinkContext* ExampleParser::BoldContext::link(size_t i) {
  return getRuleContext<ExampleParser::LinkContext>(i);
}

std::vector<tree::TerminalNode *> ExampleParser::BoldContext::INLINE_CODE() {
  return getTokens(ExampleParser::INLINE_CODE);
}

tree::TerminalNode* ExampleParser::BoldContext::INLINE_CODE(size_t i) {
  return getToken(ExampleParser::INLINE_CODE, i);
}

std::vector<tree::TerminalNode *> ExampleParser::BoldContext::STAR() {
  return getTokens(ExampleParser::STAR);
}

tree::TerminalNode* ExampleParser::BoldContext::STAR(size_t i) {
  return getToken(ExampleParser::STAR, i);
}

std::vector<tree::TerminalNode *> ExampleParser::BoldContext::LPAREN() {
  return getTokens(ExampleParser::LPAREN);
}

tree::TerminalNode* ExampleParser::BoldContext::LPAREN(size_t i) {
  return getToken(ExampleParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> ExampleParser::BoldContext::RPAREN() {
  return getTokens(ExampleParser::RPAREN);
}

tree::TerminalNode* ExampleParser::BoldContext::RPAREN(size_t i) {
  return getToken(ExampleParser::RPAREN, i);
}

std::vector<tree::TerminalNode *> ExampleParser::BoldContext::TEXT() {
  return getTokens(ExampleParser::TEXT);
}

tree::TerminalNode* ExampleParser::BoldContext::TEXT(size_t i) {
  return getToken(ExampleParser::TEXT, i);
}

std::vector<tree::TerminalNode *> ExampleParser::BoldContext::WS() {
  return getTokens(ExampleParser::WS);
}

tree::TerminalNode* ExampleParser::BoldContext::WS(size_t i) {
  return getToken(ExampleParser::WS, i);
}

std::vector<tree::TerminalNode *> ExampleParser::BoldContext::HASHES() {
  return getTokens(ExampleParser::HASHES);
}

tree::TerminalNode* ExampleParser::BoldContext::HASHES(size_t i) {
  return getToken(ExampleParser::HASHES, i);
}

std::vector<tree::TerminalNode *> ExampleParser::BoldContext::DASH() {
  return getTokens(ExampleParser::DASH);
}

tree::TerminalNode* ExampleParser::BoldContext::DASH(size_t i) {
  return getToken(ExampleParser::DASH, i);
}

std::vector<tree::TerminalNode *> ExampleParser::BoldContext::GT() {
  return getTokens(ExampleParser::GT);
}

tree::TerminalNode* ExampleParser::BoldContext::GT(size_t i) {
  return getToken(ExampleParser::GT, i);
}


size_t ExampleParser::BoldContext::getRuleIndex() const {
  return ExampleParser::RuleBold;
}

void ExampleParser::BoldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBold(this);
}

void ExampleParser::BoldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBold(this);
}


std::any ExampleParser::BoldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitBold(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::BoldContext* ExampleParser::bold() {
  BoldContext *_localctx = _tracker.createInstance<BoldContext>(_ctx, getState());
  enterRule(_localctx, 26, ExampleParser::RuleBold);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(ExampleParser::DOUBLESTAR);
    setState(180);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458064) != 0)) {
      setState(178);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(166);
        italic();
        break;
      }

      case 2: {
        setState(167);
        image();
        break;
      }

      case 3: {
        setState(168);
        link();
        break;
      }

      case 4: {
        setState(169);
        match(ExampleParser::INLINE_CODE);
        break;
      }

      case 5: {
        setState(170);
        match(ExampleParser::STAR);
        break;
      }

      case 6: {
        setState(171);
        match(ExampleParser::LPAREN);
        break;
      }

      case 7: {
        setState(172);
        match(ExampleParser::RPAREN);
        break;
      }

      case 8: {
        setState(173);
        match(ExampleParser::TEXT);
        break;
      }

      case 9: {
        setState(174);
        match(ExampleParser::WS);
        break;
      }

      case 10: {
        setState(175);
        match(ExampleParser::HASHES);
        break;
      }

      case 11: {
        setState(176);
        match(ExampleParser::DASH);
        break;
      }

      case 12: {
        setState(177);
        match(ExampleParser::GT);
        break;
      }

      default:
        break;
      }
      setState(182);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(183);
    match(ExampleParser::DOUBLESTAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ItalicContext ------------------------------------------------------------------

ExampleParser::ItalicContext::ItalicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExampleParser::ItalicContext::STAR() {
  return getTokens(ExampleParser::STAR);
}

tree::TerminalNode* ExampleParser::ItalicContext::STAR(size_t i) {
  return getToken(ExampleParser::STAR, i);
}

std::vector<ExampleParser::BoldContext *> ExampleParser::ItalicContext::bold() {
  return getRuleContexts<ExampleParser::BoldContext>();
}

ExampleParser::BoldContext* ExampleParser::ItalicContext::bold(size_t i) {
  return getRuleContext<ExampleParser::BoldContext>(i);
}

std::vector<ExampleParser::ImageContext *> ExampleParser::ItalicContext::image() {
  return getRuleContexts<ExampleParser::ImageContext>();
}

ExampleParser::ImageContext* ExampleParser::ItalicContext::image(size_t i) {
  return getRuleContext<ExampleParser::ImageContext>(i);
}

std::vector<ExampleParser::LinkContext *> ExampleParser::ItalicContext::link() {
  return getRuleContexts<ExampleParser::LinkContext>();
}

ExampleParser::LinkContext* ExampleParser::ItalicContext::link(size_t i) {
  return getRuleContext<ExampleParser::LinkContext>(i);
}

std::vector<tree::TerminalNode *> ExampleParser::ItalicContext::INLINE_CODE() {
  return getTokens(ExampleParser::INLINE_CODE);
}

tree::TerminalNode* ExampleParser::ItalicContext::INLINE_CODE(size_t i) {
  return getToken(ExampleParser::INLINE_CODE, i);
}

std::vector<tree::TerminalNode *> ExampleParser::ItalicContext::DOUBLESTAR() {
  return getTokens(ExampleParser::DOUBLESTAR);
}

tree::TerminalNode* ExampleParser::ItalicContext::DOUBLESTAR(size_t i) {
  return getToken(ExampleParser::DOUBLESTAR, i);
}

std::vector<tree::TerminalNode *> ExampleParser::ItalicContext::LPAREN() {
  return getTokens(ExampleParser::LPAREN);
}

tree::TerminalNode* ExampleParser::ItalicContext::LPAREN(size_t i) {
  return getToken(ExampleParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> ExampleParser::ItalicContext::RPAREN() {
  return getTokens(ExampleParser::RPAREN);
}

tree::TerminalNode* ExampleParser::ItalicContext::RPAREN(size_t i) {
  return getToken(ExampleParser::RPAREN, i);
}

std::vector<tree::TerminalNode *> ExampleParser::ItalicContext::TEXT() {
  return getTokens(ExampleParser::TEXT);
}

tree::TerminalNode* ExampleParser::ItalicContext::TEXT(size_t i) {
  return getToken(ExampleParser::TEXT, i);
}

std::vector<tree::TerminalNode *> ExampleParser::ItalicContext::WS() {
  return getTokens(ExampleParser::WS);
}

tree::TerminalNode* ExampleParser::ItalicContext::WS(size_t i) {
  return getToken(ExampleParser::WS, i);
}

std::vector<tree::TerminalNode *> ExampleParser::ItalicContext::HASHES() {
  return getTokens(ExampleParser::HASHES);
}

tree::TerminalNode* ExampleParser::ItalicContext::HASHES(size_t i) {
  return getToken(ExampleParser::HASHES, i);
}

std::vector<tree::TerminalNode *> ExampleParser::ItalicContext::DASH() {
  return getTokens(ExampleParser::DASH);
}

tree::TerminalNode* ExampleParser::ItalicContext::DASH(size_t i) {
  return getToken(ExampleParser::DASH, i);
}

std::vector<tree::TerminalNode *> ExampleParser::ItalicContext::GT() {
  return getTokens(ExampleParser::GT);
}

tree::TerminalNode* ExampleParser::ItalicContext::GT(size_t i) {
  return getToken(ExampleParser::GT, i);
}


size_t ExampleParser::ItalicContext::getRuleIndex() const {
  return ExampleParser::RuleItalic;
}

void ExampleParser::ItalicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterItalic(this);
}

void ExampleParser::ItalicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitItalic(this);
}


std::any ExampleParser::ItalicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitItalic(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::ItalicContext* ExampleParser::italic() {
  ItalicContext *_localctx = _tracker.createInstance<ItalicContext>(_ctx, getState());
  enterRule(_localctx, 28, ExampleParser::RuleItalic);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(ExampleParser::STAR);
    setState(200);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458032) != 0)) {
      setState(198);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(186);
        bold();
        break;
      }

      case 2: {
        setState(187);
        image();
        break;
      }

      case 3: {
        setState(188);
        link();
        break;
      }

      case 4: {
        setState(189);
        match(ExampleParser::INLINE_CODE);
        break;
      }

      case 5: {
        setState(190);
        match(ExampleParser::DOUBLESTAR);
        break;
      }

      case 6: {
        setState(191);
        match(ExampleParser::LPAREN);
        break;
      }

      case 7: {
        setState(192);
        match(ExampleParser::RPAREN);
        break;
      }

      case 8: {
        setState(193);
        match(ExampleParser::TEXT);
        break;
      }

      case 9: {
        setState(194);
        match(ExampleParser::WS);
        break;
      }

      case 10: {
        setState(195);
        match(ExampleParser::HASHES);
        break;
      }

      case 11: {
        setState(196);
        match(ExampleParser::DASH);
        break;
      }

      case 12: {
        setState(197);
        match(ExampleParser::GT);
        break;
      }

      default:
        break;
      }
      setState(202);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(203);
    match(ExampleParser::STAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UrlContentContext ------------------------------------------------------------------

ExampleParser::UrlContentContext::UrlContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExampleParser::UrlContentContext::TEXT() {
  return getTokens(ExampleParser::TEXT);
}

tree::TerminalNode* ExampleParser::UrlContentContext::TEXT(size_t i) {
  return getToken(ExampleParser::TEXT, i);
}

std::vector<tree::TerminalNode *> ExampleParser::UrlContentContext::DASH() {
  return getTokens(ExampleParser::DASH);
}

tree::TerminalNode* ExampleParser::UrlContentContext::DASH(size_t i) {
  return getToken(ExampleParser::DASH, i);
}

std::vector<tree::TerminalNode *> ExampleParser::UrlContentContext::HASHES() {
  return getTokens(ExampleParser::HASHES);
}

tree::TerminalNode* ExampleParser::UrlContentContext::HASHES(size_t i) {
  return getToken(ExampleParser::HASHES, i);
}

std::vector<tree::TerminalNode *> ExampleParser::UrlContentContext::WS() {
  return getTokens(ExampleParser::WS);
}

tree::TerminalNode* ExampleParser::UrlContentContext::WS(size_t i) {
  return getToken(ExampleParser::WS, i);
}

std::vector<tree::TerminalNode *> ExampleParser::UrlContentContext::GT() {
  return getTokens(ExampleParser::GT);
}

tree::TerminalNode* ExampleParser::UrlContentContext::GT(size_t i) {
  return getToken(ExampleParser::GT, i);
}


size_t ExampleParser::UrlContentContext::getRuleIndex() const {
  return ExampleParser::RuleUrlContent;
}

void ExampleParser::UrlContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUrlContent(this);
}

void ExampleParser::UrlContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUrlContent(this);
}


std::any ExampleParser::UrlContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitUrlContent(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::UrlContentContext* ExampleParser::urlContent() {
  UrlContentContext *_localctx = _tracker.createInstance<UrlContentContext>(_ctx, getState());
  enterRule(_localctx, 30, ExampleParser::RuleUrlContent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 450560) != 0)) {
      setState(205);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 450560) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(210);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyLineContext ------------------------------------------------------------------

ExampleParser::EmptyLineContext::EmptyLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExampleParser::EmptyLineContext::NEWLINE() {
  return getToken(ExampleParser::NEWLINE, 0);
}


size_t ExampleParser::EmptyLineContext::getRuleIndex() const {
  return ExampleParser::RuleEmptyLine;
}

void ExampleParser::EmptyLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyLine(this);
}

void ExampleParser::EmptyLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExampleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyLine(this);
}


std::any ExampleParser::EmptyLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExampleVisitor*>(visitor))
    return parserVisitor->visitEmptyLine(this);
  else
    return visitor->visitChildren(this);
}

ExampleParser::EmptyLineContext* ExampleParser::emptyLine() {
  EmptyLineContext *_localctx = _tracker.createInstance<EmptyLineContext>(_ctx, getState());
  enterRule(_localctx, 32, ExampleParser::RuleEmptyLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(ExampleParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ExampleParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exampleParserInitialize();
#else
  ::antlr4::internal::call_once(exampleParserOnceFlag, exampleParserInitialize);
#endif
}
