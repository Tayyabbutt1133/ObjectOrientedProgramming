#include<iostream>
using namespace std;

template<class T>
class gradetable {
private:
	T grade1;
	T grade2;
	T grade3;
	T grade4;
	T grade5;
	T grade6;
	T sum;
    T average;
public:
	gradetable() {};
	//Parameterized constructor
	gradetable(T g1, T g2, T g3, T g4, T g5, T g6, T s, T a)
	{
		grade1 = g1;
		grade2 = g2;
		grade3 = g3;
		grade4 = g4;
		grade5 = g5;
		grade6 = g6;
		sum = s;
		average = a;
	}
	void displaytable()
	{
		cout << "Grades:         Percentage:                GPA: " << endl;
		cout << "A+              93-100%                   ta 4.0 " << endl;
		cout << "A               90-92%                     3.7 " << endl;
		cout << "A-              87-89%                     3.3 " << endl;
		cout << "B+              83-86%                     3.0 " << endl;
		cout << "B               80-82%                     2.7 " << endl;
		cout << "B-              77-79%                     2.3 " << endl;
		cout << "C+              73-76%                     2.0 " << endl;
		cout << "C               70-72%                     1.7 " << endl;
		cout << "C-              67-69%                     1.3 " << endl;
		cout << "D+              63-69%                     1.0 " << endl;
		cout << "D               63-66%                     0.7 " << endl;
		cout << "D-              60-62%                     0.3 " << endl;
		cout << "F               59% and below              0.0 " << endl;
	}
	void setbyuser()
	{
		cout << "Enter Marks of English: (Max 15)" << endl;
		cin >> grade1;
		cout << "Enter Marks of Calculus: (Max 15)" << endl;
		cin >> grade2;
		cout << "Enter Marks of Programming: (Max 15)" << endl;
		cin >> grade3;
		cout << "Enter Marks of Assembly: (Max 15)" << endl;
		cin >> grade4;
		cout << "Enter Marks of Bussiness: (Max 15)" << endl;
		cin >> grade5;
		cout << "Enter Marks of Discrete: (Max 15)" << endl;
		cin >> grade6;
	}
	void getbyuser()
	{
		sum = grade1 + grade2 + grade3 + grade4 + grade5 + grade6;
		average = sum / 6;
		cout << "Average is:" << average<<endl;
		//Grades defining according to percentage
		if (average >= 15)
		{
			cout << "A+ Grade" << endl;
			cout << "4.0 GPA"<<endl;
		}
		else if (average == 14)
		{
			cout << "A Grade" << endl;
			cout << "3.7 GPA"<<endl;
		}
		else if (average == 13)
		{
			cout << "A- Grade" << endl;
			cout << "3.3 GPA"<<endl;
		}
		else if (average == 12)
		{
			cout << "B+ Grade" << endl;
			cout << "3.0 GPA"<<endl;
		}
		else if (average == 11)
		{
			cout << "B Grade" << endl;
			cout << "2.7 GPA"<<endl;
		}
		else if (average == 10)
		{
			cout << "B- Grade" << endl;
			cout << "2.3 GPA"<<endl;
		}
		else if (average == 9)
		{
			cout << "C+ Grade" << endl;
			cout << "2.0 GPA"<<endl;
		}
		else if (average == 9)
		{
			cout << "C Grade" << endl;
			cout << "1.3 GPA"<<endl;
		}
		else if (average == 8)
		{
			cout << "C- Grade" << endl;
			cout << "1.0 GPA"<<endl;
		}
		else if (average == 7)
		{
			cout << "D+ Grade" << endl;
			cout << "0.7 GPA"<<endl;
		}
		else if (average == 6)
		{
			cout << "D Grade" << endl;
			cout << "Near Fail"<<endl;
		}
		else if (average <= 5)
		{
			cout << "D- Grade" << endl;
			cout << "Fail"<<endl;
		}
	}
};

int main()
{
	gradetable <int> mylist;
	mylist.displaytable();
	mylist.setbyuser();
	mylist.getbyuser();
	cout << endl;
	cout << "Now Marks For Float Process:" << endl;
	gradetable <float>mylist2;
	mylist2.setbyuser();
	mylist2.getbyuser();

}