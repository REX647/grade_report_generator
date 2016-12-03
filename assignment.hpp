// Edit log:
// assignment.hpp v1.0
// 12-03-2016
// 10:54

#ifndef ASSIGNMENT_HPP
#define ASSIGNMENT_HPP

#include <iostream>
#include <string>
#include "date.hpp"

using namespace std;

class assignment
{
	private:
		double total_points;
		double minimum_percent_to_pass;
		date assignment_date;
	public:
		double get_total_points();
		void set_total_points(double points);
		void set_date_assignment(set_date(int m, int d, int y));
		double get_minimum();
		void set_minimum(double min);
};

#endif
