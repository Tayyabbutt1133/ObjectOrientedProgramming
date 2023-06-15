#include<iostream>
using namespace std;

class employee {
private:
	int emp_id = 0;
	string Name;
	int dateofjoin = 0;
	int currentday = 0;
public:
	//Accessing private members through parameterized constructor 
	employee(int e,string n,int d,int c)
	{
		emp_id = e;
		Name = n;
		dateofjoin = d;
		currentday = c;
	}
	void askuser();
	int daystenure();
	void gettenure()
	{

	}
};
void employee::askuser()
{
	cout << "Enter Your Employee Code:" << endl;
	cin >> emp_id;
	cout << "Enter Your Name:" << endl;
	cin >> Name;
	cout << "Enter Your Date of joining:" << endl;
	cin >> dateofjoin;
	cout << "Enter Current dateL:" << endl;
	cin >> currentday;
}
int employee::daystenure()
{
	return dateofjoin - currentday;
}
int main()
{
	int a=0,c=0,d=0;
	string b;
	employee mydata(a, b, c, d);
	mydata.askuser();

}






