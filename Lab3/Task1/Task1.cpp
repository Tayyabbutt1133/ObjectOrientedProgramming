#include<iostream>
#include"Header.h"
using namespace std;

int main()
{
	int size=20;
	char* n1 = new char[size];
	double w1;

	cout << "Enter the name :";
	cin.getline(n1, 20);

	cout << "Enter the weight of Cat:";
	cin >> w1;
	Cat obj;

	obj.setName(n1);
	obj.setWeight(w1);

	obj.getName();
	obj.getWeight();
}