#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include "Enumerators.h"

using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); // �������� ����������(��������� ��) �������

void GoToXY(short x, short y) // ��������� ������ � ����� �,�
{
	SetConsoleCursorPosition(hStdOut, { x,y });
}

void ConsoleCursorVisible(bool show, short size) // ������ ������ ���������
{
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = show;
	structCursorInfo.dwSize = size;
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}