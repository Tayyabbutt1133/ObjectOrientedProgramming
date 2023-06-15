#include<iostream>
using namespace std;

class shape
{
public:
	//virtual function
	virtual void area(){}
	virtual ~shape()
	{}
};
class Triangle :public shape
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
		cout << "Area is:" << (length*width) * 1 / 2<<endl;
	}
	~Triangle(){ cout << "Triangle" << endl; }

};
class Square :public shape
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
		cout << "Area is:" << (length*length)<<endl;
	}
	~Square(){ cout << "Square" << endl; }
};
class Rectangle :public shape
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
		cout << "Area is:" << (length*width)<<endl;
	}
	~Rectangle(){ cout << "Rectangle" << endl; }
};

int main()
{
	//we are now basically accessing all functions of derived classes through base class
	shape *ptr[3];
	ptr[0] = new Triangle(); //pointing or referenceing derived class to base class for access
	ptr[0]->area();
	ptr[1] = new Square();
	ptr[1]->area();
	ptr[2] = new Rectangle();
	ptr[2]->area();
	for (int i = 0; i < 3; i++)
	{
		delete ptr[i];
	}
	return 0;
}