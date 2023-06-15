#include<iostream>
#include<string>
using namespace std;


class student {
public:
	string name;
	string regis_No;
	double cgpa;
	void set();
	void get();
};
class dob {
public:
	int date;
	int month;
	int year;
	void set1();
	void get1();
};
void student::set()
{
	cout << "Enter Your Name:" << endl;
	cin >> name;
	cout << "Enter Your registeration Number:" <<endl;
	cin >> regis_No;
	cout << "Enter Your CGPA:" << endl;
	cin >> cgpa;
}
void student::get()
{
	cout << "Name:" << name<<endl;
	cout << "Registeration Number:" << regis_No<<endl;
	cout << "CGPA:" << cgpa;
}
void dob::set1()
{
	cout << "Enter Your DOB:" << endl;
	cin >> date >> month >> year;
}
void dob::get1()
{
	cout << "DOB" << date <<month<<year;
}
int main()
{
	student mydata;
	dob mydata1;
	mydata.set();
	mydata.get();
	cout << endl;
	mydata1.set1();
	mydata1.get1();
}





