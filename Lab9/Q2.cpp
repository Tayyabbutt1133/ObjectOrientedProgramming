#include<iostream>
using namespace std;


class basicinfo
{
protected:
	char *name;
	int empid;
	char *gender;
	//default constructor
public:
	basicinfo(){};
	//parameterized constructor
	basicinfo(char *n, int em, char *gen)
	{
		name = n;
		name = new char[20];
		empid = em;
		gender = new char[20];
		gender = gen;
	}
	//deep copy
	basicinfo(basicinfo&sample)
	{
		name = new char[20];
		*name = *(sample.name);
		gender = new char[20];
		*gender = *(sample.gender);
	}
	//destructor
	~basicinfo()
	{
		delete[]name;
		delete[]gender;
	}

	void getBasicInfo()
	{
		name = new char[20];
		cout << "Enter Employee Name:" << endl;
		cin.getline(name, 20);
		cout << "Enter Employee ID:" << endl;
		cin >> empid;
		gender = new char[20];
		cout << "Enter Employee Gender:" << endl;
		cin.ignore();
		cin.getline(gender, 20);
	}
	void Display()
	{
		cout << "Employee Name is:" << name << endl;
		cout << "Employee ID is:" << empid << endl;
		cout << "Employee Gender is:" << gender;
	}
};
                                                //Second class

class DepartmentInfo
{
protected:
	char* department_name;
	char* assigned_work;
	int time2complete;
public:
	//default constructor
	DepartmentInfo(){};
	//parameterized constructor
	DepartmentInfo(char* d_n,char* a_w,int t)
	{
		department_name = d_n;
		department_name = new char[50];
		assigned_work = a_w;
		assigned_work = new char[50];
		time2complete = t;
	}
	//deep copy
	DepartmentInfo(DepartmentInfo&sample)
	{
		department_name = new char[50];
		*department_name = *(sample.department_name);
		assigned_work = new char[50];
		*assigned_work = *(sample.assigned_work);
	}
	//destructor
	~DepartmentInfo()
	{
		delete[]department_name;
		delete[]assigned_work;
	}
	void getDeptInfo()
	{
		department_name = new char[50];
		cout << "Enter Department Name:" << endl;
		cin.getline(department_name, 50);
		assigned_work = new char[50];
		cout << "Enter Assigned Work:" << endl;
		cin.getline(assigned_work, 50);
		cout << "Enter Times 2 Complete:" << endl;
		cin >> time2complete;
	}
	void display2()
	{
		cout << "Department Name:" << department_name << endl;
		cout << "Assigned Work is:" << assigned_work << endl;
		cout << "Times 2 Complete is:" << time2complete << endl;
	}
};
//inheritence
class employee :public basicinfo, public DepartmentInfo
{
public:
	void getemployee_info()
	{
		getBasicInfo();	
		getDeptInfo();
		Display();
		display2();
	}

};
int main()
{
	
	employee data;
	data.getemployee_info();
	system("pause");
	return 0;
}