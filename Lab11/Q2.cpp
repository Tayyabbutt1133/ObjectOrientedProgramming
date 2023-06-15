#include<iostream>
using namespace std;

//Class 1:
class Triangle
{
private:
	float*length;
	float*width;
public:
	Triangle(){};
	//Base intitializer list
	Triangle(float*length, float*width) :length(length), width(width){
	}
	void Traingle_area()
	{
		length = new float;
		width = new float;
		cout << "Enter Width of Traingle:" << endl;
		cin >> *(width);
		cout << "Enter Length of Triangle:" << endl;
		cin >> *(length);
		cout << "Area of Triangle is:" << ((*(length))*(*(width)))*1 / 2 ;
	}

};
class Square
{
private:
	float*length;
public:
	Square(){};
	//Initializer list
	Square(float*length) :length(length){}
	void Square_area()
	{
		length = new float;
		cout << "Enter Length Of Square:" << endl;
		cin >> *(length);
		cout << "Area of Square is:" << (*(length))*(*(length));
	}
};
class Rectangle
{
private:
	float*length;
	float*width;
public:
	Rectangle(){};
	Rectangle(float*length, float*width) :length(length), width(width){}
	void rectangle_area()
	{
		length = new float;
		width = new float;
		cout << "Enter Lenght of Rectangle:" << endl;
		cin >> *(length);
		cout << "Enter Width of Rectangle:" << endl;
		cin >> *(width);
		cout << "Area of Rectangle is:" << (*(length))*(*(width));
	}
};
class circle
{
private:
	float*r;
public:
	circle(){};
	circle(float*r) : r(r){}
	void circle_area()
	{
		r = new float;
		float pi = 3.14;
		cout << "Enter Radius of Circle:" << endl;
		cin >> *(r);
		cout << "Area of Circle is:" << pi*((*(r))*(*(r)));
	}
};
//inherit class 
class shape :public Triangle, public Square, public Rectangle, public circle
{
public:
	shape(){};
	shape(float*length, float*width, float*r) :Triangle(length, width), Square(length), Rectangle(length, width), circle(r){}
	void all_area()
	{
		Traingle_area();
		cout << endl;
		Square_area();
		cout << endl;
		rectangle_area();
		cout << endl;
		circle_area();
	}
};
int main()
{
	shape data;
	data.all_area();
}
