#pragma once
#include "Logo.h"

string MainMenu[] = { "|Регистрация|","|Вход|", "|Забыли пароль|", "|Выход|" };

string ForgotPassword[] = { "|Имя пользователя|",
							"|  Кодовая фраза |",
							"|      Далее     |",
							"|      Выход     |" };

string userType[] = { "Administrator",
						"Teacher",
						"Student",
						"Выход" };

string SecondaryMenu[] = {	"|    Панель Студента    |",
							"|    Панель Учителя     |",
							"| Панель Администратора |",
							"|         Выход         |" };

string StudentMenu[] = {	"|          Профиль        |",
							"|    Список экзаменов     |",
							"|           Выход         |" };

string ExaminationMenu[] = {	"|          Сдать Экзамен        |",
								"|     Посмотреть результаты     |",
								"|              Выход            |" };

string ExamMenu[] = { "Previous","A","B","C","D","Next", "Exit" };

string choiceMenu[] = { "|          Выбрать Экзамен        |",
						"|              Выход              |" };

string TeacherMenu[] = {	"|    Создать вопрос     |",
							"|    Создать Тест       |",
							"|    Создать Экзамен    |",
							"|         Выход         |" };

string AddTestMenu[] = {	"|     Название предмета   |",
							"|     Категория предмета  |",
							"|           Далее         |",
							"|           Выход         |" };

string AdministrationMenu[] = { "|    Работа с пользователями    |",
								"|              Выход            |" };

string AdminWorkWithUsers[] = { "|     Активация пользователя    |",
								"|    Добавление пользователя    |",
								"|     Изменения пользователя    |",
								"|     Удаление пользователя     |",
								"|       Выдача привилегий       |",
								"|       Изменение привиегий     |",
								"|             Выход             |" };

string Add_Question_Menu[] = {	"|     Название предмета   |",
								"|     Категория предмета  |",
								"|          Вопрос         |",
								"|          Ответ А        |",
								"|          Ответ B        |",
								"|          Ответ C        |",
								"|          Ответ D        |",
								"|   Верный вариант ответа |",
								"|           Далее         |",
								"|           Выход         |" };

short x = 50, y = 19;
int active_menu = 0;

void LoadingAnimation()
{
	system("cls");
	setlocale(LC_ALL, "C");
	string symbol = "";

	SetConsoleTextAttribute(hStdOut, ORANGE);
	for (int i = 0; i < 20; i++)
	{
		system("cls");
		GoToXY(50, 12);
		cout << "Loading " << (i + 1) * 5 << " % ";
		symbol.resize(i, char(219));
		cout << symbol;
		Sleep(10);
	}
	setlocale(LC_ALL, "Russian");
	system("cls");
	//SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
}

void OUT_BOX(short x, short y, string sentence, FOREGROUND_COLORS_CODE color)
{
	setlocale(LC_ALL, "C");
	SetConsoleTextAttribute(hStdOut, color);
	string symbol = "";
	for (int i = 0; i < size(sentence) + 2; i++)
	{
		symbol.resize(i, char(205));
	}
	GoToXY(x, y++);
	cout << char(201) << symbol << char(187) << endl;
	GoToXY(x, y++);
	cout << char(186); setlocale(LC_ALL, ""); cout << sentence; setlocale(LC_ALL, "C"); cout << " " << char(186) << endl;
	GoToXY(x, y++);
	cout << char(200) << symbol << char(188) << endl;
	setlocale(LC_ALL, "");
}

// Функция CheckCursor выводит на консоль - Меню, и управляет цветом Меню(Команд)
void CheckCursor(string array_[], int size_array, int& active_menu, short& x, short y, int LRUD) // LRUD - Left&Rigth or Up&Down version of Menu
{
	/*GoToXY(x, y);*/
	setlocale(LC_ALL, "Russian");

	for (int i = 0; i < size_array; i++)
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
			cout << array_[i] << endl;
			x = x + size(array_[i]) + 1;
		}
		else if (LRUD == UP)
		{
			GoToXY(x, y++);
			cout << array_[i] << endl;
		}
	}
	cout << "" << endl;
}



// Функция Switch_Choice берёт код клавиши, и помогает двигаться по Меню(Разделам).
// Функция возвращает индекс подтвердженного Раздела. return ENTER
int Switch_Choice(string array_[], int size_array, int& active_menu, short x, short y, int LRUD)
{
	char ch;
	while (true)
	{
		x = 40;
		CheckCursor(array_, size_array, active_menu, x, y, LRUD);

		ch = _getch();
		if (ch == -32) { ch = _getch(); }
		switch (ch)
		{
		case ESCAPE:
			return 27;
			/*exit(0);*/ //// Спросить у Натиг м. можно ли заменять ... 
			break; // - bunu yoxlamaq lazimdi, ki ESCAPE verende proqram tam baglanmasin
		case UP:
			if (active_menu > 0)
			{
				--active_menu;
			}
			break;
		case DOWN:
			if (active_menu < size_array - 1)
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
			if (active_menu < size_array - 1)
			{
				++active_menu;
			}
			break;
		case ENTER:
			system("cls");
			return active_menu;
			break;
		default:
			break;
		}
	}
}

