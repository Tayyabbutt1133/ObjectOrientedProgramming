#include<iostream>
#include<string>
using namespace std;

//Base class
class creature
{

protected:
	char* CreatureName;
public:
	//Constructor
	creature(){}
	creature(char *CreatureName)
	{
		
		this->CreatureName = CreatureName;
		CreatureName = new char[30];
	};
	//Functions-Interface
	virtual void DoAction()const = 0;
	virtual void DrawOnScreen()const = 0;
	//Destructor
	/*virtual ~creature(){}*/
};
//Creature Derived classes
class Player :public creature
{
public:
	Player(char* CreatureName)
	{
	
		this->CreatureName = CreatureName;
		CreatureName = new char[30];
	};
	void DoAction()const
	{
		cout << " is Attacking" << endl;
	}
	void DrawOnScreen()const
	{
		cout << "PLAYER ";
		cout << CreatureName;
		DoAction();
	}
	/*~Player()
	{
		cout << "Player Destructor called" << endl;
	}*/
};

class Monster :public creature
{
public:
	Monster(){}
	Monster(char* CreatureName)
	{
		this->CreatureName = CreatureName;
		CreatureName = new char[30];
	};
	void DoAction()const
	{
		cout << "Monster ";
		cout << CreatureName;
		cout << " is Doing Monster Stuff" << endl;
	}
	void DrawOnScreen()const
	{

		DoAction();
	}
	/*~Monster()
	{
		cout << "Monster Destructor called" << endl;
	}*/
};
//derived class inheriting from monster class
class Wildpig :public Monster
{
public:
	Wildpig(char* CreatureName)
	{
		this->CreatureName = CreatureName;
		CreatureName = new char[30];
	};
	void DoAction()const
	{
		cout << " is Running " << endl;
	}
	void DrawOnScreen()const
	{
		cout << "Wildpig ";
		cout << CreatureName;
		DoAction();
	}
	/*~Wildpig()
	{
		cout << "Wildpig Destructor called" << endl;
	}*/
};
class Dragon :public Monster
{
public:
	Dragon(char* CreatureName)
	{
		this->CreatureName = CreatureName;
		CreatureName = new char[30];
	};
	void DoAction()const
	{
		cout << " is Breathing Fire" << endl;
	}
	void DrawOnScreen()const
	{
		cout << "Dragon ";
		cout << CreatureName;
		DoAction();
	}
	/*~Dragon()
	{
		cout << "Dragon Destructor Called" << endl;
	}*/
};
int main(){
	Player hero("Kick_Ass");
	Monster mon("UFO");
	Wildpig pig("I'm_Hungry");
	Dragon drag("I'm_the_Boss");
	creature* object[4];
	object[0] = &hero;
	object[1] = &mon;
	object[2] = &pig;
	object[3] = &drag;
	object[0]->DrawOnScreen();
	object[1]->DrawOnScreen();
	object[2]->DrawOnScreen();
	object[3]->DrawOnScreen();
	//Now Delete
	/*for (int i = 0; i < 4; i++)
	{
		delete [i]object;
	}*/
	return 0;
}
