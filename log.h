/*
	Kage game server.
    Copyright 2025 Flyinghead <flyinghead.github@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#pragma once
#include "kage.h"

namespace Log {
enum LEVEL
{
	ErrorLevel = 0,
	WarningLevel = 1,
	NoticeLevel = 2,
	InfoLevel = 3,
	DebugLevel = 4,
};
}

void logger(Log::LEVEL level, Game game, const char *file, int line, const char *format, ...);

#define ERROR_LOG(game, ...)                      \
	do {                                    \
		logger(Log::ErrorLevel, game, __FILE__, __LINE__, __VA_ARGS__);    \
	} while (0)

#define WARN_LOG(game, ...)                       \
	do {                                    \
		logger(Log::WarningLevel, game, __FILE__, __LINE__, __VA_ARGS__);    \
	} while (0)

#define NOTICE_LOG(game, ...)                     \
	do {                                    \
		logger(Log::NoticeLevel, game, __FILE__, __LINE__, __VA_ARGS__);    \
	} while (0)

#define INFO_LOG(game, ...)                       \
	do {                                    \
		logger(Log::InfoLevel, game, __FILE__, __LINE__, __VA_ARGS__);    \
	} while (0)

#ifndef NDEBUG
#define DEBUG_LOG(game, ...)                      \
	do {                                    \
		logger(Log::DebugLevel, game, __FILE__, __LINE__, __VA_ARGS__);    \
	} while (0)
#else
#define DEBUG_LOG(...)
#endif
