#include<iostream>
#include<cstring>
using namespace std;


class timeformat24
{
private:
	int hour, minutes, second;
public:
	//default constructor
	timeformat24()
	{
		hour = 0;
		minutes = 0;
		second = 0;
	}
	//parameterized constructor
	timeformat24(int h, int m, int s)
	{
		hour = h;
		minutes = m;
		second = s;
	}
	int returnhour()
	{
		return hour;
	}
	int returnminutes()
	{
		return minutes;
	}
	int returnsecond()
	{
		return second;
	}
	void display()
	{
		cout << hour << ":" << minutes << ":" << second << endl;
	}
};
//Now class for 12 hour time format
class timeformat12
{
private:
	int hour1, minutes1, seconds1;
	bool pm;
public:
	//default constructor
	timeformat12()
	{
		hour1 = 0;
		minutes1 = 0;
		seconds1 = 0;
	}
	//Parameterized Constructor
	timeformat12(int h1, int m1, int s1,char *t)
	{
		hour1 = h1;
		minutes1 = m1;
		seconds1 = s1;
		//Strcmp is used to compare string amd strupr is used to for conversions of strings 
		if (strcmp(strupr(t), "PM") == 0)
		{
			pm = 1;
		}
		else
			pm = 0;
	}
	//Time conversion
	timeformat12(timeformat24 time)
	{
		hour1 = time.returnhour() % 12;
		minutes1 = time.returnminutes();
		seconds1 = time.returnsecond();
		//Pm or am finding build in function of cstring library
		pm = static_cast<bool>(time.returnhour() / 12);
	}
	//operator function for time conversion
	operator timeformat24()
	{
		int hrs = pm ? hour1 + 12 : hour1;
		int mins = minutes1;
		int sec = seconds1;
		return timeformat24(hrs, mins, sec);
	}
	void display()
	{
		cout << hour1 << ":" << minutes1 << ":" << seconds1 << " " << (pm ? "PM" : "AM") << endl;
	}
};


int main()
{
	//Creating and assigning values to object of class timeformat24
	timeformat24 time24(12, 25, 44);
	//Creating object for 12 hours time format
	timeformat12 time12;
	time12 = time24;
	cout << "12 Hours Time Format:" << endl;
	time12.display();
	cout << "Equilent 24 Hour Time Format::" << endl;
	time24.display();
	cout << endl;

	//Now creating objects for client testing 
	timeformat12 obj1, obj2, obj3;
	obj1.display();
	obj2.display();
	obj3.display();
	//Now for conversion test into 24 hours 
	timeformat24 obj1, obj2, obj3;
	obj1.operator timeformat24();
	obj2.operator timeformat24();
	obj3.operator timeformat24();
}
































