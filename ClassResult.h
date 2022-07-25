#pragma once
#include <iostream>
#include <string>

using namespace std;

class Result
{
private:
	int true_answers = 0;
	int false_answers = 0;
public:
	int get_true_answers() { return this->true_answers; }
	int get_false_answers() { return this->false_answers; }

	void set_true_anwers(int true_answers) { this->true_answers += true_answers; }
	void set_false_anwers(int false_answers) { this->false_answers += false_answers; }
};
