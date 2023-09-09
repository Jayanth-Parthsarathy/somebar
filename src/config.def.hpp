// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 15;
constexpr int paddingY = 5;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "JetBrainsMono NerdFont 12";
constexpr ColorScheme colorActive = {Color(205, 214, 244), Color(24, 24, 37)};
constexpr ColorScheme colorInactive = {Color(205, 214, 244), Color(40, 40, 53)};
constexpr const char* termcmd[] = {"foot", nullptr};

static std::vector<std::string> tagNames = {
	"1", "2", "3",
	"4", "5", "6",
	"7", "8", "9",
};

constexpr Button buttons[] = {
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
