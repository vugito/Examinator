#pragma once
#include "ClassPersonalData.h"		// Вызван лист с классом Данные Пользователя / в нём лист с классом Человек
#include "ClassUserType.h"			// Вызван лист с классом Тип Пользователя / в нём лист с классом Превилегии
#include "HelperFunctions.h"
#include "ClassExamination.h"

class User : public PersonalData
{
private:
	string user_name;
	string user_password;
	string secure_word;
	string group;
	int size_examination_db = 0;
public:
	UserType obj;
	string get_user_name() { return this->user_name; }
	string get_user_password() { return this->user_password; }
	string get_secure_word() { return this->secure_word; }
	string get_group() { return this->group; }
	int get_size_exam_db() { return this->size_examination_db; }

	//UserType* p_type_user = nullptr; // Хранит в себе адрес на Тип пользователя. // Будет введено в следующем обновлении.
	Examination* examination_arr = nullptr; // Хранит в себе назначенные Экзамены

	ERRORS_ set_user_name(string user_name)
	{
		if (Check_User_name(user_name) == CONFIRMED)
		{
			this->user_name = user_name;
			return CONFIRMED;
		}
		else
		{
			return Check_User_name(user_name);
		}
	}

	ERRORS_ set_user_password(string user_name, string user_password)
	{
		if (Check_User_Password(user_name, user_password) == CONFIRMED)
		{
			this->user_password = user_password;
			return CONFIRMED;
		}
		else
		{
			return Check_User_Password(user_name, user_password);
		}
	}

	void set_secure_word(string secure_word) { this->secure_word = secure_word; }

	void set_type_user(string type_user)
	{
		obj = { type_user };
	}

	void set_group(string group) { this->group = group; }

	void add_new_exam(Test* arr_db, int index) // dopisat metod
	{
		if (examination_arr == nullptr)
		{
			examination_arr = new Examination[size_examination_db + 1];
			examination_arr[size_examination_db].p_testing = &arr_db[index];
		}
		size_examination_db++;
	}

	void View_Exams()
	{
		for (int i = 0; i < size_examination_db; i++)
		{
			cout << "Exam №-" << i+1 << endl;
			cout << "Верные ответы - " << examination_arr[i].get_true_answers() << endl;
			cout << "Неверные ответы - " << examination_arr[i].get_false_answers() << endl;
		}
	}



	void View_User_Info()
	{
		cout << "ID - >>" << endl << endl;
		cout << "Тип пользователя ->>> " << obj.get_type_name() << endl;
		cout << "Название группы ->>> " << get_group() << endl;
		cout << "Имя ->>> " << get_name() << endl;
		cout << "Фамилия ->>> " << get_surname() << endl;
		cout << "Отчество ->>> " << get_patronymic() << endl;
		cout << "Возраст ->>> " << get_age() << endl;
		cout << "Имя пользователя ->>> " << get_user_name() << endl;
		cout << "Пароль пользователя ->>> " << get_user_password() << endl;
		cout << "Секретное слово ->>> " << get_secure_word() << endl;
		cout << "Номер телефона ->>> " << get_phone_number() << endl;
		cout << "Адрес ->>> " << get_home_adress() << endl;
		cout << "Э-почта ->>> " << get_email() << endl;
		cout << "==========Список привилегий=========" << endl;
		obj.PrintPrivilegesStatus();
	}

	User(string user_name, string user_password, string secure_word, string home_adress, string phone_number, string email, string name, string surname, string patronymic, string age, string type_user, string group = "Noname") :PersonalData(name, surname, patronymic, age, home_adress, phone_number, email)
	{
		set_user_name(user_name);
		set_user_password(user_name,user_password);
		set_secure_word(secure_word);
		set_type_user(type_user);
		set_group(group);
	};

	User() {};

	~User()
	{
		if (examination_arr!=nullptr) // Estli smisl?
		{
			delete[]examination_arr;
		}		
	};
};

int size_users_data = 0;
User* users_data = nullptr;

