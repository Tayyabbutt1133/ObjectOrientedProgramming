#include<iostream>
#include<string>
using namespace std;

class savingaccount
{
private:
	int total_balance;
	int withdraw_amount;
	int deposit_amount;
public:
	savingaccount(){}
	savingaccount(int wa, int da,int total)
	{
		withdraw_amount = wa;
		deposit_amount = da;
		total_balance = total;
	}
	void withdraw_deposit()
	{
		float update_amount;
		float update2_amount;
		cout << "Enter Your Saving Account Total Balance:" << endl;
		cin >> total_balance;
		cout << "Enter Amount you want to Deposit:" << endl;
		cin >> deposit_amount;
		update_amount = total_balance + deposit_amount;
		cout << "Amount after Deposit is:" <<update_amount<<endl;
		float  interest_rate;
		int years = 0;
		cout << "Enter Your Amount Deposit Tenure:" << endl;
		cin >> years;
		interest_rate = (deposit_amount * 12 * years) + update_amount;
		cout << "Your Interest Rate On Saving Account With Current Total Balance is:" << interest_rate<<endl;
		cout << "Enter Amount you want to Withdraw:" << endl;
		cin >> withdraw_amount;
		update2_amount = update_amount - withdraw_amount;
		cout << "Amount after Withdraw is:" << update2_amount;
	}
};

class currentaccount
{
private:
	int total_balance;
	int withdraw_amount;
	int deposit_amount;
public:
	currentaccount(){}
	currentaccount(int wa, int da, int total)
	{
		withdraw_amount = wa;
		deposit_amount = da;
		total_balance = total;
	}
	void withdraw_deposit()
	{
		float update_amount;
		float update2_amount;
		cout << "Enter Your Current Account Total Balance:" << endl;
		cin >> total_balance;
		cout << "Enter Amount you want to Deposit:" << endl;
		cin >> deposit_amount;
		update_amount = total_balance + deposit_amount;
		cout << "Amount after Deposit is:" << update_amount << endl;
		cout << "Enter Amount you want to Withdraw:" << endl;
		cin >> withdraw_amount;
		update2_amount = update_amount - withdraw_amount;
		cout << "Amount after Withdraw is:" << update2_amount;
	}
};

int main()
{
	string accounttype;
	cout << "Enter Your account Type:" << endl;
	cin >> accounttype;
	if (accounttype=="Savingaccount"||accounttype=="savingaccount")
	{
		savingaccount obj;
		obj.withdraw_deposit();
	}
	else
	{
		currentaccount obj1;
		obj1.withdraw_deposit();
	}
	return 0;
}



