#include<iostream>
#include<string>
using namespace std;

class swimmingpool
{
private:
	double length = 0;
	double width = 0;
	double depth = 0;
	//Frate is time in which swimming pool is filling
	double  frate = 0;
	//Drate is time in which water is draining
	double drate = 0;
public:
	swimmingpool() {};
	//parameterized constructor
	swimmingpool(double l,double w,double d,double r,double fr,double dr)
	{
		length = l;
		width = w;
		depth = d;
		frate = fr;
		drate = dr;
	}
	void set();
	void findvolumespace();
};
//Setting information for swimming pool
void swimmingpool::set()
{
	cout << "Enter Length of swimming Pool:" << endl;
	cin >> length;
	cout << "Enter Width of swimming Pool:" << endl;
	cin >> width;
	cout << "Enter Depth of Swimming Pool:" << endl;
	cin >> depth;
}
void swimmingpool::findvolumespace()
{
	double drain = 0;
	frate = (length * width * depth*7.5)/3600;
	cout << "Time filling of swimming pool:" << frate;
	drain = 200 * ((10 - frate) * (10 - frate))/3600;
	cout << "Time Draining of Swimming Poll:" << drain << endl;
}
int main()
{
	swimmingpool mydata;
	mydata.set();
	mydata.findvolumespace();
}