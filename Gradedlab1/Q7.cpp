#include<iostream>
#include<string>
using namespace std;


class date
{
private:
	//setting default date to compare
	int dat=12;
	int month;
	int userdate;
	int year;
public:
	date() {};
	date(int d,int m,int y,int u)
	{
		dat = d;
		month = m;
		year = y;
		userdate = u;
	}
	//Function calling 
	void set();
	void get();
};
void date::set()
{
	cout << "Enter Date please:" << endl;
	cin >> userdate;
}
void date::get()
{
	if (userdate==dat)
	{
		cout << "Date SuccessFully Equal"<<endl;
	}
	else
	{
		cout << "Date Not Equal";
	}
}

int main()
{
	date mydata;
	mydata.set();
	mydata.get();
}