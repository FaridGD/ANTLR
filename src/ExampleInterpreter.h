#pragma once

#include <string>
#include <any>
#include <sstream>
#include <algorithm>

#include "ExampleBaseVisitor.h"
#include "ExampleParser.h"

class ExampleInterpreter : public ExampleBaseVisitor {
public:
    std::any visitProgram(ExampleParser::ProgramContext *ctx) override {
        std::string result;
        for (auto block : ctx->block()) {
            result += std::any_cast<std::string>(visit(block));
        }
        return result;
    }

    std::any visitHeader(ExampleParser::HeaderContext *ctx) override {
        int level = std::min((int)ctx->HASHES()->getText().size(), 6);
        std::string content;
        for (auto node : ctx->inline_()) {
            content += std::any_cast<std::string>(visit(node));
        }
        return "<h" + std::to_string(level) + ">" + content + "</h" + std::to_string(level) + ">\n";
    }

    std::any visitQuote(ExampleParser::QuoteContext *ctx) override {
        std::string content;
        for (auto inlineNode : ctx->inline_()) {
            content += std::any_cast<std::string>(visit(inlineNode));
        }
        return "<blockquote>" + content + "</blockquote>\n";
    }

    std::any visitParagraph(ExampleParser::ParagraphContext *ctx) override {
        std::string result = "<p>";
        for (auto inlineNode : ctx->inline_()) {
            result += std::any_cast<std::string>(visit(inlineNode));
        }
        result += "</p>\n";
        return result;
    }

    std::any visitFencedCodeBlock(ExampleParser::FencedCodeBlockContext *ctx) override {
        std::string text = ctx->FENCED_CODE()->getText();
        if (text.size() >= 6) {
            text = text.substr(3, text.size() - 6);
        }

        auto trimLines = [](std::string &s) {
            size_t first = s.find_first_not_of("\r\n");
            if (std::string::npos == first) { s = ""; return; }
            size_t last = s.find_last_not_of("\r\n");
            s = s.substr(first, (last - first + 1));
        };
        trimLines(text);

        return "<pre><code>\n" + escapeHtml(text) + "\n</code></pre>\n";
    }

    std::any visitIndentedCodeBlock(ExampleParser::IndentedCodeBlockContext *ctx) override {
        std::string code;
        for (auto node : ctx->INDENTED_CODE()) {
            std::string line = node->getText();
            if (line.rfind("    ", 0) == 0) line = line.substr(4);
            else if (line.rfind("\t", 0) == 0) line = line.substr(1);
            code += line;
        }
        return "<pre><code>\n" + escapeHtml(code) + "</code></pre>\n";
    }

    std::any visitInlineImage(ExampleParser::InlineImageContext *ctx) override {
        std::string alt;
        for (auto node : ctx->image()->inline_()) {
            alt += std::any_cast<std::string>(visit(node));
        }
        std::string url;
        if (ctx->image()->urlContent()) {
            url = ctx->image()->urlContent()->getText();
        }
        return "<img src=\"" + escapeHtml(url) + "\" alt=\"" + escapeHtml(alt) + "\">";
    }

    std::any visitInlineLink(ExampleParser::InlineLinkContext *ctx) override {
        std::string text;
        for (auto node : ctx->link()->inline_()) {
            text += std::any_cast<std::string>(visit(node));
        }
        std::string url;
        if (ctx->link()->urlContent()) {
            url = ctx->link()->urlContent()->getText();
        }
        return "<a href=\"" + escapeHtml(url) + "\">" + text + "</a>";
    }

    std::any visitInlineText(ExampleParser::InlineTextContext *ctx) override {
        return escapeHtml(ctx->TEXT()->getText());
    }

    std::any visitInlineWs(ExampleParser::InlineWsContext *ctx) override {
        return ctx->WS()->getText();
    }

    std::any visitInlineHashes(ExampleParser::InlineHashesContext *ctx) override {
        return ctx->HASHES()->getText();
    }

    std::any visitInlineDash(ExampleParser::InlineDashContext *ctx) override {
        return ctx->DASH()->getText();
    }

    std::any visitInlineGt(ExampleParser::InlineGtContext *ctx) override {
        return ctx->GT()->getText();
    }

