#include<iostream>
using namespace std;

//Base Class
class card
{
private:
	int card_number;
protected:
	char* owner_name;
public:
	char* month;
	int date;
	int year;
	//Default constructor
	card() {};
	card(int card_number, char* owner_name, char* month, int date, int year) :card_number(card_number), owner_name(owner_name), month(month), date(date), year(year) {}
	//Function
	void card_no()
	{
		cout << "Enter Card Number:" << endl;
		cin >> card_number;
	}
	void display_card()
	{
		cout << "Card Number is:" << card_number;
	}
};

//Derived class 1
class callingcard :public card
{
private:
	int amount;
	char* company_name;
	int pin;
public:
	//Defualt constructor
	callingcard() {};
	//Initializer list
	callingcard(int amount, char* company_name, int pin) :amount(amount), company_name(company_name), pin(pin) {}
	void user_calling()
	{
		owner_name = new char[20];
		cout << "Enter owner Name:" << endl;
		cin.getline(owner_name, 20);
		//Function we get from base class
		card_no();
		cout << "Enter Amount:" << endl;
		cin >> amount;
		cin.ignore();
		company_name = new char[20];
		cout << "Enter Company Name:" << endl;
		cin.getline(company_name, 20);
		cout << "Enter Pin:" << endl;
		cin >> pin;
		cout << "Enter Date of expiry:" << endl;
		cin >> date;
		cin.ignore();
		month = new char[20];
		cout << "Enter Month of expiry:" << endl;
		cin.getline(month, 20);
		cout << "Enter Year of Expiry:" << endl;
		cin >> year;
	}
	void display_calling()
	{
		cout << "Owner Name is:" << owner_name << endl;
		display_card();
		cout << endl;
		cout << "Date of Expiry is:" << date << "/" << month << "/" << year << endl;
		cout << "Company Name is:" << company_name << endl;
		cout << "Pin is:" << pin << endl;
	}
};
//Derived class 2
class idcard :protected card
{
private:
	int cnic_number;
	int age;
public:
	//Default constructor
	idcard() {};
	//Initializer list
	idcard(int cnic_number, int age) :cnic_number(cnic_number), age(age) {}
	void user_idcard()
	{
		cin.ignore();
		owner_name = new char[20];
		cout << "Enter Owner Name:" << endl;
		cin.getline(owner_name, 20);
		//Function we get from Base Class
		card_no();
		cout << "Enter Cnic Number:" << endl;
		cin >> cnic_number;
		cin.ignore();
		cout << "Enter Age:" << endl;
		cin >> age;
		cout << "Enter Date of expiry:" << endl;
		cin >> date;
		cin.ignore();
		month = new char[20];
		cout << "Enter Month of expiry:" << endl;
		cin.getline(month, 20);
		cout << "Enter Year of Expiry:" << endl;
		cin >> year;
	}
	void display_userid()
	{
		cout << "Owner Name is:" << owner_name << endl;
		display_card();
		cout << endl;
		cout << "Date of Expiry is:" << date << "/" << month << "/" << year << endl;
		cout << "Age is:" << age << endl;
		cout << "Cnic Number is:" << cnic_number << endl;
	}
};
//derived class 3
class DrivingClassCard :private card
{
private:
	char* driving_license_type;
	char* city_of_issued;
public:
	//Default constuctor
	DrivingClassCard() {};
	//Initializer List
	DrivingClassCard(char* driving_license_type, char* city_of_issued) :driving_license_type(driving_license_type), city_of_issued(city_of_issued) {}
	void user_drivingcard()
	{
		cin.ignore();
		owner_name = new char[20];
		cout << "Enter Owner Name:" << endl;
		cin.getline(owner_name, 20);
		//Function from base class:Private Member
		card_no();
		driving_license_type = new char[30];
		cin.ignore();
		cout << "Enter Driving License Type:" << endl;
		cin.getline(driving_license_type, 30);
		city_of_issued = new char[30];
		cout << "Enter City of Issued:" << endl;
		cin.getline(city_of_issued, 30);
		cout << "Enter Date of expiry:" << endl;
		cin >> date;
		cin.ignore();
		month = new char[20];
		cout << "Enter Month of expiry:" << endl;
		cin.getline(month, 20);
		cout << "Enter Year of Expiry:" << endl;
		cin >> year;
	}
	void display_driving()
	{
		cout << "Owner Name is:" << owner_name << endl;
		cout << "Driving License Type is:" << driving_license_type << endl;
		cout << "City of Card Issued is:" << city_of_issued << endl;
		display_card();
		cout << endl;
		cout << "Date of Expiry is:" << date << "/" << month << "/" << year;

	}
};

int main()
{
	callingcard c;
	c.user_calling();
	idcard id;
	cout << endl;
	cout << "Second Person:" << endl;
	id.user_idcard();
	cout << endl;
	cout << "Third Person:" << endl;
	DrivingClassCard drive;
	drive.user_drivingcard();
	cout << endl;
	c.display_calling();
	id.display_userid();
	drive.display_driving();
	return 0;
}

