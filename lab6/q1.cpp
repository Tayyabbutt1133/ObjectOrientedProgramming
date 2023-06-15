#include<iostream>

using namespace std;

class car{

private:
	char*name = new char;
	char*model = new char;
	int noofdoors;
public:
	car(){};
	car(char*a, char*a1, int a2)
	{
		name = a;
		model = a1;
		noofdoors = a2;
	}
	~car(){

		delete[]name;
		delete[]model;

	}
	car(const car& n1)
	{
		name = n1.name;
		model = n1.model;
		noofdoors = n1.noofdoors;

	}
	void input(char*a, char*m, int d)
	{
		name = a;
		model = m;
		noofdoors = d;

	}
	void display(){

		cout << "The name of a car is:" << name << endl;

		cout << "The model of the car is:" << model << endl;

		cout << "The number of doors of car:" << noofdoors << endl;


	}


};
int main()
{
	char*name = new char[20];
	cout << "Enter the name of car:" << endl;
	cin.getline(name, 20);
	cout << endl;

	char*model = new char[20];
	cout << "Enter the model of car:" << endl;
	cin.getline(model, 20);
	int door;
	cout << endl;
	cout << "Enter the number of doors of car:" << endl;
	cin >> door;
	car obj;
	obj.input(name, model, door);

	cout << "The Details are :" << endl;

	obj.display();


	return 0;


}