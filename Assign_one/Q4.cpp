#include<iostream>
#include<string>
using namespace std;


class book
{
private:
	//attributes
	int book_id = 0;
	string title;
	string author;
	float price = 0;
	int userchoice = 0;
	int records = 0;
public:
	book() {};
	//Parameterized constructor
	book(int b, string t, string a, float p, int u, int r)
	{
		book_id = b;
		title = t;
		author = a;
		price = p;
		userchoice = u;
		records = r;
	}
	//functions calling 
	void menudisplay();
	void askuser();
	void setdata();
	void getdata();
	//Destructor called
	~book();
};
//Menu display
void book::menudisplay()
{
	cout << "-------------------------------------Welcome To E-Library Prototype-------------------------------------" << endl;
	cout << "--------------------------------------------------------------------------------------------------------" << endl;
}
void book::setdata()
{
	for (int i = 0; i < records; i++)
	{
		cout << "Book ID:";
		cin >> book_id;
		cout << "Title:";
		cin >> title;
		cout << "Author:";
		cin >> author;
		cout << "Price:";
		cin >> price;
		cout << endl;
		cout << "BOOK HAS BEEN ADDED" << endl;
	}
}
void book::getdata()
{
	cout << "Books Displayed Successfully:" << endl;
	cout << "Book Id:" << book_id << endl;
	cout << "Title:" << title << endl;
	cout << "Author:" << author << endl;
	cout << "Price:" << price;
	cout << endl;
}
void book::askuser()
{
	char again;
	do
	{
		cout << "Enter 1 To Add Books" << endl;
		cout << "Enter 2 To Display Books" << endl;
		cout << "Enter 0 To Exit" << endl;
		cout << endl;
		cout << "Enter Your Choice:" << endl;
		cin >> userchoice;
		int recordmatching = 0;
		//Functionality one 
		if (userchoice == 1)
		{
			cout << "How Many Records You Want to Enter:" << endl;
			cin >> records;
			//To Compare the record that user enter with same record 
			recordmatching = records;
			cout << "Enter Book Details:" << endl;
			setdata();
			cout << "Do You Want To Add Another Record: (y/n)" << endl;
			cin >> again;
			if (again == 'y')
			{
				records = 0;
				cout << "How Many Records You Want to Enter:" << endl;
				cin >> records;
				cout << "Enter Book Details:" << endl;
				setdata();
			}
			else
			{
				cout << "THANKS FOR ADDING BOOKS IN OUR LIBRARY" << endl;
				cout << "TRUELY APPRECIATED" << endl;
			}
		}
		//Functionality 2
		else if (userchoice == 2)
		{
			getdata();
		}
		//Functionality 3 
		else if (userchoice == 0)
		{
			cout << "BYE BYE! TATA";
			cout << endl;
		}
		again = 0;
		cout << "Show The Main Menu Again? (y/n)" << endl;
		cin >> again;
	} while (again == 'y');
}
book::~book()
{
	cout << endl;
	cout << "Destructor Called" << endl;
}
int main()
{
	book mylibrary;
	mylibrary.menudisplay();
	mylibrary.askuser();
}













