#pragma once

enum StatusActivation
{
	IS_ACTIVE = 1,
	IS_NOT_ACTIVE = 0,
	IS_NOT_CONFIRMED = -1
};

enum ERRORS_
{
	WRONG_INPUT = -1,
	WRONG_SIZE_ERROR = 0,
	WRONG_TYPE_ERROR = 1,
	SAME_USERNAME_USERPASS_ERROR = 2,
	REPEATED_USERNAME_ERROR = 3,
	CONFIRMED = 4
};

enum FOREGROUND_COLORS_CODE
{
	BLACK,
	BLUE,
	GREEN,
	CYAN,
	RED,
	PURPLE,
	ORANGE,
	LIGHT_GREY,
	GREY,
	LIGHT_BLUE,
	LIGHT_GREEN,
	LIGHT_CYAN,
	LIGHT_RED,
	LIGHT_PURPLE,
	YELLOW,
	WHITE
};

enum KEYBOARD_CODE
{
	UP = 72,
	DOWN = 80,
	LEFT = 75,
	RIGHT = 77,
	ESCAPE = 27,
	ENTER = 13
};

enum QuestionAnswers
{
	NONE_ANSWER = 69,
	A = 65,
	B = 66,
	C = 67,
	D = 68
};