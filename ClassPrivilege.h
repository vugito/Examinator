#pragma once
#include <iostream>
#include <string>

using namespace std;

class Privilege // ����������, ��� ��������
{
private:
	bool add_user = false;						//// ���������� - ���������� ������������
	bool change_user_account = false;			//// ���������� - ��������� ������ ������������
	bool delete_user = false;					//// ���������� - �������� ������������
	bool change_privileges = false;				//// ���������� - ��������� ���������� ������������
	bool adding_questions = false;				//// ���������� - ���������� ��������
	bool adding_test = false;					//// ���������� - �������� ������ 
	bool adding_examination = false;			//// ���������� - �������� ��������������� ������
	bool change_questions = false;				//// ���������� - ��������� ��������
	bool change_status_question = false;		//// ���������� - ��������� ������� �������� (�������� ��� ���������)
	bool change_status_test = false;			//// ���������� - ��������� ������� ������ (�������� ��� ���������)
	bool change_status_examination = false;		//// ���������� - ��������� ������� ��������������� ������ (�������� ��� ���������)
	bool access_to_examinations = false;		//// ���������� - ������ � ���������
	bool access_to_send_mail = true;			//// ���������� - ������ �� ����������� ��������� �� ���������� �����
public:
	bool get_pr_add_user() { return this->add_user; }
	bool get_pr_change_user_account() { return this->change_user_account; }
	bool get_pr_delete_user() { return this->delete_user; }
	bool get_pr_change_privileges() { return this->change_privileges; }
	bool get_pr_adding_questions() { return this->adding_questions; }
	bool get_pr_adding_test() { return this->adding_test; }
	bool get_pr_adding_examination() { return this->adding_examination; }
	bool get_pr_change_questions() { return this->change_questions; }
	bool get_pr_change_status_question() { return this->change_status_question; }
	bool get_pr_change_status_test() { return this->change_status_test; }
	bool get_pr_change_status_examination() { return this->change_status_examination; }
	bool get_pr_access_to_examinations() { return this->access_to_examinations; }
	bool get_pr_access_to_send_mail() { return this->access_to_send_mail; }

	// ������� ������ �������������� ���������� //// ���������������� ��� ��������... 
	void set_pr_add_user(bool obj) { this->add_user = obj;}
	void set_pr_change_user_account(bool obj) { this->change_user_account = obj;}
	void set_pr_delete_user(bool obj) { this->delete_user = obj;}
	void set_pr_change_privileges(bool obj) { this->change_privileges = obj;}
	void set_pr_adding_questions(bool obj) { this->adding_questions = obj;}
	void set_pr_adding_test(bool obj) { this->adding_test = obj;}
	void set_pr_adding_examination(bool obj) { this->adding_examination = obj;}
	void set_pr_change_questions(bool obj) { this->change_questions = obj;}
	void set_pr_change_status_question(bool obj) { this->change_status_question = obj;}
	void set_pr_change_status_test(bool obj) { this->change_status_test = obj;}
	void set_pr_change_status_examination(bool obj) { this->change_status_examination = obj;}
	void set_pr_change_access_to_examinations(bool obj) { this->access_to_examinations = obj; }
	void set_pr_change_access_to_send_mail(bool obj) { this->access_to_send_mail = obj; }

	void set_pr_for_Administrator()
	{
		this->add_user = true;
		this->change_user_account = true;
		this->delete_user = true;
		this->change_privileges = true;
		this->adding_questions = true;
		this->adding_test = true;
		this->adding_examination = true;
		this->change_questions = true;
		this->change_status_question = true;
		this->change_status_test = true;
		this->change_status_examination = true;
		this->access_to_examinations = true;
		this->access_to_send_mail = true;
	}

	void set_pr_for_Teachers()
	{
		this->adding_questions = true;
		this->adding_test = true;
		this->adding_examination = true;
		this->change_questions = true;
		this->change_status_question = true;
		this->change_status_test = true;
		this->change_status_examination = true;
		this->access_to_examinations = true;
		this->access_to_send_mail = true;
	}

	void set_pr_for_Students()
	{
		this->access_to_examinations = true;
		this->access_to_send_mail = true;
	}

	string get_pr_in_word(bool privilege)
	{
		if (privilege)
		{
			return "���������";
		}
		else
		{
			return "�� ���������";
		}
	}

	void PrintPrivilegesStatus()
	{
		cout << " ���������� ������������ -                                           " << get_pr_in_word(get_pr_add_user()) << endl;
		cout << " ��������� ������ ������������ -                                     " << get_pr_in_word(get_pr_change_user_account()) << endl;
		cout << " �������� ������������ -                                             " << get_pr_in_word(get_pr_delete_user()) << endl;
		cout << " ��������� ���������� ������������ -                                 " << get_pr_in_word(get_pr_change_privileges()) << endl;
		cout << " ���������� �������� -                                               " << get_pr_in_word(get_pr_adding_questions()) << endl;
		cout << " �������� ������ -                                                   " << get_pr_in_word(get_pr_adding_test()) << endl;
		cout << " �������� ��������������� ������ -                                   " << get_pr_in_word(get_pr_adding_examination()) << endl;
		cout << " ��������� �������� -                                                " << get_pr_in_word(get_pr_change_questions()) << endl;
		cout << " ��������� ������� �������� (�������� ��� ���������) -               " << get_pr_in_word(get_pr_change_status_question()) << endl;
		cout << " ��������� ������� ������ (�������� ��� ���������) -                 " << get_pr_in_word(get_pr_change_status_test()) << endl;
		cout << " ��������� ������� ��������������� ������ (�������� ��� ���������) - " << get_pr_in_word(get_pr_change_status_examination()) << endl;
		cout << " ������ � ��������� -                                                " << get_pr_in_word(get_pr_access_to_examinations()) << endl;
		cout << " ������ � �������� ��������� -                                       " << get_pr_in_word(get_pr_access_to_send_mail()) << endl;
	}
//private:
//	string name_privilege;
//	bool isactive_ = false;
//public:
//	string get_name_privilege() { return this->name_privilege; }
//	bool get_isactive_() { return this->isactive_; }
//
//	void set_name_privilege(string name_privileges) { this->name_privilege = name_privilege; }
//	void set_isactive_(bool isactive_) { this->isactive_ = isactive_; }
//
//	Privilege(string name_privilege)
//	{
//		set_name_privilege(name_privilege);
//	};
//
//	Privilege(){};
};
