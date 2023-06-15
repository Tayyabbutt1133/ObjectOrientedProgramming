#include<iostream>
using namespace std;

class release_date
{
private:
	int month;
	int date;
	int year;
public:
	//default constructor
	release_date(){};
	//Parameterzied constructor
	release_date(int m,int d,int y)
	{
		month = d;
		date = d;
		year = y;
	}
	void ask_user_release_date()
	{
		cout << "Enter Product Date of Release in M/D/Y Format:" << endl;
		cout << "Enter Month:" << endl;
		cin >> month;
		cout << "Enter Date:" << endl;
		cin >> date;
		cout << "Enter Year:" << endl;
		cin >> year;
	}
	void display_release()
	{
		cout << "Product Date of Release:" << month<<"/"<< date<<"/"<< year;
	}
};

class Product
{
public:
	release_date date_of_release;  //Composition Product has a release date
	int price;
	char*product_name;
	void product_alldata()
	{
		product_name = new char[50];
		cout << "Enter Product name:" << endl;
		cin.getline(product_name, 50);
		cout << "Enter Price:" << endl;
		cin >> price;
		//Composition
		date_of_release.ask_user_release_date();
		date_of_release.display_release();
		cout << "Price is:" << price;
	}
};
int main()
{
	Product obj;
	obj.product_alldata();
	return 0;
}