/*
 *     Welcome to my grade report generator for educators. This is open source code, so feel free to
 *   make edits, but please attribute the original work to myself (Ethan Och). To use this program,
 *   simply follow the onscreen terminal prompts. The resulting text file will be placed in the
 *   same directory that the program was run from. Contact me with any questions or suggestions
 *   at 'ochxx013@umn.edu'. Thanks for choosing to utilize my program!
 *
 *     ~Ethan
 */

// Edit log:
// main.cpp v1.0
// 12-02-2016
// 20:47

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
#include "student.hpp"
#include "date.hpp"
#include "assignment.hpp"

using namespace std;

int main()
{
	int student_count, points_possible;
	date report_generation_date;
	string teacher_first_name, teacher_last_name, class_name, school_name, file_ID;

	cout <<
	endl << "  +------------------------+" <<
	endl << "  | GRADE REPORT GENERATOR |" <<
	endl << "  +------------------------+" <<
	endl << endl;

	cout << "Note: If you don't know what to" <<
	endl << "      enter, type 'N/A' or 'UNKNOWN'," <<
	endl << "      unless otherwise specified." <<
	endl << endl;

	cout << "Enter name of educational institution:" <<
	endl << "  e.g. 'University of Intuition'" <<
	endl << "  e.g. 'Smallville High School'" << endl;
	getline(cin, school_name);
	cout << endl;

	cout << "Enter course/class name:" <<
	endl << "  e.g. 'MATH 1234'" <<
	endl << "  e.g. '8th Grade'" <<
	endl << "  e.g. 'Intro to Physical Science'" << endl;
	getline(cin, class_name);
	cout << endl;

	cout << "Enter instructor's first name:" <<
	endl << "  e.g. 'James'" <<
	endl << "  e.g. 'Veronica'" << endl;
	getline(cin, teacher_first_name);
	cout << endl;
	
	cout << "Enter instructor's last name:" <<
	endl << "  e.g. 'Houston'" <<
	endl << "  e.g. 'Anderson'" << endl;
	getline(cin, teacher_last_name);
	cout << endl;
	
	cout << "Enter number of students to be" <<
	endl << "included in the report:" <<
	endl << "  e.g. '5'" <<
	endl << "  e.g. '327'" << endl;
	while(true)
	{
		if(cin >> student_count)
		{
			if(student_count > 0)
			{
				break;
			}
			else
			{
				cout << "Invalid entry, please try again." << endl;
			}
		}
		else
		{
			cout << "Invalid entry, please try again." << endl;
		}
	}
	cout << endl;
	
	ofstream write_data;
	write_data.open(filename.c_str());
	
	if(write_data.fail())
	{
		cout << "An error occurred while writing to the text file." <<
		endl << "The program has been terminated to prevent further errors." <<
		endl << "(Press enter to exit)" << endl;
		cin.get();
		exit(1);
	}
	
	write_data.close();
	
	cout << "File successfully created under the name:" <<
	endl << filename <<
	endl << "(Press enter to exit)" << endl;

	return 0;
}
