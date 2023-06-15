#include<iostream>
#include"Header.h"
using namespace std;

Cat::Cat()
{
	cout << "I am in constructor:" << endl;
}
Cat::~Cat()
{
	cout << "I am in destructor:" << endl;
}
void Cat::setName(char *n)
{
	name = n;
}
void Cat::setWeight(double w)
{
	weight = w;
}
void Cat::getName()
{
	cout << "Name:" << name << endl;
}
void Cat::getWeight()
{
	cout << "Weight:" << weight << "  kg" << endl;
}
