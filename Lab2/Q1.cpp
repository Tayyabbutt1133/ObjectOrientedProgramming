#include<iostream>
using namespace std;

class date {
private:
	int day;
	int month;
	int year;
public:
	date(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	void init();
	void display()
	{
		cout << "Day is:" << day<<endl;
		cout << "Month is:" << month<<endl;
		cout << "Year is:" << year;
	}
};
void date::init()
{
	cout << "Enter Day Of Your Choice:" << endl;
	cin >> day;
	do
	{
	cout << "Enter Month Of Your Choice:" << endl;
	cin >> month;
	} while (!(month>0));
	cout << "Enter Year Of Your Choice:" << endl;
	cin >> year;
}
int main()
{
	int d = 0;
	int m = 0;
	int y = 0;
	date mydata(d, m, y);
	mydata.init();
	mydata.display();
}