//string View_Groups(User*arr_db, int size_db)
//{
//	int size_temp = 0;
//	string* counter = new string[size_temp];
//
//	add_new_string(counter, size_temp, arr_db[0].get_group());
//
//	for (int i = 0; i < size_temp; i++)
//	{
//		for (int j = i; j < size_db; j++)
//		{
//			if (counter[i] != arr_db[i].get_group())
//			{
//				add_new_string(counter, size_temp, arr_db[i].get_group());
//			}
//		}		
//	}
//
//	return counter;
//	//int size_new_temp = 0;
//	//string* counter2 = new string[size_new_temp];
//	//int index = 0;
//
//	//while (size_new_temp != 5)
//	//{
//	//	if (check_same_int(counter2, size_new_temp, counter[index]))
//	//	{
//	//		/*counter2[j] = counter[index];*/
//	//		add_new_int(counter2, size_new_temp, counter[index]);
//	//		cout << "Counter[index]" << counter[index] << endl;
//	//		cout << "Index -> " << index << endl;
//	//	}
//	//}
//}

void View_User_Info_(User* arr_db, int size_arr_db, int index)
{
	cout << "ID - >>" << endl << endl;
	cout << "Тип пользователя ->>> " << arr_db[index].obj.get_type_name() << endl;
	cout << "Название группы ->>> " << arr_db[index].get_group() << endl;
	cout << "Имя ->>> " << arr_db[index].get_name() << endl;
	cout << "Фамилия ->>> " << arr_db[index].get_surname() << endl;
	cout << "Отчество ->>> " << arr_db[index].get_patronymic() << endl;
	cout << "Возраст ->>> " << arr_db[index].get_age() << endl;
	cout << "Имя пользователя ->>> " << arr_db[index].get_user_name() << endl;
	cout << "Пароль пользователя ->>> " << arr_db[index].get_user_password() << endl;
	cout << "Секретное слово ->>> " << arr_db[index].get_secure_word() << endl;
	cout << "Номер телефона ->>> " << arr_db[index].get_phone_number() << endl;
	cout << "Адрес ->>> " << arr_db[index].get_home_adress() << endl;
	cout << "Э-почта ->>> " << arr_db[index].get_email() << endl;
	cout << "==========Список привилегий=========" << endl;
	arr_db[index].obj.PrintPrivilegesStatus();
}

void add_new_user(User*& arr_db, int& size, string user_name, string user_password, string secure_word, string home_adress, string phone_number, string email, string name, string surname, string patronymic, string age, string type_user, string group)
{
	if (arr_db == nullptr)
	{
		arr_db = new User[size + 1];
		arr_db[size] = { user_name, user_password, secure_word, home_adress, phone_number, email, name, surname, patronymic, age, type_user, group };
		size++;
	}
	else
	{
		User* new_Arr = new User[size + 1];

		for (int i = 0; i < size; i++)
		{
			new_Arr[i] = arr_db[i];
		}

		new_Arr[size] = { user_name, user_password, secure_word, home_adress, phone_number, email, name, surname, patronymic, age, type_user, group };
		delete[]arr_db;
		arr_db = new_Arr;
		size++;
	}
}

int findUsers(User*& arr_db, int& size_arr_db, string login, string password)
{
	for (int i = 0; i < size_arr_db; i++)
	{
		/*arr_db[i].print_info();*/
		if (arr_db[i].get_user_name() == login /*string_data_encryption(login) */ && arr_db[i].get_user_password() == password /* string_data_encryption(password)*/)
		{
			return i;
		}
	}
	return WRONG_INPUT;
}

int findUser(User*& arr_db, int& size_arr_db, string login)
{
	for (int i = 0; i < size_arr_db; i++)
	{
		if (arr_db[i].get_user_name() == login /*string_data_encryption(login)*/)
		{
			return i;
		}
	}
	return WRONG_INPUT;
}

//int findUserType(User*& arr_db, int size_arr_db, string type_user)
//{
//	for (int i = 0; i < size_arr_db; i++)
//	{
//		if (arr_db[i].get_user_type() == string_data_encryption(type_user))
//		{
//			return i;
//		}
//	}
//	return WRONG_INPUT;
//}

ERRORS_ Check_for_duplicate_Username(User*& arr_db, int size_arr_db, string login)
{
	for (int i = 0; i < size_arr_db; i++)
	{
		if (arr_db[i].get_user_name() == login /*string_data_encryption(login)*/)
		{
			return REPEATED_USERNAME_ERROR;
		}
	}
	return CONFIRMED;
}

int findUserByCodeWord(User*& arr_db, int size_arr_db, string user_name, string code_word)
{
	for (int i = 0; i < size_arr_db; i++)
	{
		if (arr_db[i].get_user_name() == user_name /*string_data_encryption(user_name)*/ && arr_db[i].get_secure_word() == code_word/*string_data_encryption(code_word)*/)
		{
			return i;
		}
	}
	return WRONG_INPUT;
}

int delete_user()
{
	return 1;
}