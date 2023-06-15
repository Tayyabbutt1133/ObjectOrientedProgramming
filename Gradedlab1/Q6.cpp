#include <iostream>
#include <string>
using namespace std;
class emply{



public:

	string name1;
	int code1;
	int dat1, mon1, yea1;
	string name2;
	int code2;
	int dat2, mon2, yea2;
	string name3;
	int code3;
	int dat3, mon3, yea3;




	void set(){

		cout << "entre the name of employee 1 " << endl;
		cin >> name1;
		cout << "entre the code of employee 1 " << endl;
		cin >> code1;
		cout << "entre the date " << endl;
		cin >> dat1;
		cout << "entre the month " << endl;
		cin >> mon1;
		cout << "entre the year " << endl;
		cin >> yea1;

		cout << "entre the name of employee 2 " << endl;
		cin >> name2;
		cout << "entre the code of employee 2 " << endl;
		cin >> code2;
		cout << "entre the date " << endl;
		cin >> dat2;
		cout << "entre the month " << endl;
		cin >> mon2;
		cout << "entre the year " << endl;
		cin >> yea2;



		cout << "entre the name of employee 3 " << endl;
		cin >> name3;
		cout << "entre the code of employee 3 " << endl;
		cin >> code3;
		cout << "entre the date " << endl;
		cin >> dat3;
		cout << "entre the month " << endl;
		cin >> mon3;
		cout << "entre the year " << endl;
		cin >> yea3;


	}

	void get(){

		cout << "the name of the employ is " << name1 << endl;
		cout << endl;
		cout << "the code of the employ is " << code1 << endl;
		cout << endl;
		cout << "date is" << dat1 << endl;
		cout << endl;
		cout << "month is " << mon1 << endl;
		cout << endl;
		cout << "the year is " << yea1 << endl;
		cout << endl;

		cout << "the name of the employ is " << name2 << endl;
		cout << endl;
		cout << "the code of the employ is " << code2 << endl;
		cout << endl;
		cout << "date is" << dat2 << endl;
		cout << endl;
		cout << "month is " << mon2 << endl;
		cout << endl;
		cout << "the year is " << yea2 << endl;
		cout << endl;
		
		cout << "the name of the employ is " << name3 << endl;
		cout << endl;
		cout << "the code of the employ is " << code3 << endl;
		cout << endl;
		cout << "date is" << dat3 << endl;
		cout << endl;
		cout << "month is " << mon3 << endl;
		cout << endl;
		cout << "the year is " << yea3 << endl;
		cout << endl;

		int current;
		cout << "entre the current year" << endl;
		cin >> current;

		int a, b, c;
		a = current - yea1;
		b = current - yea2;
		c = current - yea3;


		if (a >= 2){

			cout << endl;
			cout << "the tenure of this employ is more than 2 year " << name1 << endl;
			cout << endl;
		}


		else if (b >= 2){

			cout << endl;
			cout << "the tenure of this employ is more than 2 year " << name2 << endl;
			cout << endl;
		}
		else {

			cout << endl;
			cout << "the tenure of this employ is more than 2 year " << name3 << endl;
			cout << endl;

		}
	}

};

int main(){

	emply myobjt;
	myobjt.set();
	myobjt.get();

	system("pause");
	return 0;
}