class Cat{
private:

	char *name;
	double weight;

public:

	Cat();

	~Cat();

	void setName(char *n);
	
	void setWeight(double w);

	void getName();

	void getWeight();

};