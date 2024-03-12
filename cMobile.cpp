#include "cMobile.h"

cMobile::cMobile()
{
	count_ptr++;
	cout << "cMobile constructor is called" << endl;
}

cMobile::~cMobile()
{
	cout << "cMobile destrcutor is called" << endl;
}

void cMobile::add(int a, int b)
{
	cout << "addition " << a + b << endl;
}

void cMobile::sub(int a, int b)
{
	cout << "subtraction " << a - b << endl;
}

void cMobile::answer_call()
{
	cout << "cMobile answer called" << endl;
}

void cMobile::decline_call()
{
	cout << "cMobile decline call called" << endl;
}

void cMobile::query_interface(int choice, void**ptr)
{
	switch (choice) {
	case 1:
		*ptr = ((iMobile*)this);
		break;// this-> point toward current obj
	case 2:
		*ptr = ((iCalc*)this);
		break;
	}
}


