#pragma once
#include "ClassPrivilege.h" // Вызван лист с классом Привилегии

class UserType : public Privilege // Доработано, ждёт проверки
{
private:
	string type_name;

public:
	string get_type_name() { return this->type_name; }

	void set_type_name(string type_name) { this->type_name = type_name; }

	UserType(string type_name) 
	{
		set_type_name(type_name);
		if (type_name == "Student")
		{			
			set_pr_for_Students();
		}
		else if (type_name == "Teacher")
		{
			set_pr_for_Teachers();
		}
		else if (type_name == "Administrator")
		{
			set_pr_for_Administrator();
		}
	};

	UserType() {};
};


// Будет введено в следующем обновлении.
//int size_type_user_db = 1;
//UserType* user_type_db = new UserType[size_type_user_db];
//
//void add_new_type_user(UserType*arr_db, int &size, string type_name)
//{
//	if (arr_db != nullptr)
//	{
//		UserType* new_arr = new UserType[size + 1];
//
//		for (int i = 0; i < size; i++)
//		{
//			new_arr[i] = arr_db[i];
//		}
//
//		new_arr[size] = { type_name};
//
//		delete[]arr_db;
//		arr_db = new_arr;
//	}
//	else
//	{
//		arr_db = new UserType[size + 1];
//		arr_db[size] = { type_name};
//	}
//	size++;
//}








