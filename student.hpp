// Edit log:
// student.hpp v1.0
// 12-02-2016
// 21:41

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>
#include "assignment.hpp"

using namespace std;

class student
{
	private:
		string first_name;
		string last_name;
		string letter_grade;
		int points_scored;
		double percentage;
		bool pass;
	public:
		void set_first_name(string first);
		string get_first_name();
		void set_last_name(string last);
		string get_last_name();
		void set_result(double points_earned, double points_total);
		double get_percentage_result();
		bool passed();
};

#endif
