#include<iostream>
#include"Header.h"
using namespace std;

int main()
{
	int size = 20;
	char *n1 = new char[size];
	char *n2 = new char[size];
	double gpa;
	int dat, mon, yea;

	cout << "Enter the Name:";
	cin.getline(n1, size);
	cout << "Enter the Register number: ";
	cin.getline(n2, size);
	cout << "Enter the CGPA: ";
	cin >> gpa;

	cout << "Enter Your date of birth: ";
	cin >> dat >> mon >> yea;
	dob obj1;
	obj1.set(yea, mon, dat);
	Student obj(n1, n2, gpa,obj1);
	obj.display();

	obj1.set(yea,mon,dat);
	obj1.display();


}