#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person // Готов
{
private:
	string name;
	string surname;
	string patronymic;
	string age;
public:
	string get_name() { return this->name; }
	string get_surname() { return this->surname; }
	string get_patronymic() { return this->patronymic;}
	string get_age() { return this->age; }

	void set_name(string name) { this->name = name; }
	void set_surname(string surname) { this->surname = surname; }
	void set_patronymic(string patronymic) { this->patronymic = patronymic; }
	void set_age(string age) { this->age = age; }

	Person(string name, string surname, string patronymic, string age)
	{
		set_name(name);
		set_surname(surname);
		set_patronymic(patronymic);
		set_age(age);
	}

	Person() {};

};
