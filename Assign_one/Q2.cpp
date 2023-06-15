#include<iostream>
using namespace std;
class Student{
public:
	Student(void)
	{
		cout << "Constructor Called"<<endl;
	}
	~Student();
};
Student::~Student()
{
	cout << "I am in Destructor!" << endl;
}
 int main()
 {
	 Student std;
	 return 0;
 }