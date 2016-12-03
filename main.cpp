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
// main.cpp v1.1
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
	char hold;
	string teacher_first_name, teacher_last_name, class_name, school_name, filename;

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
	student data_array[student_count];
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
	
	for(int i = 0; i < student_count; i++)
	{
		string first, last;
		double scored;
		cout << "Student [" << (i + 1) << "]" << endl << endl;
		
		cout << "First name:" <<
		endl << "  e.g. 'Robert'" <<
		endl << "  e.g. 'Ariana'" << endl;
		getline(cin, first);
		data_array[i].set_first_name(first);
		
		cout << "Last name:" <<
		endl << "  e.g. 'Johnson'" <<
		endl << "  e.g. 'Hendricks'" << endl;
		getline(cin, last);
		data_array[i].set_last_name(last);
		
		cout << "Points scored:" <<
		endl << "  e.g. '96'" <<
		endl << "  e.g. '0'" << endl;
		while(true)
		{
			if(cin >> scored)
			{
				break;
			}
			else
			{
				cout << "Invalid entry, please try again." << endl;
			}
		}
		data_array[i].set_grades(scored, project.get_total_amount());
		cout << endl;
	}
	
	write_data.close();
	
	cout << "File successfully created under the name:" <<
	endl << filename <<
	endl << "(Press enter to exit)" << endl;

	return 0;
}
