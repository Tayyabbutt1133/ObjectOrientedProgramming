#include<iostream>
using namespace std;

class shape
{
public:
	//Pure virtual
	virtual void area(){

	}
};
class Triangle:public shape
{
private:
	float length;
	float width;
public:
	//Default constructor
	Triangle(){};
	//Parameterized constructor
	Triangle(float length, float width)
	{
		this->length = length;
		this->width = width;
	}
	void area()
	{
		cout << "Enter Length of triangle:" << endl;
		cin >> length;
		cout << "Enter Width of triangle:" << endl;
		cin >> width;
		cout << "Area is:" << (length*width) * 1 / 2;
	}
};
class Square:public shape
{
private:
	float length;
	float width;
public:
	//Default constructor
	Square(){};
	//Parameterized constructor
	Square(float length, float width)
	{
		this->length = length;
		this->width = width;
	}
	void area()
	{
		cout << "Enter Length of Square:" << endl;
		cin >> length;
		cout << "Enter Width of Square:" << endl;
		cin >> width;
		cout << "Area is:" << (length*length);
	}
};
class Rectangle:public shape
{
private:
	float length;
	float width;
public:
	//Default constructor
	Rectangle(){};
	//Parameterized constructor
	Rectangle(float length, float width)
	{
		this->length = length;
		this->width = width;
	}
	void area()
	{
		cout << "Enter Length of rectangle:" << endl;
		cin >> length;
		cout << "Enter Width of rectangle:" << endl;
		cin >> width;
		cout << "Area is:" << (length*width);
	}
};

class circle:public shape
{
private:
	float pi = 3.142;
	float radius;
public:
	//Default constructor
	circle(){};
	//Parameterized constructor
	circle(float pi,float radius)
	{
		this->pi = pi;
		this->radius = radius;
	}
	void area()
	{
		cout << "Enter Radius of Circle:" << endl;
		cin >> radius;
		cout << "Area of circle is:" << pi*(radius*radius);
	}
};
int main()
{
	//we are now basically accessing all functions of derived classes through base class
	shape *ptr;
	Triangle obj;
	ptr = &obj; //pointing or referenceing derived class to base class for access
	ptr->area();
	//Now second class 
	Square obj1;
	ptr = &obj1;
	cout << endl;
	ptr->area();
	//Third class
	Rectangle obj2;
	ptr = &obj2;
	cout << endl;
	ptr->area();
	//Fourth class
	circle obj3;
	ptr = &obj3;
	cout << endl;
	ptr->area();
	return 0;
}