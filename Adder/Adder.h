#include<iostream>

using namespace std;

class Adder
{
public:
	Adder()
	{
		cout << "Constructor" << endl;
	}

	~Adder()
	{
		cout << "Destructor" << endl;
	}

	int add(int, int);
};