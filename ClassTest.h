#pragma once
#include "ClassQuestion.h"

class Test
{
private:
	//int ID_test = 0;
	int size = 0;
	StatusActivation test_activity = IS_ACTIVE;
public:
	Question** P_test = nullptr; // Содержит в себе 

	int get_size() { return this->size; }
	StatusActivation get_test_activity() { return this->test_activity; }

	void set_test_activity(StatusActivation test_activity) { this->test_activity = test_activity; }

	//void add_new_TEST(Question*arr_db, int size_question, string subject_name, string category_name, int* counter_temp) // a mojno ves etot kod zakinut pramo v Konstruktor???
	//{
	//	/*Randomizer(question_data, size_questions_data, subject_name, category_name);*/
	//	
	//	for (int i = 0; i < 5; i++)
	//	{
	//		Question** new_arr = new Question * [size + 1];

	//		for (int j = 0; j < size; j++)
	//		{
	//			new_arr[j] = P_test[j];
	//		}

	//		new_arr[size] = &arr_db[counter_temp[i]];
	//		delete[]this->P_test;
	//		this->P_test = new_arr;
	//		this->size++;
	//	}
	//}

	void print(int index)
	{
		P_test[index]->printing();
	}

	void print()
	{
		for (int i = 0; i < size; i++)
		{
			P_test[i]->printing();
		}
	}

	Test(Question* arr_db, int size_question, string subject_name, string category_name, int* counter_temp)
	{
		/*add_new_TEST(arr_db,size_question,subject_name, category_name, counter_temp);*/
		if (P_test == nullptr)
		{
			for (int i = 0; i < 5; i++) // vmesto 5 mojno sdelat size, wtobi samomu zadat cislo voprosov v teste
			{
				Question** new_arr = new Question * [size + 1];

				for (int j = 0; j < size; j++)
				{
					new_arr[j] = P_test[j];
				}

				new_arr[size] = &arr_db[counter_temp[i]];
				delete[]this->P_test;
				this->P_test = new_arr;
				this->size++;
			}
		}

	};

	Test() {};

	//~Test()
	//{
	//	//for (int i = 0; i < size; i++)
	//	//{
	//	//	delete[]P_test[i];
	//	//}
	//	delete[]P_test;
	//}

};

int size_test_data = 0;
Test* test_data = nullptr;

int create_test(Test*& arr_db, int& size, string subject_name, string category_name, int* counter_temp)
{
	if (arr_db == nullptr)
	{
		arr_db = new Test[size + 1];
		arr_db[size] = { question_data, size_questions_data, subject_name, category_name, counter_temp };
	}
	else
	{
		Test* new_arr = new Test[size + 1];

		for (int i = 0; i < size; i++)
		{
			new_arr[i] = arr_db[i];
		}

		delete[]arr_db;
		arr_db = new_arr;
	}
	size++;
	return 1;
}

int* Randomizer(Question*& arr_db, int size, string subject_name, string category_name)
{
	srand(time(NULL));

	int size_temp = 0;
	int* counter = new int[size_temp];

	for (int i = 0; i < size; i++)
	{
		if (arr_db[i].get_subject_name() == subject_name)
		{
			if (arr_db[i].get_subject_category() == category_name)
			{
				if (arr_db[i].get_is_active() == IS_ACTIVE)
				{
					add_new_int(counter, size_temp, i);
					/*cout << i << endl;*/
				}
			}

		}

	}

	if (size_temp <= 4)
	{
		return 0;
	}

	//for (int i = 0; i < size_temp; i++)
	//{
	//	cout << counter[i] << " ";
	//}
	//cout << endl;

	int size_new_temp = 0;
	int* counter2 = new int[size_new_temp];
	int index = 0;

	while (size_new_temp != 5)
	{
		/*index = rand() % (size_temp - 0) + 0;*/
		index = rand() % (size_temp);
		cout << "Index do proverki " << index << endl;
		if (check_same_int(counter2, size_new_temp, counter[index]))
		{
			/*counter2[j] = counter[index];*/
			add_new_int(counter2, size_new_temp, counter[index]);
			cout << "Counter[index]" << counter[index] << endl;
			cout << "Index -> " << index << endl;
		}
	}

	for (int i = 0; i < size_new_temp; i++)
	{
		cout << "Counter2[" << i << "] ->>> " << counter2[i] << endl;
	}

	return counter2;
}