    std::any visitInlineBold(ExampleParser::InlineBoldContext *ctx) override {
        return visit(ctx->bold());
    }

    std::any visitInlineItalic(ExampleParser::InlineItalicContext *ctx) override {
        return visit(ctx->italic());
    }

    std::any visitBold(ExampleParser::BoldContext *ctx) override {
        std::string result = "<b>";
        for (size_t i = 1; i + 1 < ctx->children.size(); ++i) {
            result += renderInlineChild(ctx->children[i]);
        }
        result += "</b>";
        return result;
    }

    std::any visitItalic(ExampleParser::ItalicContext *ctx) override {
        std::string result = "<i>";
        for (size_t i = 1; i + 1 < ctx->children.size(); ++i) {
            result += renderInlineChild(ctx->children[i]);
        }
        result += "</i>";
        return result;
    }

    std::any visitInlineDoubleStar(ExampleParser::InlineDoubleStarContext *) override {
        return std::string("**");
    }

    std::any visitInlineStar(ExampleParser::InlineStarContext *) override {
        return std::string("*");
    }

    std::any visitInlineLParen(ExampleParser::InlineLParenContext *) override {
        return std::string("(");
    }

    std::any visitInlineRParen(ExampleParser::InlineRParenContext *) override {
        return std::string(")");
    }

    std::any visitInlineCodeAlt(ExampleParser::InlineCodeAltContext *ctx) override {
        std::string text = ctx->INLINE_CODE()->getText();
        text = text.substr(1, text.size() - 2);
        return "<code>" + escapeHtml(text) + "</code>";
    }

    // --- Списки и вспомогательные правила ---

    std::any visitEmptyLine(ExampleParser::EmptyLineContext *) override {
        return std::string("");
    }

    std::any visitUnorderedList(ExampleParser::UnorderedListContext *ctx) override {
        std::string result = "<ul>\n";
        for (auto item : ctx->listItem()) {
            result += std::any_cast<std::string>(visit(item));
        }
        result += "</ul>\n";
        return result;
    }

    std::any visitListItem(ExampleParser::ListItemContext *ctx) override {
        std::string content;

        if (ctx->checkbox()) {
            std::string cbText = ctx->checkbox()->getText();
            bool isChecked = (cbText.find('x') != std::string::npos || cbText.find('X') != std::string::npos);
            content += "<input type=\"checkbox\"" + std::string(isChecked ? " checked" : "") + " disabled> ";
        }

        for (auto node : ctx->inline_()) {
            content += std::any_cast<std::string>(visit(node));
        }
        return "<li>" + content + "</li>\n";
    }

private:
    std::string renderInlineChild(antlr4::tree::ParseTree *node) {
        if (auto term = dynamic_cast<antlr4::tree::TerminalNode *>(node)) {
            return renderInlineTerminal(term);
        }
        return std::any_cast<std::string>(visit(node));
    }

    std::string renderInlineTerminal(antlr4::tree::TerminalNode *node) {
        const std::string text = node->getText();
        switch (node->getSymbol()->getType()) {
            case ExampleParser::TEXT:
                return escapeHtml(text);
            case ExampleParser::INLINE_CODE: {
                if (text.size() >= 2) {
                    return "<code>" + escapeHtml(text.substr(1, text.size() - 2)) + "</code>";
                }
                return "<code></code>";
            }
            case ExampleParser::WS:
            case ExampleParser::HASHES:
            case ExampleParser::DASH:
            case ExampleParser::GT:
            case ExampleParser::LPAREN:
            case ExampleParser::RPAREN:
            case ExampleParser::STAR:
            case ExampleParser::DOUBLESTAR:
                return text;
            default:
                return escapeHtml(text);
        }
    }

    std::string escapeHtml(const std::string &text) {
        std::string out;
        out.reserve(text.size());
        for (char c : text) {
            switch (c) {
                case '&': out += "&amp;"; break;
                case '<': out += "&lt;"; break;
                case '>': out += "&gt;"; break;
                case '"': out += "&quot;"; break;
                case '\'': out += "&#39;"; break;
                default: out += c; break;
            }
        }
        return out;
    }
};
