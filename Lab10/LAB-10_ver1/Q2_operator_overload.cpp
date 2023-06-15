#include<iostream>

using namespace std;

class DOB
{

private:
	int day, month, year;

public:
	DOB(){};
	DOB(int d, int m, int y) :day(d), month(m), year(y){}
	void get()const
	{
		cout << day << "/" << month << "/" << year << endl;
	}
	~DOB(){};

};
class MyString
{
private:
	char *String;
public:
	MyString(){
		char *temp = new char[100];
		String = temp;
	};
	void operator =(MyString Obj)
	{
		String = Obj.String;
	}
	friend istream & operator >>(istream &in, MyString &S);
	friend ostream & operator <<(ostream &out, MyString &S);
	~MyString(){
	  
	}
};
istream & operator >>(istream &in, MyString &S)
{

	in.getline(S.String, 100);
	return in;
}
ostream & operator <<(ostream &out, MyString &S)
{
	out << S.String;
	return out;
}
class Address
{
private:
	int house_number;
	MyString City;
	MyString Country;
public:
	Address(){};
	Address(int hnum, MyString ci, MyString co){
		house_number = hnum;
		City = ci;
		Country = co;
	}
	void getAddress()
	{
		cout << house_number << "," << City << "," << Country << endl;
	}
	~Address(){};



};
class Person
{
private:
	MyString NIC;
	MyString name;
	DOB DateOfBirth;
	Address* Add;
public:
	Person(){}
	~Person(){
		delete Add;
	}
	Person(MyString n, MyString cnic, DOB date, Address* A){
		name = n;
		NIC = cnic;
		DateOfBirth = date;
		Add = A;
	}
	void getInfo()
	{
		cout << "Name : " << name << endl;
		cout << "CNIC : " << NIC << endl;
		cout << "Date of Birth : ";
		DateOfBirth.get();
		Add->getAddress();

	}



};

int main(){
	int d, m, y, hn;
	MyString n, cnic, city, country;
	cout << "Enter your Name ";
	cin >> n;
	cout << "Enter Your CNIC ";
	cin >> cnic;
	cout << "Enter your Date of birth ";
	cin >> d >> m >> y;
	DOB date(d, m, y);
	cout << "/t/t/tEnter Address";
	cout << "\nEnter house number ";
	cin >> hn;
	cin.ignore();
	cout << "Enter Your City ";
	cin >> city;
	cout << "Enter Your country ";
	cin >> country;
	Address *Add = new Address(hn, city, country);
	Person P(n, cnic, date, Add);
	P.getInfo();
}