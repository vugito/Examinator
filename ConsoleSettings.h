#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include "Enumerators.h"

using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); // Получаем дескриптор(указатель на) консоли

void GoToXY(short x, short y) // Текстовый курсор в точку х,у
{
	SetConsoleCursorPosition(hStdOut, { x,y });
}

void ConsoleCursorVisible(bool show, short size) // Делает курсор невидимым
{
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = show;
	structCursorInfo.dwSize = size;
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}