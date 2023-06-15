#include<iostream>
#include"header.h"
using namespace std;


void employee::set(int a, int b, int c)
{
	 Empcode=a;
	 agejoin=b;
	currentage=c;
}
int employee::calculatetenure()
{
	return agejoin - currentage;
}
void employee::display()
{
	cout << "Code of the employee is:" << Empcode << endl;
	cout << "Aje of joining of employee is:" << agejoin << endl;
	cout << "Current Age of Employee is:" << currentage;
}


