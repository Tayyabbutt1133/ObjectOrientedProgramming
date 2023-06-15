#include <iostream>
#include <string>
using namespace std;

class bank
{

public:

	string name;
	int acc;
	string type;
	float bal;

	void set(){
		cout << "ENTRE  the name of bank account holdrer" << endl;
		cin >> name;
		cout << endl;
		cout << "ENTRE  the  bank account number" << endl;
		cin >> acc;
		cout << endl;
		cout << "ENTRE  the type  bank account " << endl;
		cin >> type;
		cout << endl;
		cout << "ENTRE  the  bank balance" << endl;
		cin >> bal;
		cout << endl;
	}

	void get(){

		int n;

		cout << "The bank account holder name: " << name;
		cout << endl;
		cout << "The Account number: " << acc;
		cout << endl;

		cout << "Type of the bank: " << type;
		cout << endl;
		cout << "Bank balance: " << bal;
		cout << endl;


		cout << "Entre 1 if you want to  deposit from the account" << endl;

		cout << "Entre 2 if you want to  withdrawn from the account" << endl;
		cin >> n;
		int b;
		cout << "entre the ammount to add or widhtrawn" << endl;
		cin >> b;

		cout << endl;
		if (n == 1){
			cout << "ammount added" << bal + b << endl;
		}

		if (n == 2){
			cout << "ammount added" << bal - b << endl;

	}

	}
};


int main(){
	bank myobjt;
	myobjt.set();
	myobjt.get();

	system("pause");
	return 0;
}