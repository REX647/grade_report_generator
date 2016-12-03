// Edit log:
// date.hpp v1.0
// 12-02-2016
// 22:12

#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>
#include <string>

using namespace std;

class date
{
	private:
		int month;
		int day;
		int year;
	public:
		void set_date(int m, int d, int y);
		void display_date();
};

#endif
