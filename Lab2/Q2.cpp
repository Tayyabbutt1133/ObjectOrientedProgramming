#include<iostream>
using namespace std;


class employee {
private:
	int employeeid;
	int ageatjoin;
	int currentage;
public:
	//Parameterized Constructor
	employee(int ecode,int join,int current)
	{
		employeeid = ecode;
		ageatjoin = join;
		currentage = current;
	}
	void askuser();
	int calculatetenure();
	void printtenure()
	{
		cout << "Employee Id is:" << employeeid << endl;
		cout << "Employee Age of Joining is:" << ageatjoin << endl;
		cout << "Employee Current age is:" << currentage<<endl;
		cout<<"Tenure of employee is:"<<calculatetenure();
	}
};
void employee::askuser()
{
	cout <<endl;
	cout << "Enter Employee Code:" << endl;
	cin >> employeeid;
	//Condition: Age at join can never be negative
	do
	{
		cout << "Enter Age Of Joining:" << endl;
		cin >> ageatjoin;
		if (!(ageatjoin>0))
		{
			cout << "Age Of Joining Cannot Be Negative!" << endl;
		}
	} while (!(ageatjoin>0));
	cout << "Enter Current Age:" << endl;
	cin >> currentage;
}
int employee::calculatetenure()
{
	return currentage - ageatjoin;
}
int main()
{
	int a = 0,b=0,c=0;
	//Employees List
	employee mydata1(a,b,c);
	employee mydata2(a, b, c);
	employee mydata3(a, b, c);
	employee mydata4(a, b, c);
	employee mydata5(a, b, c);
	//Employee 1:
	mydata1.askuser();
	if (mydata1.calculatetenure()>=2)
	{
		mydata1.printtenure();
	}
	cout << endl;
	//Employee 2:
	mydata2.askuser();
	if (mydata2.calculatetenure() >= 2)
	{
		mydata2.printtenure();
	}
	cout << endl;
	//Employee 3:
	mydata3.askuser();
	if (mydata3.calculatetenure() >=2)
	{
		mydata3.printtenure();
	}
	cout << endl;
	//Employee 4:
	mydata4.askuser();
	if (mydata4.calculatetenure() >=2)
	{
		mydata4.printtenure();
	}
	cout << endl;
	//Employee 5:
	mydata5.askuser();
	if (mydata5.calculatetenure() >=2)
	{
		mydata5.printtenure();
	}
	cout << endl;
}