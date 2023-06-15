#include<iostream>
#include "header.h"
using namespace std;

void date :: set(int day1, int month1, int year1)
{
	day = day1;
	month = month1;
	year = year1;
}

void date::get(){
	cout << "Day is:" << day<<endl;
	cout << "Month is:" << month<<endl;
	cout << "Year is:" << year<<endl;
}
