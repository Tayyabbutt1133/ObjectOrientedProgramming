#include <iostream>
using namespace std;


class NextBridge
{
private:
    string name;
    string address;
    string  phone;
    string level;
    int experience;
    double current_salary;
    double increment;



public:
    //default constructor
    NextBridge() {};

    //parameterized constructor
    NextBridge(string n, string d, string p, string l, int ex, double current) {


        name = n;
        address = d;
        phone = p;
        level = l;
        experience = ex;
        current_salary = current;
    }


    void set()
    {

        cout << "entre the name of the employe " << endl;
        cin >> name;
        cout << "entre the address of the employe " << endl;
        cin >> address;
        cout << "entre the phone number of the employe " << endl;
        cin >> phone;
        cout << "entre the level of the employe " << endl;
        cin >> level;
        cout << "entre the experience of the employe " << endl;
        cin >> experience;
        cout << "entre the current_salary of the employe " << endl;
        cin >> current_salary;

        cout << endl;
        cout << endl;
        cout << endl;
    }

    void get()
    {
        cout << "the name of the employe is: " << name << endl;
        cout << endl;
        cout << "the address of the employe is: " << address << endl;
        cout << endl;
        cout << "the phone of the employe is: " << phone << endl;
        cout << endl;
        cout << "the level of the employe is: " << level << endl;
        cout << endl;
        cout << "the experience  of the employe is: " << experience << endl;
        cout << endl;
        cout << "the current_salary of the employe is: " << current_salary << endl;
        cout << endl;
    }

    void calculate()
    {
        if (experience == 0) {


            cout << "This employe will get 0 % increment" << endl;

            cout << "the salary will be same " << current_salary << endl;

        }
        else if (experience >= 1 && experience <= 2) {


            cout << "This employe will get 10 % increment in the salary" << endl;
            cout << endl;

            float in = (current_salary * 10) / 100;
            cout << "The increment salary will be " << current_salary + in << endl;
            cout << endl;
        }
        else if (experience >= 3 && experience <= 6)
        {
            float in1 = (current_salary * 20) / 100;
            cout << endl;
            cout << "This employe will get 20 % increment in the salary" << endl;
            cout << endl;

            cout << "The increment salary will be " << current_salary + in1 << endl;
            cout << endl;
        }
        else {
            float in2 = (current_salary * 40) / 100;

            cout << "This employe will get 40 % increment in the salary" << endl;
            cout << endl;

            cout << "The increment salary will be " << current_salary + in2 << endl;
            cout << endl;
        }
    }

};
int main()
{
    NextBridge* data=new NextBridge;
    data->set();
    data->get();
    data->calculate();
}