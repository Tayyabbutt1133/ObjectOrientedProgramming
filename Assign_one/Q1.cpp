#include<iostream>
using namespace std;


class shape {
private:
    float height;
    float width;
public:
    //Parameterized Constructor
    shape(float h, float w)
    {
        height = h;
        width = w;
    }
    //Function Calling
    void askuser();
    void  shapeperimeter();
    void display()
    {
        shapeperimeter();
    }
};
//Derived Classes of shape
class rectangle :public shape
{
public:
    //Default Constructor of rectangle
    rectangle(float height, float width) :shape(height, width)
    {

    }
};
class triangle :public shape
{
public:
    triangle(float height, float width) :shape(height, width)
    {

    }
};
void shape::askuser()
{
    cout << "Enter Height of Shapes Perimeters:" << endl;
    cin >> height;
    cout << "Enter Width of Shapes Perimeters:" << endl;
    cin >> width;
}
void shape::shapeperimeter()
{
    float triangle;
    float rectangle;
    rectangle = 2 * (height + width);
    triangle = 2 * height + width;
    cout << "Perimter of Rectangle is:" << rectangle << endl;
    cout << "Perimeter of Triangle is:" << triangle << endl;
}
int main()
{
    float h = 0;
    float w = 0;
    rectangle mydata(h, w);
    mydata.askuser();
    mydata.display();
	return 0;
}


