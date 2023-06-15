#include<iostream>
using namespace std;

class savingsaccount
{
private:
	//user private saving balance
	double user_saving_balance;
	double annual_interest_rate;
	double monthly_interest_rate1;
	double monthy_interest_rate;
public:
	savingsaccount() {};
	
	//parameterized constructor
	savingsaccount(double air, double mir,double mir1)
	{
		annual_interest_rate = air;
		monthy_interest_rate = mir;
		monthly_interest_rate1 = mir1;
	}
	void setSavingsbalance(double usb)
	{
		user_saving_balance = usb;
	}
	void calculatemonthlyinterest()
	{
		annual_interest_rate = 0.04;
		//monthly interest rate finding
		monthy_interest_rate = (annual_interest_rate * user_saving_balance) / 12;
    }
	void calculatemonthlyinterest2()
	{
		annual_interest_rate = 0.05;
		monthly_interest_rate1 = (annual_interest_rate * user_saving_balance) / 12;
	}
	void getsavingsbalance()
	{
		cout << monthy_interest_rate;
	}
	void getsavingbalance2()
	{
		cout << monthly_interest_rate1;
	}
	
};



int main()
{ 
	cout << "------------------------------------------------Bank Holders Interest Data----------------------------------------------" << endl;
	savingsaccount* user1 = new savingsaccount;
	user1->setSavingsbalance(2000.00);
	savingsaccount* user2 = new savingsaccount;
	user2->setSavingsbalance(3000.00);
	user1->calculatemonthlyinterest();
	user2->calculatemonthlyinterest();
	cout << "New Balance For user 1 is:" << endl;
	user1->getsavingsbalance();
	cout << endl;
	cout << "New Balance for User 2 is:" << endl;
	user2->getsavingsbalance();
	cout << endl;
	cout << "Now With Different Interest Rate:" << endl;
	user1->calculatemonthlyinterest2();
	user2->calculatemonthlyinterest2();
	cout << "New Balance For User 1:" << endl;
	user1->getsavingbalance2();
	cout << endl;
	cout << "New Balance For User 2:" << endl;
	user2->getsavingbalance2();
	return 0;
}








