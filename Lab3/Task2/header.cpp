#include<iostream>
#include"Header.h"
using namespace std;

Student::Student(char* n, char* r, double g, dob dat)
{
	name = n;
	regNo = r;
	CGPA = g;
	dateof = dat;
}
Student::~Student()
{
	cout << "I am in destructor";
}
void Student::display()
{
	cout << "Name: " << name << endl;
	cout << "Reg Number: " << regNo << endl;
	cout << "CGPA: " << CGPA << endl;
}

void dob::set(int y, int m, int d)
{
	year = y;
	month = m;
	date = d;
}

void dob::display()
{
	cout << "Date: " << date << "-" << month << "-" << year << endl;
}