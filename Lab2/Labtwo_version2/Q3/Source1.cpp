
#include<iostream>
#include"header.h";
using namespace std;



	void tri:: set(int base1, int height1){

		base = base1;
		height = height1;

	}
	void tri:: get()
	{

		float area = (0.5)*(base * height);
		cout << "the calculated area of the triangle is " << area << endl;

	}

