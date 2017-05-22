// date.cpp
//
// Exam tasks for the BSc students of Programming languages 2 of 
// University of Debrecen.
//
// Copyright (C) 2017, Besenczi Renátó, besenczi.renato@inf.unideb.hu
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// Compile in terminal: g++ date.cpp -o date -Wall
// Run in terminal: ./date

/* EXAM
 * c++ task
 * Observe the Date class and do the following tasks.
 * 1. Create a function inside the Date class that returns a formatted 
 *    string like this: 3-7-1986
 * 2. Write the copy constructor for this class
 * 3. Write the copy assignment for this class
 * 4. Override the global == operator
*/

#include <iostream>

using namespace std;

class Date {

public:
	Date(int year = 1986, int month = 3, int day = 7): y (year), m (month), d (day)
	{
	}

	int get_month(){
		return m;
	}

	int get_year(){
		return y;
	}

	int get_day(){
		return d;
	}

	void set_year(int a){
		y = a;
	}

	void set_month(int a){
		m = a;
	}

	void set_day(int a){
		d = a;
	}

private:
	int y,m,d;
	Date (const Date&);
};

int main(){

	Date m_date(1986,3,7);

	std::cout << "The date is: " << m_date.get_month() << "-" << m_date.get_day() << "-" << m_date.get_year() << std::endl;

	return 0;
}
