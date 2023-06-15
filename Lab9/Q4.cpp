#include<iostream>
using namespace std;

const int size = 20;
class BankAccount{

protected:
	char* title;
	int accountNumber;
	int balance = 50000;
	int total_balance = 0;

public:
	void set()
	{
		char* t = new char[size];
		int a;
		int b;

		cout << "Enter Account Title: ";
		cin.getline(t, size);
		cout << "Enter Account Number: ";
		cin >> a;
		cout << "Enter Your Balance: ";
		cin >> b;

		title = t;
		accountNumber = a;
		balance = b;
	}
	void deposit()
	{
		int dep;
		cout << "Enter money you want to deposit: ";
		cin >> dep;
		balance = balance + dep;
	}
	void widraw()
	{
		int wid;
		cout << "Enter money you want to Withdraw: ";
		cin >> wid;
		balance = balance - wid;
	}
};
class SavingAccount : public BankAccount{

public:
	void CalculateInterest()
	{
		if (balance >= 50000)
			balance = balance + ((10 * balance) / 100);
		else
			balance = balance + ((5 * balance) / 100);

		cout << "Balance After Adding InterestRate is " << balance << endl;
	}
};

class CheckingAccount : public BankAccount{

	int fee = 5;

public:

	void deposit()
	{
		int dep;
		cout << "Enter money you want to deposit: ";
		cin >> dep;
		cout << "Balance Before Deposit: " << balance << endl;
		total_balance = dep + balance;
		//	balance = balance + dep - fee;
		cout << "Balance After Deposit: " << total_balance << endl;
	}
	void widraw()
	{
		int wid;
		cout << "Enter money you want to Withdraw: ";
		cin >> wid;
		cout << "Balance Before Widraw: " << total_balance << endl;
		cout << "Balance After Widraw: " << total_balance - wid << endl;
	}
};

int main()
{
	CheckingAccount obj;
	obj.set();
	obj.deposit();
	obj.widraw();

	SavingAccount obj1;
	obj1.CalculateInterest();
	system("pause");
	return 0;
}