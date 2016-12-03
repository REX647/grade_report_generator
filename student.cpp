// Edit log:
// student.cpp v1.0
// 12-03-2016
// 12:14

#include <iostream>
#include <string>
#include "assignment.hpp"
#include "student.hpp"

using namespace std;

student::student()
{
	first_name = "Lorem";
	last_name = "Ipsum";
	letter_grade = 'C';
	points_scored = 70;
	percentage = 70;
	pass = true;
}

void student::set_first_name(string first)
{
	first_name = first;
}

string student::get_first_name()
{
	return first_name;
}

void student::set_last_name(string last)
{
	last_name = last;
}

string student::get_last_name()
{
	return last_name;
}

void student::set_result(double points_earned, double points_total, double min_A, double min_B, double min_C, double min_pass)
{
	double total = (points_earned / points_total)*100.0;
	percentage = total;
	if (total >= min_A)
	{
		letter_grade = 'A';
		pass = true;
	}
	else if (total >= min_B)
	{
		letter_grade = 'B';
		pass = true;
	}
	else if (total >= min_C)
	{
		letter_grade = 'C';
		pass = true;
	}
	else if (total >= min_pass)
	{
		letter_grade = 'D';
		pass = true;
	}
	else
	{
		letter_grade = 'F';
		pass = false;
	}
}

double student::get_percentage_result()
{
	return percentage;
}

bool student::passed()
{
	return pass;
}
