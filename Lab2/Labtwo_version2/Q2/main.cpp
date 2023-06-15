#include<iostream>
#include"header.h"
using namespace std;
	int main()
	{

		employee data1,data2,data3,data4,data5;
		int age1, age2, age3, age4, age5;
		data1.set(12345, 25, 24);
		age1 = data1.calculatetenure();

		data2.set(12345, 30, 35);
		age2 = data2.calculatetenure();

		data3.set(12345, 45, 60);
		age3= data3.calculatetenure();

		data4.set(12345, 15, 55);
		age4= data4.calculatetenure();

		data5.set(12345, 12, 24);
		age5= data5.calculatetenure();


		if (age1>=2)
		{
			data1.display();
		}
		if (age2 >= 2)
		{
			data2.display();
		}
		 if (age3 >= 2)
		{
			data3.display();
		}
		else if (age4 >= 2)
		{
			data4.display();
		}
		else if (age5 >= 2)
		{
			data5.display();
		}
	}