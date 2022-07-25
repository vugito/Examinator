#pragma once
#include "ClassPerson.h"

class PersonalData : public Person
{
private:
	string home_adress;
	string phone_number;
	string email;
public:
	string get_home_adress() { return this->home_adress; }
	string get_phone_number() { return this->phone_number; }
	string get_email() { return this->email; }

	void set_home_adress(string home_adress) { this->home_adress = home_adress; }
	void set_phone_number(string phone_number) { this->phone_number = phone_number; }
	void set_email(string email) { this->email = email; }

	PersonalData(string name, string surname, string patronymic, string age, string home_adress, string phone_number, string email) :Person(name, surname, patronymic, age)
	{
		set_home_adress(home_adress);
		set_phone_number(phone_number);
		set_email(email);
	};

	PersonalData() {};
};

