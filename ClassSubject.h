#pragma once
#include <iostream>

using namespace std;

class Subject
{
private:
	string subject_name = "";
	string subject_category = "";
public:
	string get_subject_name() { return this->subject_name; }
	string get_subject_category() { return this->subject_category; }

	void set_subject_name(string subject_name) { this->subject_name = subject_name; }
	void set_subject_category(string subject_category) { this->subject_category = subject_category; }

	Subject(string subject_name, string subject_category)
	{
		set_subject_name(subject_name);
		set_subject_category(subject_category);
	};

	Subject() {};
};
