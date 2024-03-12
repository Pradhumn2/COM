#include "cCalc.h"

cCalc::cCalc()
{
	count_ptr++;
	cout << "cCalc constructor is called" << endl;
}

cCalc::~cCalc()
{
	cout << "cCalc destrcutor is called" << endl;
}

void cCalc::add(int a, int b)
{
	cout << "addition " << a + b << endl;
}

void cCalc::sub(int a, int b)
{
	cout << "subtraction " << a - b << endl;
}

void cCalc::query_interface(int choice, void **ptr)
{
	switch (choice) {
	case 1:
		*ptr = ((iMobile*)this);  // this-> point toward current obj
	case 2:
		*ptr = ((iCalc*)this);
	}
}
