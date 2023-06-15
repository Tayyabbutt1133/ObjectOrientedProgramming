#include <iostream>
using namespace std;


template<typename F, typename x>

F mymax(F a, x b){

	if (a >= b){
		return a;
	}
	else{
		return b;

	}
}
int main(){
	double d;
	cout << "The maximum value is ";
	cout << mymax<float, int>(8.3, 5);
	cout << endl;
	d = mymax<double>(5.6, 7.3);
	cout << "The maximum value" << " is " << d;
	cout << endl;

}