#include<iostream>
#include"Adder.h"

using namespace std;

int main()
{
	cout << "In main" << endl;
	Adder obj;
	cout << "Result = " << obj.add(10 , 20) << endl;
	return 0;
}
	