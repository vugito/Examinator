#pragma once
#include <ctime>
#include "ClassSubject.h"
#include "Enumerators.h"


class Question : public Subject
{
private:
	string question = "";
	string answer_A = "";
	string answer_B = "";
	string answer_C = "";
	string answer_D = "";
	QuestionAnswers true_answer = NONE_ANSWER; // Если NONE_ANSWER - значит учитель забыл заполнить графу ВЕРНЫЙ ОТВЕТ.
	StatusActivation is_active = IS_ACTIVE;
public:
	string get_question() { return this->question; }
	string get_answer_A() { return this->answer_A; }
	string get_answer_B() { return this->answer_B; }
	string get_answer_C() { return this->answer_C; }
	string get_answer_D() { return this->answer_D; }
	QuestionAnswers get_true_answer() { return this->true_answer; }
	StatusActivation get_is_active() { return this->is_active; }

	void set_question(string question) { this->question = question; }
	void set_answer_A(string answer_A) { this->answer_A = answer_A; }
	void set_answer_B(string answer_B) { this->answer_B = answer_B; }
	void set_answer_C(string answer_C) { this->answer_C = answer_C; }
	void set_answer_D(string answer_D) { this->answer_D = answer_D; }
	void set_true_answer(string true_answer)
	{
		if (int(char(true_answer[0])) == A)
		{
			this->true_answer = A;
		}
		else if (int(char(true_answer[0])) == B)
		{
			this->true_answer = B;
		}
		else if (int(char(true_answer[0])) == C)
		{
			this->true_answer = C;
		}
		else if (int(char(true_answer[0])) == D)
		{
			this->true_answer = D;
		}
		else
		{
			this->true_answer = NONE_ANSWER;
		}
	}
	void set_is_active(StatusActivation is_active) { this->is_active = is_active; }

	void printing() // Proverka proydena
	{
		cout << "Subject name ->>> " << get_subject_name() << endl;
		cout << "Category name ->>> " << get_subject_category() << endl;
		cout << "Question ->>> " << endl << get_question() << endl;
		cout << "A) " << get_answer_A() << endl;
		cout << "B) " << get_answer_B() << endl;
		cout << "C) " << get_answer_C() << endl;
		cout << "D) " << get_answer_D() << endl;
		cout << "True answer ->>> " << char(get_true_answer()) << endl;
		cout << "Status question ->>> " << get_is_active() << endl;
	}

	void view_question()
	{
		cout << "Subject name ->>> " << this->get_subject_name() << endl;
		cout << "Category name ->>> " << this->get_subject_category() << endl;
		cout << "Question ->>> " << endl << this->question << endl;
		cout << "A) " << this->answer_A << endl;
		cout << "B) " << this->answer_B << endl;
		cout << "C) " << this->answer_C << endl;
		cout << "D) " << this->answer_D << endl;		
	}

	Question(string subject_name, string subject_category, string question, string answer_A, string answer_B, string answer_C, string answer_D, string true_answer):Subject(subject_name,subject_category)
	{
		set_question(question);
		set_answer_A(answer_A);
		set_answer_B(answer_B);
		set_answer_C(answer_C);
		set_answer_D(answer_D);
		set_true_answer(true_answer);
	};

	Question() {};
};

int size_questions_data = 0;
Question* question_data = nullptr;

int add_new_question(Question*& arr_db, int& size, string subject_name, string category_name, string question, string answer_A, string answer_B, string answer_C, string answer_D, string true_answer)
{
	if (arr_db != nullptr)
	{
		Question* new_Arr = new Question[size + 1];

		for (int i = 0; i < size; i++)
		{
			new_Arr[i] = arr_db[i];
		}

		new_Arr[size] = { subject_name, category_name, question,answer_A, answer_B,answer_C,answer_D,true_answer };
		delete[]arr_db;
		arr_db = new_Arr;
	}
	else
	{
		arr_db = new Question[size + 1];
		arr_db[size] = { subject_name, category_name, question,answer_A, answer_B,answer_C,answer_D,true_answer };
	}
	size++;

	return 1;
}

//int find_question(Question*& arr_db, int& size, )

int activate_deactivate_question(Question*& arr_db, int& size)
{
	return 1;
}

