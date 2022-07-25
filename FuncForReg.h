#pragma once
#include "MenuSettings.h"

string RegistrationMenu[] = {	"|  Имя пользователя    |",
								"|  Пароль пользователя |",
								"|  Кодовая фраза       |",
								"|  Домашний адрес      |",
								"|  Номер телефона      |",
								"|  Электронная почта   |",
								"|  Имя                 |",
								"|  Фамилия             |",
								"|  Отчество            |",
								"|  Возраст             |",
								"|  Тип пользователя    |",
								"|  Название группы     |",
								"|        Далее         |",
								"|        Выход         |", };

string LoginMenu[] = {	"|  Имя пользователя    |",
						"|  Пароль пользователя |",							
						"|        Далее         |",
						"|        Выход         |", };

void CheckCursor(string first_menu_[], string DataMenu[], int size_first_menu, int size_Data_menu,int& active_menu, short& x, short y, int LRUD) // LRUD - Left&Rigth or Up&Down version of Menu
{
	/*GoToXY(x, y);*/
	setlocale(LC_ALL, "Russian");

	for (int i = 0; i < size_first_menu; i++)
	{
		if (i == active_menu)
		{
			SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
		else
		{
			SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_RED);
		}

		if (LRUD == LEFT)
		{
			GoToXY(x, y);
			cout << first_menu_[i] << " ->>> ";
			cout << DataMenu[i] << endl;
			x = x + size(first_menu_[i]) + 1;
		}
		else if (LRUD == UP)
		{
			GoToXY(x, y++);
			cout << first_menu_[i] << " ->>> ";
			cout << DataMenu[i] << endl;
		}
	}
	cout << "" << endl;
}

// Функция Switch_Choice берёт код клавиши, и помогает двигаться по Меню(Разделам).
// Функция возвращает индекс подтвердженного Раздела. return ENTER
int Switch_Choice(string first_menu_[], string DataMenu[], int size_first_menu, int size_Data_menu, int& active_menu, short x, short y, int LRUD)
{
	char ch;
	while (true)
	{
		x = 50;
		CheckCursor(first_menu_, DataMenu, size_first_menu, size_Data_menu,active_menu, x, y, LRUD);

		ch = _getch();
		if (ch == -32) { ch = _getch(); }
		switch (ch)
		{
			//case ESCAPE:
			//	exit(0); //// Спросить у Натиг м. можно ли заменять ... 
			//	/*break;*/ // - bunu yoxlamaq lazimdi, ki ESCAPE verende proqram tam baglanmasin
		case UP:
			if (active_menu > 0)
			{
				--active_menu;
			}
			break;
		case DOWN:
			if (active_menu < size_first_menu - 1)
			{
				++active_menu;
			}
			break;
		case LEFT:
			if (active_menu > 0)
			{
				--active_menu;
			}
			break;
		case RIGHT:
			if (active_menu < size_first_menu - 1)
			{
				++active_menu;
			}
			break;
		case ENTER:
			system("cls");
			return active_menu;
		default:
			break;
		}
		if (ch == ESCAPE)
		{
			break;
		}
	}
}