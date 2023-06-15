#include<iostream>
using namespace std;


class complex
{
	int real;
	int imaginary;
public:
	//1)DEFAULT CONSTRUCTOR
	complex(){};
	// 2)Setter
	void setter(int r,int i)
	{
		real = r;
		imaginary = i;
	}
	// 4) getter
	void getter()
	{
		cout << real << "+" << imaginary << "i";
	}
	//operator overloading 
	complex operator +(complex f)
	{
		 complex temp;
		temp.real = real + f.real;
		temp.imaginary = imaginary + f.imaginary;
		return temp;
	}
	complex operator -(complex f)
	{
		complex temp;
		temp.real = real - f.real;
		temp.imaginary = imaginary - f.imaginary;
		return temp;
	}
	complex operator *(complex f)
	{
		complex temp;
		temp.real = real * f.real;
		temp.imaginary = imaginary * f.imaginary;
		return temp;
	}
	complex operator /(complex f)
	{
		complex temp;
		temp.real = real / f.real;
		temp.imaginary = imaginary / f.imaginary;
		return temp;
	}


};

int main()
{
	complex c1;
	cout << "c1:";
	c1.setter(5, 7);
	c1.getter();
	cout << endl;
	complex c2;
	cout << "c2:";
	c2.setter(5,0);
	c2.getter();
	complex c3;
	cout << endl;
	cout << "Sum of c1 and c2 is:";
	//operator calling(+)
	c3 = c1 + c2;
	c3.getter();
	cout << endl;
	complex c4;
	//operator calling(-)
	cout << "Subtraction of c1 and c2 is:";
	c4 = c1 - c2;
	c4.getter();
	cout << endl;
	//operator calling(*)
	complex c5;
	cout << "Multiply of c1 and c2 is:";
	c5 = c3 * c4;
	c5.getter();
	//operator calling(/)
	cout << endl;
	complex c6;
	cout << "Division of c1 and c2 is:";
	c6 = c5 / c4;
	c6.getter();
}