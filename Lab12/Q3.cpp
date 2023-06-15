#include<iostream>
using namespace std;

class Animal
{
private:
	int legs = 8;
public:
	Animal(){}
	Animal(int legs)
	{
		this->legs = legs;
	}
	virtual void walk()
	{
		cout << "Animal with " << legs << " Legs is walking" << endl;

	}
	virtual void eat(){};
};
class Pet
{
	char*name;
public:
	Pet(){}
	virtual	void play(){}
};
class Spider :public Animal
{
public:
	Spider(){}
	void eat()
	{
		cout << "Spider is Eating Now" << endl;
	}
};
class Cat :public Animal, public Pet
{
private:
	char*name;
public:
	Cat(){}
	Cat(char*name)
	{
		this->name = name;
		name = new char[30];
	}
	void play()
	{
		cout << name << " is Playing" << endl;
	}
	void eat()
	{

	}
};

class Fish :public Animal, public Pet
{
private:
	char*name;
public:
	Fish(){}
	Fish(char*name)
	{
		this->name = name;
		name = new char[30];
	}
	void play()
	{
		cout << name << " is Playing" << endl;
	}
	void eat()
	{

	}
	void walk()
	{
		cout << name << " can not Walk" << endl;
	}
};
int main()
{
	Fish *f = new Fish("Jaws");
	Cat *c = new Cat("Meow");
	Animal *a = new Fish("Fish");
	Animal *e = new Spider();
	Pet *p = new Cat("Garfield");
	f->play();
	c->play();
	e->eat();
	e->walk();
	a->walk();
	p->play();
	return 0;
}