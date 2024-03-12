#include "catBaseUnknown.h"

catBaseUnknown::catBaseUnknown()
{
	count_ptr = 0;
	cout << "Constructor of catBaseUnknown is called" << endl;
}

catBaseUnknown::~catBaseUnknown()
{
	cout << "Destructor of catBaseUnknown is called" << endl;
}

void catBaseUnknown::release_ref()
{
	if (count_ptr > 0) {
		count_ptr--;
	}
	else {
		delete(this);
	}
}

void catBaseUnknown::addref()
{
	count_ptr++;
	cout << "Current value of pointer count is " << count_ptr << endl;
}
