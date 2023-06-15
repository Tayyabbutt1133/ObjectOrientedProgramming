#include<iostream>
using namespace std;


class automob
{
private:
	int yearofmanufac;
	string material;
	int quantitymanu;
public:
	automob() {};
	automob(int y,string m,int q)
	{
		yearofmanufac = y;
		material = m;
		quantitymanu = 1;
	}
	//function calling
	void getter();
	void setter();
};
void automob::getter()
{
	cout << "Enter Material Name:" << endl;
	cin >> material;
	cout << "Enter Material Year of manufacture:" << endl;
	cin >> yearofmanufac;
	cout << "Enter Manufactured Quantity:" << endl;
	cin >> quantitymanu;
}
void automob::setter()
{
	cout << "Material Name is:" << material << endl;
	cout << "Year Of Manufacture is:" << yearofmanufac << endl;
	cout << "Manufactured Quantity:" << quantitymanu<<endl;
}
int main()
{
	cout << "---------------------Automobile Company---------------------" << endl;
	automob AA0,AA1,FF1,FF2;//serial number
	cout << "Enter First Product:" << endl;
	AA0.getter();
	AA0.setter();
	cout << endl;
	cout << "Enter Second Product:" << endl;
	AA1.getter();
	AA1.setter();
	cout << endl;
	cout << "Enter Third Product:" << endl;
	FF1.getter();
	FF1.setter();
	cout << endl;
	cout << "Enter Fourth Product:" << endl;
	FF2.getter();
	FF2.setter();
}
