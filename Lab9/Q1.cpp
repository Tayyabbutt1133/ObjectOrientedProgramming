#include<iostream>
using namespace std;


class shape
{
protected:
	float width;
	float height;
	float recta_area;
	float square_area;
public:
	//default constructor
	shape(){};
	//parameterized constructor
	shape(float w, float h,float r_a,float s_a)
	{
		width = w;
		height = h;
		recta_area = r_a;
		square_area = s_a;

	}
	//setting height
	void setheight(float h)
	{
		height = h;
	}
	//setting width
	void setwidth(float w)
	{
		width = w;
	}
};
//inherit  rectangle class
class rectangle :public shape
{
	public:
	void get_area()
	{
		recta_area = height*width;
		cout << "Rectangle area is:" << recta_area<<endl;
	}
};
//inherit square class
class square :public shape
{
public:
	void get_are()
	{
		square_area = width*width;
		cout << "Square Area is:"<<square_area<<endl;
	}
};


int main()
{
	rectangle data1;
	data1.setheight(5.2);
	data1.setwidth(6.2);
	data1.get_area();
	//for square
	square data2;
	data2.setwidth(1.2);
	data2.get_are();

	system("pause");
}


