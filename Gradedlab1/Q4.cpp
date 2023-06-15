#include <iostream>
#include <string>
using namespace std;


class signal
{

public:

	string R, Y, G;
	void set(){

		cout << "ENTRE  the first signal" << endl;
		cin >> R;
		cout << endl;
		cout << "ENTRE  the  second signal" << endl;
		cin >> Y;
		cout << endl;
		cout << "ENTRE  the third signal " << endl;
		cin >> G;
		cout << endl;

	}

	void get(){

		int n;
		cout << "1 means stop " << endl;
		cout << "2 means BE READY " << endl;
		cout << "3 means GO " << endl;
		cout << endl;
		cout << "entre a signal 1,2,3" << endl;
		cin >> n;
		cout << endl;

		if (n == 1){

			cout << "STOP" << endl;

		}

		else if (n == 2){

			cout << "BE READY" << endl;
		}

		else if (n == 3)
		{
			cout << "GO" << endl;

		}

	}

};

int main(){

	signal myobjt;
	myobjt.set();
	myobjt.get();


	system("pause");
	return 0;

}