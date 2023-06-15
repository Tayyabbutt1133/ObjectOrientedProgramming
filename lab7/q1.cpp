#include<iostream>
using namespace std;
class time
{
private:
	int* hours;
	int* minutes;
	int* seconds;
public:
	//default constructor
	time(){};
	//parameterized constructor(accessing members from private to public)
	time(int*h,int*m,int*s)
	{
		*hours = *h;
		*minutes = *m;
		*seconds = *s;
	}
	//copy constructor(deep copy)
	time(time& sample)
	{
		hours = new int;
		*hours = *(sample.hours);
		minutes = new int;
		*minutes = *(sample.minutes);
		seconds = new int;
		*seconds = *(sample.seconds);
	}
	//destructor
	~time()
	{
		delete hours;
		delete minutes;
		delete seconds;
	}

	//functions calling
	void set();
	void get();
	//operator overloading(==)
	bool time::operator ==(time &o)//bool time::operator ==(time& o)
	{
		if (*hours == *(o.hours) && *minutes == *(o.minutes) && *seconds == *(o.seconds))
		{
			return true;
		}
		else
			return false;
	}
	//operator overlaoding(>)
	bool time::operator>(time& o)
	{
		if (*hours > *(o.hours) && *minutes > *(o.minutes) && *seconds > *(o.seconds))
		{
			return true;
		}
		else
			return false;
	}
	//operator overlaoding(!=)
	bool time::operator !=(time& o)
	{
		if (*hours != *(o.hours) && *minutes != *(o.minutes) && *seconds != *(o.seconds))
		{
			return true;
		}
		else
			return false;
	}
	//operator overlaoding(<)
	bool time::operator<(time&o)
	{
		if (*hours < *(o.hours) && *minutes < *(o.minutes) && *seconds < *(o.seconds))
		{
			return true;
		}
		else
			return false;
	}
	//operator overloading(<=)
	bool time::operator<=(time &o)
	{
		if (*hours <= *(o.hours) && *minutes <= *(o.minutes) && *seconds <= *(o.seconds))
		{
			return true;
		}
		else
			return false;
	}
	//operator overloading (>=)
	bool time::operator>=(time &o)
	{
		if (*hours >= *(o.hours) && *minutes >= *(o.minutes) && *seconds >= *(o.seconds))
		{
			return true;
		}
		else
			return false;
	}
	//operator overload(+)
	bool time::operator+(time&o)
	{
		time temp;
		temp.hours = (*hours) + o.hours;
	}
	//cin operator call in class
	friend istream &operator >>(istream &input, time &o);
	friend ostream& operator<<(ostream&output, time &o);
};
//operator overloading(>>)cin
istream & operator >>(istream &input, time &o)
{
	input >> *(o.hours);
	input >> *(o.minutes);
	input >> *(o.seconds);
	return input;
}
//operator overlaoding <<(cout)
ostream& operator<<(ostream& output, time&o)
{
	output << *(o.hours) << endl;
	output << *(o.minutes) << endl;
	output << *(o.minutes);
}
void time::set()
{
	//Hours
	do
	{
	cout << "Enter Hours(Must have range from 1 to 12):" << endl;
	cin >> (*hours);
	} while (!((*hours)>=1&&(*hours)<=12));
	//Minutes
	do
	{
		cout << "Enter Minutes(Must have range from 0 to 60):" << endl;
		cin >> (*minutes);
	} while (!((*minutes) >= 0 && (*minutes) <= 60));
		//Seconds
	do
	{
		cout << "Enter Seconds(Must have range from 0 to 60):" << endl;
		cin >> (*seconds);
	} while (!((*seconds) >= 0 && (*seconds) <= 60));
}
void time::get()
{
	cout << endl;
	cout << *hours << ":" << *minutes << ":" << *seconds << endl;
}


int main()
{
	time data1;
	cout << "ENTER TIME:" << endl;
	cout << endl;
	data1.set();
	cout << "Time is:";
	data1.get();
	cout << endl;
	time data2;
	cout << "Enter Obj 2(Time):" << endl;
	data2.set();
	//==operator overloading calling
	if (data1 == data2)
	{
		cout << "Hence Equal" << endl;
	}
	else
	{
		cout << "Not Equal" << endl;
	}
	//Checking another condition
	time data3;
	time data4;
	cout << "Enter obj3(Time):" << endl;
	data3.set();
	cout << "Enter obj4(Time):" << endl;
	data4.set();
	//>operator overloading calling
	if (data3 > data4)
	{
		cout << "Obj 3 is Greater that obj4" << endl;
	}
	else
		cout << "Obj 3 is not Greater that obj4" << endl;
	time data5;
	time data6;
	cout << "Enter obj5(Time):" << endl;
	data5.set();
	cout << "Enter obj6(Time):" << endl;
	data6.set();
	//!=operator overloading calling
	if (data5 != data6)
	{
		cout << "obj5 is not equal to oj6" << endl;
	}
	else
		cout << "obj5 is equal to oj6" << endl;
	//< operator overloading
	time data7, data8;
	cout << "Enter obj7(Time):" << endl;
	data7.set();
	cout << "Enter obj8(Time):" << endl;
	data8.set();
	if (data7 < data8)
	{
		cout << "Obj 7 is smaller than obj 8" << endl;
	}
	else
		cout << "Obj 7 is not smaller than obj 8" << endl;
	//operator overloading(<=)
	time data9, data10;
	cout << "Enter obj9(Time):" << endl;
	data9.set();
	cout << "Enter obj10(Time):" << endl;
	data10.set();
	if (data9 <= data1)
	{
		cout << "Obj9 is smaller than equal to obj10" << endl;
	}
	else
		cout << "Obj9 is not smaller than equal to obj10" << endl;
	//operator overloading(>=)
	if (data9 >= data10)
	{
		cout << "Obj 9 is greater than equal to obj10" << endl;
	}
	else
		cout << "Obj 9 is not greater than equal to obj 10" << endl;
	//cin operator overload
	time data11;
	cout << "Enter Obj11 Value:" << endl;
	cin >> data11;
	//cout operator overloading
	cout << "Obj11 Value is:" << endl;
	cout << data11;
}




