#include<iostream>
#include<string>
using namespace std;


class daytype
{
private:
    string day;
    string nextday;
    string previousday;
public:
    daytype() {};
    daytype(string d, string n, string p)
    {
        day = d;
        nextday = n;
        previousday = p;
    }
    //function calling
    void  daysgame();
    void display();
};
void  daytype::daysgame()
{
    string arr[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
    //Your day
    cout << "Enter Your day:" << endl;
    cin >> day;
    for (int i = 1; i < 7; i++)
    {
        if (day == arr[i])
        {
            nextday = arr[i + 1];
            previousday = arr[i - 1];

        }
    }
}
void daytype::display()
{
    cout << "Today is:" << day<<endl;
    cout << "Next day is:" << nextday << endl;
    cout << "Previous day is:" << previousday;
}
int main()
{
    daytype mydata;
    mydata.daysgame();
    mydata.display();
}