void CheckCursor(string array_[], int size_array, int& active_menu, short& x, short y, int LRUD, string user_name, string code_word) // LRUD - Left&Rigth or Up&Down version of Menu
{
	/*GoToXY(x, y);*/
	setlocale(LC_ALL, "Russian");

	string counter_Menu[] = { user_name,code_word, "", "" };

	for (int i = 0; i < size_array; i++)
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
			cout << array_[i] << " ->>> ";
			cout << counter_Menu[i] << endl;
			x = x + size(array_[i]) + 1;
		}
		else if (LRUD == UP)
		{
			GoToXY(x, y++);
			cout << array_[i] << " ->>> ";
			cout << counter_Menu[i] << endl;
		}
	}
	cout << "" << endl;
}

// Функция Switch_Choice берёт код клавиши, и помогает двигаться по Меню(Разделам).
// Функция возвращает индекс подтвердженного Раздела. return ENTER
int Switch_Choice(string array_[], int size_array, int& active_menu, short x, short y, int LRUD, string user_name, string code_word)
{
	char ch;
	while (true)
	{
		x = 50;
		CheckCursor(array_, size_array, active_menu, x, y, LRUD, user_name, code_word);

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
			if (active_menu < size_array - 1)
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
			if (active_menu < size_array - 1)
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

void CheckCursor(string array_[], int size_array, int& active_menu, short& x, short y, int LRUD, string subject_name, string category_name, string question, string answer_A, string answer_B, string answer_C, string answer_D, string true_answer) // LRUD - Left&Rigth or Up&Down version of Menu
{
	/*GoToXY(x, y);*/
	setlocale(LC_ALL, "Russian");

	string counter_Menu[] = { subject_name,  category_name,  question,  answer_A,  answer_B,  answer_C, answer_D, true_answer, "ok","ok" };

	for (int i = 0; i < size_array; i++)
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
			cout << array_[i] << " ->>> ";
			cout << counter_Menu[i] << endl;
			x = x + size(array_[i]) + 1;
		}
		else if (LRUD == UP)
		{
			GoToXY(x, y++);
			cout << array_[i] << " ->>> ";
			cout << counter_Menu[i] << endl;
		}
	}
	cout << "" << endl;
}

// Функция Switch_Choice берёт код клавиши, и помогает двигаться по Меню(Разделам).
// Функция возвращает индекс подтвердженного Раздела. return ENTER
int Switch_Choice(string array_[], int size_array, int& active_menu, short x, short y, int LRUD, string subject_name, string category_name, string question, string answer_A, string answer_B, string answer_C, string answer_D, string true_answer)
{
	char ch;
	while (true)
	{
		x = 50;
		CheckCursor(array_, size_array, active_menu, x, y, LRUD, subject_name, category_name, question, answer_A, answer_B, answer_C, answer_D, true_answer);

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
			if (active_menu < size_array - 1)
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
			if (active_menu < size_array - 1)
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

//
//int Switch_Choice_for_questions(Examination*p_test, int& active_menu, short x, short y, int LRUD) // testoviy
//{
//	string array_question[5][5];
///*	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			array_question[i][j] = p_test->p_testing->P_test[i]->get_question();
//			array_question[i][j] = p_test->p_testing->P_test[i]->get_answer_A();
//			array_question[i][j] = p_test->p_testing->P_test[i]->get_answer_B();
//			array_question[i][j] = p_test->p_testing->P_test[i]->get_answer_C();
//			array_question[i][j] = p_test->p_testing->P_test[i]->get_answer_D();
//			cout << array_question[i][j] << endl;
//		}
//		
//	}*/	
//	for (int i = 0; i < 5; i++)
//	{
//		array_question[i][0] = p_test->p_testing->P_test[i]->get_question();
//		array_question[i][1] = p_test->p_testing->P_test[i]->get_answer_A();
//		array_question[i][2] = p_test->p_testing->P_test[i]->get_answer_B();
//		array_question[i][3] = p_test->p_testing->P_test[i]->get_answer_C();
//		array_question[i][4] = p_test->p_testing->P_test[i]->get_answer_D();
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "J - " << j << endl;
//			cout << array_question[i][j] << endl;
//		}
//	
//	}
//
//	char ch;
//	while (true)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			x = 50;
//			CheckCursor(array_question[i], 5, active_menu, x, y, UP);
//
//			ch = _getch();
//			if (ch == -32) { ch = _getch(); }
//			switch (ch)
//			{
//			case ESCAPE:
//				exit(0);
//				
//			case UP:
//				if (active_menu > 1)
//				{
//					--active_menu;
//				}
//				break;
//			case DOWN:
//				if (active_menu < 5 - 3) // isprav
//				{
//					++active_menu;
//				}
//				break;
//			case LEFT:
//				if (active_menu > 0)
//				{
//					--active_menu;
//				}
//				break;
//			case RIGHT:
//				if (active_menu < 5 - 1)
//				{
//					++active_menu;
//				}
//				break;
//			case ENTER:
//				system("cls");
//				return active_menu;
//			default:
//				break;
//			}
//		}
//
//	}
//}

// Функция LoadingAnimation выводит на консоль - Загрузка по процентам + палочки выручалочки
