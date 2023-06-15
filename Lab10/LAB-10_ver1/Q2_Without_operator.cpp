#include<iostream>
using namespace std;

class mystring
{
private:
	char* city;
	char*  country;
	int people_nic;
	char* name;
public:
	//default constructor
	mystring(){};
	//paramterized constructor
	mystring(char*ci, char*co,int p_n,char*n)
	{
		city = ci;
		country = co;
		people_nic = p_n;
		name = n;
	}
	void person_name()
	{
		name = new char[40];
		cout << "Enter Person Name:" << endl;
		cin.getline(name, 40);
	}
	void person_nic()
	{
		cout << "Enter Person Cnic:" << endl;
		cin >> people_nic;
	}
	void country_user()
	{
		country = new char[40];
		cout << "Enter Country Name:" << endl;
		cin.getline(country, 40);
	}
	void city_user()
	{
		city = new char[40];
		cout << "Enter City Name:" << endl;
		cin.getline(city, 40);
	}
	void display_all_MyString()
	{
		cout << "Person Name is:" << name<<endl;
		cout << "Person Nic is:" << people_nic << endl;
		cout << "Country is:" << country << endl;
		cout << "City is:" << city << endl;
	}
};
//second class
class address
{
public:
	int house_no;
	//Composition of first class for city
	mystring  city;
	//comosition of first class for country
	mystring country;
	void all_address()
	{
		cout << "Enter Address House No:" << endl;
		cin >> house_no;
		//mystring first function composition
		city.city_user();
		//mySring second function composition
		country.country_user();
		//Mystring third function composition though one of them
		city.display_all_MyString();
	}
};

class dob
{
public:
	int day;
	int month;
	int year;
	void ask_dob()
	{
		cout << "Enter Date of Birth:" << endl;
		cin >> day;
		cout << "Enter Month Of Birth:" << endl;
		cin >> month;
		cout << "Enter year of Birth:" << endl;
		cin >> year;
	}
	void display_dob()
	{
		cout << "Date of Birth is:" << day << "/" << month << "/" << year;
	}
};

//Class where all members of above three classes composite
class people
{
public:
	mystring name;  //Directly accessing from mystring class
	mystring nic;   //Directly accessing from mystring class
	address *add=new address;
	dob datee_of_birth;  
	void getallinfo()
	{
		name.person_name();
		nic.person_nic();
	}
};



