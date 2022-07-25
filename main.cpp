#include "ClassUser.h"
#include "FuncForReg.h"

int main()
{
	SetConsoleTitle(L"Examinator - C++ OOP - Created by Vugar Aliyev - 14.07.2022");
	system("mode con cols=130 lines=40");

	while (true)
	{
		add_new_question(question_data, size_questions_data, "Math", "Algebry", "5*5", "10", "15", "20", "25", "A"); // Rabotayet
		add_new_question(question_data, size_questions_data, "Math", "Geometry", "5*5", "10", "15", "20", "25", "D"); // Rabotayet
		add_new_question(question_data, size_questions_data, "Math", "Algebry", "6*5", "30", "15", "20", "25", "A"); // Rabotayet
		add_new_question(question_data, size_questions_data, "Math", "Algebry", "7*5", "10", "35", "20", "25", "B"); // Rabotayet
		add_new_question(question_data, size_questions_data, "Math", "Algebry", "8*5", "40", "15", "20", "25", "A"); // Rabotayet
		add_new_question(question_data, size_questions_data, "Math", "Hendese", "5*5", "10", "15", "20", "25", "D"); // Rabotayet
		add_new_question(question_data, size_questions_data, "Math", "Algebry", "9*5", "45", "15", "20", "25", "A"); // Rabotayet
		add_new_question(question_data, size_questions_data, "Math", "Algebry", "10*5", "50", "15", "20", "25", "A"); // Rabotayet
		add_new_question(question_data, size_questions_data, "Math", "Algebry", "11*5", "55", "15", "20", "25", "A"); // Rabotayet
		//cout << size_questions_data << " - Size" << endl;
		//Sleep(1000);
		//for (int i = 0; i < size_questions_data; i++)
		//{
		//	cout << endl << "Question " << i + 1 << endl << endl;
		//	question_data[i].view_question();
		//}
		//Sleep(1000);
		// Person information for Class Person
		string name;
		string surname;
		string patronymic;
		string age;
		// Personal data information for Class Personal_data
		string home_adress;
		string phone_number;
		string email;
		// Type of user for Class UserType
		string type_name;
		// User information for Slass User
		string user_name;
		string user_password;
		string secure_word;
		string group;
		// Subject information for Class Subject
		string subject_name;
		string subject_category;
		// Question information for Class Question
		string question = "";
		string answer_A = "";
		string answer_B = "";
		string answer_C = "";
		string answer_D = "";
		string true_answer = ""; // Если NONE_ANSWER - значит учитель забыл заполнить графу ВЕРНЫЙ ОТВЕТ.
		StatusActivation is_active = IS_NOT_CONFIRMED;
		// Test activity information for Class Test
		StatusActivation test_activity = IS_ACTIVE;
		// Test result information for Class Result
		int true_answers = 0;
		int false_answers = 0;

		// Helper counter...
		int index_exam = 0;
		int index_question = 0;
		QuestionAnswers student_answer = NONE_ANSWER;
		int index = 0;
		ERRORS_ counter = WRONG_INPUT;
		string DataMenu[] = { user_name, user_password, secure_word, home_adress, phone_number, email, name, surname, patronymic, age,type_name,group,"Нажмите после заполнения","Нажмите чтобы выйти"};
		string DataLoginMenu[] = { user_name, user_password,"Нажмите после заполнения","Нажмите чтобы выйти" };
		//string DataQuestionMenu[10] = { subject_name, subject_category, question, answer_A, answer_B, answer_C, answer_D, true_answer, "Нажмите после заполнения","Нажмите чтобы выйти" };
		string DataQuestionMenu[10] = { "Заполните", "Заполните", "Заполните", "Заполните", "Заполните", "Заполните", "Заполните", "Заполните", "Нажмите после заполнения","Нажмите чтобы выйти" };
		string DataAddTestMenu[] = { "Заполните", "Заполните", "Нажмите после заполнения","Нажмите чтобы выйти" };
		int* counter_B = nullptr;
		string counter_string[] = {"FBES4215","FBES4210"};
		string counter_for_exam;
		//counter_B = Randomizer(question_data, size_questions_data, "Math", "Algebry");
		//create_test(test_data, size_test_data, "Math", "Algebry", counter_B);

		//cout << "Size test_data_db - " << size_test_data << endl;
		//test_data[0].print();
		//cout << "SIZE - test " << test_data[0].get_size() << endl;
		//Sleep(10000);
		//counter_B = Randomizer(question_data, size_questions_data, "Math", "Algebry");
		//create_test(test_data, size_test_data, "Math", "Algebry", counter_B);

		//cout << "Size test_data_db - " << size_test_data << endl;
		//test_data[0].print();
		//cout << "SIZE - test " << test_data[0].get_size() << endl;
		//Sleep(10000);

		add_new_user(users_data, size_users_data, "Vuqar#01", "Vuqar#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Teacher", group);
		add_new_user(users_data, size_users_data, "Elvin#01", "Elvin#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4215");
		add_new_user(users_data, size_users_data, "Davud#01", "Davud#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4215");
		add_new_user(users_data, size_users_data, "Mahmud#01", "Mahmud#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4215");
		add_new_user(users_data, size_users_data, "Maqomed#01", "Maqomed#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4215");
		add_new_user(users_data, size_users_data, "Dilber#01", "Dilber#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4215");
		add_new_user(users_data, size_users_data, "Nicat#01", "Nicat#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4215");
		add_new_user(users_data, size_users_data, "Farax#01", "Farax#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4215");
		add_new_user(users_data, size_users_data, "Togrul#01", "Togrul#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4215");
		add_new_user(users_data, size_users_data, "Tofiq#01", "Tofiq#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4210");
		add_new_user(users_data, size_users_data, "Vasif#01", "Vasif#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4210");
		add_new_user(users_data, size_users_data, "Emil#01", "Emil#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4210");
		add_new_user(users_data, size_users_data, "Emin#01", "Emin#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4210");
		add_new_user(users_data, size_users_data, "Ilkin#01", "Ilkin#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4210");
		add_new_user(users_data, size_users_data, "Abbas#01", "Abbas#02", secure_word, home_adress, phone_number, email, name, surname, patronymic, age, "Student", "FBES4210");

		///////////////////////////////////////////////////// Program start ////////////////////////////////////////////////// 
		LoadingAnimation();
		Logotip();
		OUT_BOX(55, 15, " Страница входа", YELLOW);
		active_menu = 0;
		active_menu = Switch_Choice(MainMenu, sizeof(MainMenu) / sizeof(MainMenu[0]), active_menu, x, y, LEFT);

		switch (active_menu)
		{
		case 0: // Registration 
			while (true)
			{	
				LoadingAnimation();
				system("cls");
				Logotip();
				OUT_BOX(50, 14, " -= Страница регистрации =-", YELLOW);
				GoToXY(50, 17);
				active_menu = 0;
				active_menu = Switch_Choice(RegistrationMenu, DataMenu, sizeof(RegistrationMenu) / sizeof(RegistrationMenu[0]), sizeof(DataMenu) / sizeof(DataMenu[0]), active_menu, x, y, UP);
				
				switch (active_menu)
				{
				case 0:
					do
					{
						system("cls");
						counter = WRONG_INPUT;
						OUT_BOX(45, 14, " Придумайте имя пользователя", ORANGE);
						GoToXY(50, 17);
						cout << "->>> "; cin >> user_name;
						counter = Check_for_duplicate_Username(users_data, size_users_data, user_name);
						if (counter == REPEATED_USERNAME_ERROR)
						{
							MessageBox(NULL, L"Данное Имя пользователя уже существует в базе данных...", L"REPEATED_USERNAME_ERROR", MB_OK | MB_ICONERROR);
						}
						else
						{
							counter = Check_User_name(user_name);
							if (counter == WRONG_SIZE_ERROR)
							{
								//cout << "Имя пользователя должен состоять из минимум 8 - максимум 16 символов... " << endl;
								MessageBox(NULL, L"Имя пользователя должен состоять из минимум 8 - максимум 16 символов...", L"WRONG_SIZE_ERROR", MB_OK | MB_ICONERROR);
							}
							else if (counter == WRONG_TYPE_ERROR)
							{
								//cout << "Имя пользователя должно состоять только из букв Заглавных и нижних регистров, и из цифр... " << endl;
								MessageBox(NULL, L"Имя пользователя должно состоять только из букв Заглавных и нижних регистров, из цифр и символов... ", L"WRONG_TYPE_ERROR", MB_OK | MB_ICONERROR);
							}
						}
						continue;
					} while (counter != CONFIRMED);
					DataMenu[0] = user_name;
					break;
				case 1:
					do
					{
						system("cls");
						counter = WRONG_INPUT;
						OUT_BOX(45, 14, " Придумайте пароль пользователя", ORANGE);
						GoToXY(50, 17);
						cout << "->>> "; cin >> user_password;
						if (user_name == user_password)
						{
							//cout << "Имя пользователя и пароль пользователя не могут быть одинаковыми... " << endl;
							MessageBox(NULL, L"Имя пользователя и пароль пользователя не могут быть одинаковыми... ", L"SAME_USERNAME_USERPASS_ERROR", MB_OK | MB_ICONERROR);
							continue;
						}

						counter = Check_User_Password(user_name, user_password); // owibka est qdeto

						if (counter == WRONG_SIZE_ERROR)
						{
							//cout << "Пароль пользователя должен состоять из минимум 8 - максимум 25 символов... " << endl;
							MessageBox(NULL, L"Пароль пользователя должен состоять из минимум 8 - максимум 25 символов...", L"SAME_USERNAME_USERPASS_ERROR", MB_OK | MB_ICONERROR);
						}
						else if (counter == WRONG_TYPE_ERROR)
						{
							/*cout << "Пароль пользователя должно состоять только из букв Заглавных и нижних регистров, и из цифр... " << endl;	*/
							MessageBox(NULL, L"Пароль пользователя должно состоять только из букв Заглавных и нижних регистров, из цифр и символов... ", L"WRONG_TYPE_ERROR", MB_OK | MB_ICONERROR);
						}
					} while (counter != CONFIRMED);
					DataMenu[1] = user_password;
					break;
				case 2:
					OUT_BOX(35, 14, " Введите кодовое слово. Оно вам понадобится если забудете пароль.", ORANGE);
					GoToXY(50, 17);
					cout << "->>> "; cin >> secure_word;
					DataMenu[2] = secure_word;
					break;
				case 3:
					OUT_BOX(35, 14, " Введите Домашний адрес.(Например: Hasan Aliyev ev 100)", ORANGE);
					GoToXY(35, 17);
					cout << "->>> "; getline(cin, home_adress);					
					DataMenu[3] = home_adress;
					break;
				case 4:
					OUT_BOX(35, 14, " Введите номер вашего мобильного телефона.(Например: 994511234567)", ORANGE);
					GoToXY(35, 17);
					cout << "->>> "; cin >> phone_number;
					DataMenu[4] = phone_number;
					break;
				case 5:
					OUT_BOX(35, 14, " Введите адрес Электронной почты. (Например: examinator@itstep.edu.az)", ORANGE);
					GoToXY(35, 17);
					cout << "->>> "; cin >> email;
					DataMenu[5] = email;
					break;
				case 6:
					OUT_BOX(35, 14, " Введите ваше имя. (Например: Vuqar)", ORANGE);
					GoToXY(35, 17);
					cout << "->>> "; cin >> name;
					DataMenu[6] = name;
					break;
				case 7:
					OUT_BOX(35, 14, " Введите вашу фамилию.(Например: Aliyev)", ORANGE);
					GoToXY(35, 17);
					cout << "->>> "; cin >> surname;
					DataMenu[7] = surname;
					break;
				case 8:
					OUT_BOX(35, 14, " Введите ваше отчество.(Например: Abilfat)", ORANGE);
					GoToXY(35, 17);
					cout << "->>> "; cin >> patronymic;
					DataMenu[8] = patronymic;
					break;
				case 9:
					OUT_BOX(35, 14, " Введите ваш возраст. (Например: 31)", ORANGE);
					GoToXY(35, 17);
					cout << "->>> "; cin >> age;
					DataMenu[9] = age;
					break;
				case 10:
					active_menu = 0;
					OUT_BOX(45, 14, "Выберите Тип пользователя", ORANGE);
					active_menu = Switch_Choice(userType, sizeof(userType) / sizeof(userType[0]), active_menu, x, y, UP);
					if (active_menu == 3)
					{
						active_menu = 0;
						break;
					}
					type_name = userType[active_menu];
					DataMenu[10] = type_name;
					break;
				case 11:
					OUT_BOX(35, 14, " Введите название вашей группы в данной Организации(Например: FBES4215).", ORANGE);
					GoToXY(35, 17);
					cout << "->>> "; cin >> group;
					DataMenu[11] = group;
					break;
				case 12:
					add_new_user(users_data, size_users_data, user_name, user_password, secure_word, home_adress, phone_number, email, name, surname, patronymic, age, type_name, group);
					//cout << "ADD rabotayet...." << endl;
					//Sleep(1000);
					/*users_data[0].View_User_Info();*/
					/*View_User_Info(users_data, size_users_data, 0);*/
					/*Sleep(10000);*/
					OUT_BOX(45, 14, "Вы были успешно зарегистрированы", ORANGE);
					active_menu = 13;
					Sleep(1000);

					break;
				default:
					break;
				}
				if (active_menu == 13)
				{
					active_menu = 0;
					break;
				}
				//cout << "Username - >>> " << user_name;
				//cout << " Userpass - >>> " << user_password;
				//cout << " Usertype - >>> " << user_status;
				//cout << " Usercode - >>> " << code_word;


				/*add_new_user(users_data, size_users_data, user_name, user_password, user_status, code_word);*/
				//users_data[1].print_info();
				//users_data[0].print_info();
				/*Sleep(1000);*/
				active_menu = 0;				
			}

			break;
		case 1: // Logining
			while (true)
			{
				
				LoadingAnimation();
				system("cls");
				Logotip();
				OUT_BOX(55, 14, " -= Страница входа =-", YELLOW);
				active_menu = 0;
				active_menu = Switch_Choice(LoginMenu, DataLoginMenu, sizeof(LoginMenu) / sizeof(LoginMenu[0]), sizeof(DataLoginMenu) / sizeof(DataLoginMenu[0]), active_menu, x, y, UP);

				switch (active_menu)
				{
				case 0:
					OUT_BOX(50, 14, " Введите имя пользователя.", ORANGE);
					GoToXY(50, 17);
					cout << "->>> "; cin >> user_name;
					DataLoginMenu[0] = user_name;
					break;
				case 1:
					OUT_BOX(50, 14, " Введите пароль.", ORANGE);
					GoToXY(50, 17);
					cout << "->>> "; cin >> user_password;
					DataLoginMenu[1] = user_password;
					break;
				case 2:
					//cout << "User name " << user_name << endl;
					//cout << "User pass " << user_password << endl;
					//cout << "Find function = " << findUsers(users_data, size_users_data, user_name, user_password) << endl;
					//Sleep(5000);
					if (findUsers(users_data, size_users_data, user_name, user_password) != WRONG_INPUT)
					{
						MessageBox(NULL, L"Успешный вход...", L"SUCCESFULLY ACCESS", MB_OK | MB_USERICON); // DELETE THIS
						index = findUsers(users_data, size_users_data, user_name, user_password);
						//users_data[index].View_User_Info();
						//Sleep(2000);
						while (true)
						{
							LoadingAnimation();
							system("cls");
							active_menu = 0;
							active_menu = Switch_Choice(SecondaryMenu, sizeof(SecondaryMenu) / sizeof(SecondaryMenu[0]), active_menu, x, y, UP);

							switch (active_menu)
							{
							case 0: // Panel Studenta
								while (true)
								{
									LoadingAnimation();
									system("cls");
									active_menu = 0;
									active_menu = Switch_Choice(StudentMenu, sizeof(StudentMenu) / sizeof(StudentMenu[0]), active_menu, x, y, UP);

									switch (active_menu)
									{
									case 0:
										users_data[index].View_User_Info();
										_getch();
										break;
									case 1:
										LoadingAnimation();
										system("cls");
										users_data[index].View_Exams();
										active_menu = 0;
										active_menu = Switch_Choice(choiceMenu, sizeof(choiceMenu) / sizeof(choiceMenu[0]), active_menu, x, y, UP);
										if (active_menu == 0)
										{
											OUT_BOX(35, 14, " Введите номер Экзамена.", ORANGE);
											GoToXY(50, 17);
											cout << "->>> "; cin >> index_exam;
											index_exam -= 1;

											LoadingAnimation();
											system("cls");
											active_menu = 0;
											active_menu = Switch_Choice(ExaminationMenu, sizeof(ExaminationMenu) / sizeof(ExaminationMenu[0]), active_menu, x, y, UP);

											switch (active_menu)
											{
											case 0:
												while (true)
												{
													LoadingAnimation();
													system("cls");
													users_data[index].examination_arr[index_exam].p_testing->print(index_question);
													active_menu = 0;
													active_menu = Switch_Choice(ExamMenu, sizeof(ExamMenu) / sizeof(ExamMenu[0]), active_menu, x, y, UP);
													switch (active_menu)
													{
													case 0:
														if (index_question < 0)
														{
															break;
														}
														else
														{
															index_question--;
														}
														break;
													case 1:
														student_answer = A;
														if (users_data[index].examination_arr[index_exam].p_testing->P_test[index_question]->get_true_answer() == student_answer)
														{
															users_data[index].examination_arr[index_exam].set_true_anwers(1);
														}
														else
														{
															users_data[index].examination_arr[index_exam].set_false_anwers(1);
														}
														break;
													case 2:
														student_answer = B;
														if (users_data[index].examination_arr[index_exam].p_testing->P_test[index_question]->get_true_answer() == student_answer)
														{
															users_data[index].examination_arr[index_exam].set_true_anwers(1);
														}
														else
														{
															users_data[index].examination_arr[index_exam].set_false_anwers(1);
														}
														break;
													case 3:
														student_answer = C;
														if (users_data[index].examination_arr[index_exam].p_testing->P_test[index_question]->get_true_answer() == student_answer)
														{
															users_data[index].examination_arr[index_exam].set_true_anwers(1);
														}
														else
														{
															users_data[index].examination_arr[index_exam].set_false_anwers(1);
														}
														break;
													case 4:
														student_answer = D;
														if (users_data[index].examination_arr[index_exam].p_testing->P_test[index_question]->get_true_answer() == student_answer)
														{
															users_data[index].examination_arr[index_exam].set_true_anwers(1);
														}
														else
														{
															users_data[index].examination_arr[index_exam].set_false_anwers(1);
														}
														break;
													case 5:
														if (index_question >= 5)
														{
															break;
														}
														else
														{
															index_question++;
														}
														break;
													default:
														break;
													}
													if (active_menu == 6)
													{
														active_menu = 0;
														break;
													}
												}
												break;
											case 1:
												LoadingAnimation();
												system("cls");
												users_data[index].View_Exams();
												_getch();
											default:
												break;
											}
											if (active_menu == 2)
											{
												active_menu = 0;
												break;
											}
										}
										else
										{
											active_menu == 0;
											break;
										}


										break;
									default:
										break;
									}

									if (active_menu == 2)
									{
										active_menu = 0;
										break;
									}
								}
								break;
							case 1: // Panel Teacher
								if (users_data[index].obj.get_type_name() == "Administrator" || users_data[index].obj.get_type_name() == "Teacher")
								{
									while (true)
									{
										LoadingAnimation();
										system("cls");
										active_menu = 0;
										active_menu = Switch_Choice(TeacherMenu, sizeof(TeacherMenu) / sizeof(TeacherMenu[0]), active_menu, x, y, UP);

										switch (active_menu)
										{
										case 0:
											
											while (true)
											{
												LoadingAnimation();
												system("cls");
												OUT_BOX(50, 12, TeacherMenu[0], ORANGE);

												active_menu = Switch_Choice(Add_Question_Menu, DataQuestionMenu, sizeof(Add_Question_Menu) / sizeof(Add_Question_Menu[0]), sizeof(DataQuestionMenu) / sizeof(DataQuestionMenu[0]), active_menu, x, y, UP);
												switch (active_menu)
												{
												case 0:
													OUT_BOX(35, 14, " Введите название предмета (Например: Python)", ORANGE);
													GoToXY(35, 17);
													cout << "->>> "; getline(cin, subject_name);
													DataQuestionMenu[0] = subject_name;
													break;
												case 1:
													OUT_BOX(35, 14, " Введите категорию предмета (Например: Python Beginer)", ORANGE);
													GoToXY(35, 17);
													cout << "->>> "; getline(cin, subject_category);
													DataQuestionMenu[1] = subject_category;
													break;
												case 2:
													OUT_BOX(35, 14, " Введите вопрос", ORANGE);
													GoToXY(35, 17);
													cout << "->>> "; getline(cin, question);
													DataQuestionMenu[2] = question;
													break;
												case 3:
													OUT_BOX(35, 14, " Введите ответ А", ORANGE);
													GoToXY(35, 17);
													cout << "->>> "; getline(cin, answer_A);
													DataQuestionMenu[3] = answer_A;
													break;
												case 4:
													OUT_BOX(35, 14, " Введите ответ B", ORANGE);
													GoToXY(35, 17);
													cout << "->>> "; getline(cin, answer_B);
													DataQuestionMenu[4] = answer_B;
													break;
												case 5:
													OUT_BOX(35, 14, " Введите ответ C", ORANGE);
													GoToXY(35, 17);
													cout << "->>> "; getline(cin, answer_C);
													DataQuestionMenu[5] = answer_C;
													break;
												case 6:
													OUT_BOX(35, 14, " Введите ответ D", ORANGE);
													GoToXY(35, 17);
													cout << "->>> "; getline(cin, answer_D);
													DataQuestionMenu[6] = answer_D;
													break;
												case 7:
													OUT_BOX(35, 14, " Введите верный ответ (Например Заглавной буквой: A,B,C,D)", ORANGE);
													GoToXY(35, 17);
													cout << "->>> "; getline(cin, true_answer);
													DataQuestionMenu[7] = true_answer;
													break;

												default:
													break;
												}

												if (active_menu == 8)
												{													
													if (subject_name.size() > 1 && subject_category.size() > 1 && question.size() > 1 && answer_A.size() > 1 && answer_B.size() > 1 && answer_C.size() > 1 && answer_D.size() > 1 && true_answer.size() > 0)
													{
														add_new_question(question_data, size_questions_data, subject_name, subject_category, question, answer_A, answer_B, answer_C, answer_D, true_answer);
														active_menu = 9;
														MessageBox(NULL, L"Вопрос добавлен...", L"CONFIRMED", MB_OK | MB_ICONQUESTION);
													}
													active_menu = 0;
													break;
												}
												if (active_menu == 9)
												{
													active_menu = 0;
													break;
												}
											}
											break;
										case 1: // Создание экземпляра Теста
											subject_name = "";
											subject_category = "";
											while (true)
											{
												LoadingAnimation();
												system("cls");
												OUT_BOX(50, 12, TeacherMenu[1], ORANGE);
												active_menu = 0;
												active_menu = Switch_Choice(AddTestMenu, DataAddTestMenu, sizeof(AddTestMenu) / sizeof(AddTestMenu[0]), sizeof(DataAddTestMenu) / sizeof(DataAddTestMenu[0]), active_menu, x, y, UP);

												switch (active_menu)
												{
												case 0:
													OUT_BOX(35, 14, " Введите название предмета", ORANGE);
													GoToXY(35, 17);
													cout << "->>> "; getline(cin, subject_name);
													DataAddTestMenu[0] = subject_name;													
													break;
												case 1:
													OUT_BOX(35, 14, " Введите категорию предмета", ORANGE);
													GoToXY(35, 17);
													cout << "->>> "; getline(cin, subject_category);
													DataAddTestMenu[1] = subject_category;													
													break;
												case 2:
													if (size(subject_name) > 1 && size(subject_category) > 1)
													{
														if (Randomizer(question_data, size_questions_data, subject_name, subject_category) != 0)
														{
															counter_B = Randomizer(question_data, size_questions_data, subject_name, subject_category);
															create_test(test_data, size_test_data, subject_name, subject_category, counter_B);
															system("cls");
															test_data[0].print();
															Sleep(10000);
															active_menu = 3;
															MessageBox(NULL, L"Тест добавлен...", L"CONFIRMED", MB_OK | MB_ICONQUESTION);
														}
														else
														{
															MessageBox(NULL, L"Введены неверные данные...", L"WRONG_INPUT", MB_OK | MB_ICONQUESTION);
														}
													}
													break;
												default:
													break;
												}
												if (active_menu == 3)
												{
													active_menu = 0;
													break;
												}
											}											
											break;
										case 2: // Создание экземпляра Экзамена;

											//for (int i = 0; i < size_users_data; i++)
											//{
											//	for (int j = i; j < size_users_data; j++)
											//	{
											//		if (users_data[i].get_group() != users_data[j].get_group())
											//		{
											//			cout << "Group - " << users_data[i].get_group() << endl;
											//		}
											//	}
											//}
											//Sleep(10000);
											//counter_string = View_Groups(users_data, size_users_data);
											//for (int i = 0; i < sizeof(counter_string)/ sizeof(counter_string[0]); i++)
											//{
											//	cout << "Group - " << counter_string[i] << endl;
											//}
											for (int i = 0; i < size(counter_string); i++)
											{
												cout << " Group - " << counter_string[i] << endl;
											}
											cout << "ВВедите название группы куда загрузить экзамен... " << endl;
											cin >> counter_for_exam;

											for (int i = 0; i < size_users_data; i++)
											{
												if (users_data[i].get_group() == counter_for_exam)
												{
													users_data[i].add_new_exam(test_data, 0);
												}
											}
											break;
										default:
											break;
										}

										if (active_menu == 3)
										{
											active_menu = 0;
											break;
										}
									}
								}
								break;
							case 2: // Panel Admina
								if (users_data[index].obj.get_type_name() == "Administrator")
								{
									while (true)
									{
										LoadingAnimation();
										system("cls");
										active_menu = 0;
										active_menu = Switch_Choice(AdministrationMenu, sizeof(AdministrationMenu) / sizeof(AdministrationMenu[0]), active_menu, x, y, UP);

										switch (active_menu)
										{
										case 0:
											while (true)
											{
												LoadingAnimation();
												system("cls");
												active_menu = 0;
												active_menu = Switch_Choice(AdminWorkWithUsers, sizeof(AdminWorkWithUsers) / sizeof(AdminWorkWithUsers[0]), active_menu, x, y, UP);
												if (active_menu == 6)
												{
													active_menu = 0;
													break;
												}
											}
											break;
										default:
											break;
										}

										if (active_menu == 1)
										{
											active_menu = 0;
											break;
										}
									}
								}
								else
								{
									LoadingAnimation();
									system("cls");
									OUT_BOX(45, 14, "У вас нет привилегий чтобы заходить в данное меню.", RED);
									active_menu = 0;
									Sleep(5000);
								}
								/*break;*/
							default:
								break;
							}
							/*break;*/

							if (active_menu == 3)
							{
								active_menu = 0;
								break;
							}
						}
					}
					else
					{
						MessageBox(NULL, L"Имя или пароль пользователя введены неверно...", L"WRONG_INPUT", MB_OK | MB_ICONERROR);
						continue;
					}
					break;
				default:
					break;
				}
				if (active_menu == 3)
				{
					active_menu = 0;
					break;
				}

				/*users_data[0].print_info();*/ // Proverka
				//cout << endl;
				//cout << "Find user_ index - >>> " << findUsers(users_data, size_users_data, user_name, user_password) << endl;
				/*Sleep(3000);*/
				

				
				/*break;*/
			}
			/*break;*/

			//cout << "Logining" << endl;
			//add_new_question(question_data, size_questions_data, "Math", "Algebry", "5*5", "10", "15", "20", "25", D); // Rabotayet
			//add_new_question(question_data, size_questions_data, "Math", "Geometry", "5*5", "10", "15", "20", "25", D); // Rabotayet
			//add_new_question(question_data, size_questions_data, "Math", "Algebry", "6*5", "30", "15", "20", "25", A); // Rabotayet
			//add_new_question(question_data, size_questions_data, "Math", "Algebry", "7*5", "10", "35", "20", "25", B); // Rabotayet
			//add_new_question(question_data, size_questions_data, "Math", "Algebry", "8*5", "40", "15", "20", "25", A); // Rabotayet
			//add_new_question(question_data, size_questions_data, "Math", "Hendese", "5*5", "10", "15", "20", "25", D); // Rabotayet
			//add_new_question(question_data, size_questions_data, "Math", "Algebry", "9*5", "45", "15", "20", "25", A); // Rabotayet
			//add_new_question(question_data, size_questions_data, "Math", "Algebry", "10*5", "50", "15", "20", "25", A); // Rabotayet
			//add_new_question(question_data, size_questions_data, "Math", "Algebry", "11*5", "55", "15", "20", "25", A); // Rabotayet

			//for (int i = 0; i < size_questions_data; i++)
			//{
			//	cout << "Question " << i + 1 << endl;
			//	question_data[i].print();
			//	cout << endl;
			//}
			//Sleep(1000);
			//cout << "==================================================================" << endl;
			//question_data[0].print();
			//Sleep(1000);
			//cout << "Function create test" << endl;
			//counter_B = Randomizer(question_data, size_questions_data, "Math", "Algebry");
			//create_test(test_data, size_test_data, "Math", "Algebry", counter_B);
			//system("cls");
			//test_data[0].print();
			//system("cls");
			//users_data[0].add_new_exam(test_data, 0);

			//cout << "Wtoto novoye -==========================" << endl;
			//users_data[0].exam_db[0].p_testing->print();
			//MessageBox(NULL, L"Пароль пользователя должно состоять только из букв Заглавных и нижних регистров, и из цифр... ", L"WRONG_TYPE_ERROR", MB_OK | MB_ICONERROR); // test ucun
			////Test t1(question_data, size_test_data, "Math", "Algebry", counter_B); // vmeste s nijnim rabotayet
			////t1.print();
			//cout << "Function create test end" << endl;
			//Sleep(5000);
			//system("cls");			
			break;
		//case 2: // Zabili parol
		//	user_name = "";
		//	code_word = "";
		//	index = WRONG_INPUT;


		//	while (true)
		//	{
		//		LoadingAnimation();

		//		active_menu = 0;
		//		active_menu = Switch_Choice(ForgotPassword, sizeof(ForgotPassword) / sizeof(ForgotPassword[0]), active_menu, x, y, UP, user_name, code_word);
		//		switch (active_menu)
		//		{
		//		case 0:
		//			while (true)
		//			{
		//				cout << "Введите имя ->>> "; cin >> user_name;
		//				if (findUser(users_data, size_users_data, user_name) != WRONG_INPUT)
		//				{
		//					break;
		//				}
		//				else
		//				{
		//					MessageBox(NULL, L"Таково имени пользователя нет в базе данных. Попробуйте ещё раз...", L"WRONG_INPUT", MB_OK | MB_ICONERROR);
		//					continue;
		//				}
		//			}
		//			break;
		//		case 1:
		//			cout << "Введите кодовое слово ->>> "; cin >> code_word;
		//			index = findUserByCodeWord(users_data, size_users_data, user_name, code_word);
		//			if (index != WRONG_INPUT)
		//			{
		//				break;
		//			}
		//			else
		//			{
		//				MessageBox(NULL, L"Либо вы еще не ввели имя пользователя, либо кодовая фраза указана неверно.", L"WRONG_INPUT", MB_OK | MB_ICONERROR);
		//				continue;
		//			}
		//			break;
		//		case 2:
		//			if (user_name.size() > 1 && code_word.size() > 1)
		//			{
		//				while (true)
		//				{
		//					counter = 0;
		//					cout << "Введите новый пароль ->>> "; cin >> user_password;

		//					counter = Check_User_Password(user_password); // owibka est qdeto zdes

		//					if (counter == CONFIRMED)
		//					{
		//						if (index != WRONG_INPUT)
		//						{
		//							users_data[index].set_user_password(user_password);
		//						}
		//						active_menu = 3;
		//						system("cls");
		//						OUT_BOX(35, 14, "Ваш пароль успешно востановлен..", ORANGE);
		//						Sleep(1000);
		//						break;
		//					}
		//					else
		//					{
		//						if (counter == WRONG_SIZE_ERROR)
		//						{
		//							//cout << "Пароль пользователя должен состоять из минимум 8 - максимум 25 символов... " << endl;
		//							MessageBox(NULL, L"Пароль пользователя должен состоять из минимум 8 - максимум 25 символов...", L"SAME_USERNAME_USERPASS_ERROR", MB_OK | MB_ICONERROR);
		//						}
		//						else if (counter == WRONG_TYPE_ERROR)
		//						{
		//							/*cout << "Пароль пользователя должно состоять только из букв Заглавных и нижних регистров, и из цифр... " << endl;	*/
		//							MessageBox(NULL, L"Пароль пользователя должно состоять только из букв Заглавных и нижних регистров, и из цифр... ", L"WRONG_TYPE_ERROR", MB_OK | MB_ICONERROR);
		//						}
		//						continue;
		//					}
		//					index = findUserByCodeWord(users_data, size_users_data, user_name, code_word);
		//					if (index != WRONG_INPUT)
		//					{
		//						users_data[index].set_User_password(user_password);
		//					}
		//				}
		//			}
		//			break;
		//		default:
		//			break;
		//		}
		//		if (active_menu == 3)
		//		{
		//			active_menu = 0;
		//			break;
		//		}
		//	}

		//	break;
			default:
				break;
		}
		if (active_menu == size(MainMenu) - 1 || active_menu == ESCAPE)
		{
			break;
		}
	}



	Sleep(5000);
	return 0;
}