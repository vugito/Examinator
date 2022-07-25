#pragma once
#include <iostream>
#include <string>
#include "Enumerators.h"

using namespace std;

int Check_string_by_rule(string object)
{
	int Upper_counter = 0;
	int Lower_counter = 0;
	int Symbol_counter = 0;
	int Integer_counter = 0;

	for (int i = 0; i < object.size(); i++) // Zaqlavniye 65-90, malenkiye 97-122 // Simvoli 33-47, 58-64, 91-96, 123-126 // cisla 48-57
	{
		if (int(object[i]) < 33 && int(object[i]) > 126) // Mojno v nijnem IF sozdat else i postavit dannoye usloviye, NO eto potera vremeni, etot variant Srazuje viyavit owibku...
		{
			return 0; // ispolzovan neverniy simvol; // Kak rzspecatat neverniy simvol ctobi polzovatel znal kakoy neverniy?
		}

		if (int(object[i]) >= 33 && int(object[i]) <= 47) // mojno li napisat odinakoviye cerez || - (ili)??
		{
			Symbol_counter++;
		}
		else if (int(object[i]) >= 48 && int(object[i]) <= 57)
		{
			Integer_counter++;
		}
		else if (int(object[i]) >= 58 && int(object[i]) <= 64)
		{
			Symbol_counter++;
		}
		else if (int(object[i]) >= 65 && int(object[i]) <= 90)
		{
			Upper_counter++;
		}
		else if (int(object[i]) >= 91 && int(object[i]) <= 96)
		{
			Symbol_counter++;
		}
		else if (int(object[i]) >= 97 && int(object[i]) <= 122)
		{
			Lower_counter++;
		}
		else if (int(object[i]) >= 123 && int(object[i]) <= 126)
		{
			Symbol_counter++;
		}

	}

	if (Upper_counter >= 1 && Lower_counter >= 1 && Symbol_counter >= 1 && Integer_counter >= 1)
	{
		return 1; // V parole doljno bit minimum 1 Zaqlavnaya bukva, 1 simvol, 1 cislo;
	}
	else
	{
		return 0;
	}
}



ERRORS_ Check_User_name(string object) // Sozdayom 1 proverku na symvoli i delim na login i pass***** 07.07.2022 Aktualno
{
	if (object.size() < 8 || object.size() > 16)
	{
		return WRONG_SIZE_ERROR; // Neverniy razmer
	}
	else
	{
		/*return Check_string_by_rule(object);*/ // Mojno li tak?
		if (Check_string_by_rule(object))
		{
			return CONFIRMED;
		}
		else
		{
			return WRONG_TYPE_ERROR; // Neverniy simvol
		}
	}
}

ERRORS_ Check_User_Password(string username, string password)
{
	if (username == password)
	{
		return SAME_USERNAME_USERPASS_ERROR;
	}
	else
	{
		if (password.size() < 8 || password.size() > 25)
		{
			return WRONG_SIZE_ERROR; // Razmer doljen ravnatsya minimum 8 simvolam i maksimum 24 simvola
		}
		else
		{
			if (Check_string_by_rule(password))
			{
				return CONFIRMED;
			}
			else
			{
				return WRONG_TYPE_ERROR; // Neverniy simvol
			}
		}
	}
}