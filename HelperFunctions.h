#pragma once
#pragma once
#include <Windows.h>
#include "LR_Check_functions.h"

void Show_time_now()
{
	SYSTEMTIME t;
	GetLocalTime(&t);
	cout << "     " << t.wDay << "." << t.wMonth << "." << t.wYear << " - " << t.wHour << ":" << t.wMinute << ":" << t.wSecond << endl;
}

// Данная функция проверяет, есть ли в Массиве Целых чисел одинаковое Целое число...
// Возвращает FALSE если найдено число
// Возвращает TRUE если не найдено число

int check_same_int(int* arr, int size, int number)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == number)
		{
			return 0;
		}
	}
	return 1;
}

// Данная функция добавляет Целое число в конец Массива Целых чисел

void add_new_int(int*& arr, int& size, int number)
{
	int* new_arr = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		new_arr[i] = arr[i];
	}

	new_arr[size] = number;
	delete[]arr;
	arr = new_arr;
	size++;
}

void add_new_string(string*& arr, int& size, string word)
{
	string* new_arr = new string[size + 1];

	for (int i = 0; i < size; i++)
	{
		new_arr[i] = arr[i];
	}

	new_arr[size] = word;
	delete[]arr;
	arr = new_arr;
	size++;
}

int Check_word_by_symbols(string object)
{
	if (object != "")
	{
		for (int i = 0; i < object.length(); i++)
		{
			if (char(object[i]) <= 64)
			{
				return WRONG_INPUT;
			}
			else if (char(object[i]) >= 91 && char(object[i]) <= 96)
			{
				return WRONG_INPUT;
			}
			else if (char(object[i]) >= 123 && char(object[i]) <= 255)
			{
				return WRONG_INPUT;
			}
			else
			{
				continue;
			}
		}
		return CONFIRMED;
	}
	return WRONG_INPUT;
}

int Check_Number(string object)
{
	if (object != "")
	{
		for (int i = 0; i < object.length(); i++)
		{
			if (!isdigit(object[i])) // sdes doljno bit ne ravno
			{
				return WRONG_INPUT;
			}
		}
		return CONFIRMED;
	}
	return WRONG_INPUT;
}

int Check_Email(string object) // Конечно нужно доработать.... 
{
	int counter_symbol_at = 0;
	int counter_symbol_dot = 0;

	if (object != "")
	{
		for (int i = 0; i < object.length(); i++)
		{
			if (char(object[i]) >= 0 && char(object[i]) <= 44)
			{
				return WRONG_INPUT;
			}
			else if (char(object[i]) == 47)
			{
				return WRONG_INPUT;
			}
			else if (char(object[i]) >= 58 && char(object[i]) <= 63)
			{
				return WRONG_INPUT;
			}
			else if (char(object[i]) >= 91 && char(object[i]) <= 96)
			{
				return WRONG_INPUT;
			}
			else if (char(object[i]) >= 123)
			{
				return WRONG_INPUT;
			}
			else
			{
				if (object[i] == char(64))
				{
					counter_symbol_at++;
				}
				else if (object[i] == char(46))
				{
					counter_symbol_dot++;
				}
			}
		}

		if (counter_symbol_at >= 1)
		{
			if (counter_symbol_dot >= 1 && counter_symbol_dot <= 4)
			{
				return CONFIRMED;
			}
		}
	}
	return WRONG_INPUT;
}
