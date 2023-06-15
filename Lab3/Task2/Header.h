class dob{
private:
	int year;
	int month;
	int date;

public:
	void set(int y, int m, int d);


	void display();
};

class Student{
private:
	char* name;
	char* regNo;
	double CGPA;
	dob dateof;

public:
	Student(char* n, char* r, double g, dob dat);
	~Student();

	void display();
};

