#include<iostream>
using namespace std;
class Shape{
protected:
	float area;
	float volume;
public:
	Shape(){};
	virtual void calculatearea() = 0;
	virtual void calculatevolume() = 0;
	virtual void display()=0;

};
class point: public Shape{
protected:
	float x_cord;
	float y_cord;
public:
	point(){};
	point(float x,float y){
		x_cord = x;
		y_cord = y;

	}
	void calculatearea(){

	}
	void calculatevolume(){

	}
	void display(){
		cout << "x co-ordinate is:" << x_cord << endl;
		cout << "y co-ordinate is:" << y_cord << endl;

	}


};
class circle :public point{
protected:
	float height;
	float radius;
	float pi=3.142;
public:
	circle(){};
	circle(float h, float r){
		height = h;
		radius = r;
		
	}
	void calculatearea(){
		area = pi*(radius*radius);
	}
	void calculatevolume(){
		volume = pi*(radius*radius)*height;
	}
	void display(){
		cout << "Area of cricle:" << area << endl;
		cout << "Volume of circle:" << volume << endl;

	}

};
class Cylinder :public circle{
protected:
	float height;
	float pi = 3.142;
public:
	
	
	Cylinder(float radius, float height,float x_cord,float y_cord){
		this->radius = radius;
		this->height = height;
		this->x_cord = x_cord;
		this->y_cord = y_cord;
	}
	void calculatearea(){
		area = 2*pi*radius*height + 2*pi*(radius*radius);
	}
	void calculatevolume(){
		volume = pi*(radius*radius)*height;
	}
	void display(){
		cout << "Area of cylinder:" << area << endl;
		cout << "Volume of cylinder:" << volume << endl;

	}
};

int main(){
	Shape *object;
	point s(5, 7);
	object = &s;
	object->calculatearea();
	object->calculatevolume();
	object->display();
	circle k(5, 7);
	object = &k;
	object->calculatearea();
	object->calculatevolume();
	object->display();
	Cylinder l(5,7,5,7);
	object = &l;
	object->calculatearea();
	object->calculatevolume();
	object->display();
	return 0;


}