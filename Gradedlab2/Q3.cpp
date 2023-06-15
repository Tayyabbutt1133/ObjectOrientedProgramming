#include<iostream>
#include<string>
using namespace std;



class generalstore
{
private:
	int item_code;
	string item_name;
	int price;
	int current_date;
	int expire_date;
	int *days;
public:
	generalstore()
	{
		days = new int;
	}
	//parameterized constructor
	generalstore(int ic,string in,int p,int cd,int ed,int *d)
	{
		item_code = ic;
		item_name = in;
		price = p;
		current_date = cd;
		expire_date = ed;
		days= d;
	}
	//function calling 
	void set();
	void get();
	//Copy constructor for deep copy
	generalstore(generalstore& data)
	{
		item_code = data.item_code;
		item_name = data.item_name;
		price = data.price;
		current_date = data.current_date;
		expire_date = data.expire_date;
		*days = *(data.days);
	}
	//Destructor called
	~generalstore()
	{
		delete days;
	}
};
void generalstore::set()
{
	cout << "Enter Your Stock Item Code:" << endl;
	cin >> item_code;
	cout << "Enter Your Stock Item Name:" << endl;
	cin >> item_name;
	cout << "Enter Stock Item Price:" << endl;
	cin >> price;
	cout << "Enter Stock Arrival(Current Date):" << endl;
	cin >> current_date;
	cout << "Enter Stock Item Expiry Date:" << endl;
	cin >> expire_date;
}
void generalstore::get()
{
	*days = expire_date - current_date;
	if (*days<20)
	{
		cout << "Original Price is:" << price<<endl;
		cout << "Price After reduction is:" << (price) * 40 / 100;
	}
	else
	{
		cout << "Unchanged Original Price is:" << price;
	}
}
int main()
{
	generalstore obj1;
	obj1.set();
	obj1.get();
	cout << endl;
	cout << "For Another Object:" << endl;
	generalstore obj2 = obj1;
	obj2.get();
}



