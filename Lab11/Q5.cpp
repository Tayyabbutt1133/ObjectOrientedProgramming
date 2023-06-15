#include<iostream>
using namespace std;

class person
{
private:
	char* n;
	int age;
public:
	//Default constructor
	person() {};
	person(char* n, int age) :n(n), age(age) {}
	void per()
	{
		n = new char[10];
		cout << "Enter Person Name:" << endl;
		cin.getline(n, 10);
		cout << "Enter Age:" << endl;
		cin >> age;
	}
	void per_display()
	{
		cout << "Person Name is:" << n<< endl;
		cout << "Age is:" << age << endl;
	}
};
class Employee
{
private:
	char* emp_name;
	int wage;
public:
	//Default Constructor
	Employee() {};
	//Paramterzied constructor
	Employee(char* emp, int wage)
	{
		emp_name = emp;
		emp_name = new char[30];
		this->wage = wage;
	}
	void Emp()
	{
		emp_name = new char[30];
		cin.ignore();
		cout << "Enter Employee Name:" << endl;
		cin.getline(emp_name, 30);
		cout << "Enter Wage:" << endl;
		cin >> wage;
	}
	void emp_display()
	{
		cout << "Employee Name is:" << emp_name << endl;
		cout << "Wage is:" << wage << endl;
	}
};
class Teacher :private person, private Employee
{
public:
	int pay_scale;
	Teacher() {};
	void user()
	{
		per();
		Emp();
		cout << "Enter Teacher Pay Scale:" << endl;
		cin >> pay_scale;
	}
	void display()
	{
		per_display();
		emp_display();
		cout << "Teacher Pay Scale is:" << pay_scale;
	}
};


int main()
{
	Teacher t;
	t.user();
	t.display();
	return 0;

}



