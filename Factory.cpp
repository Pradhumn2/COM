#include "Factory.h"

iCalc* Factory::get_instance_iCalc()
{
    return new cCalc();
}

void Factory::get_instance(int choice, void** (ptr))
{
	iMobile* mob_ptr = new cMobile;
	//iCalc* cal_ptr = new cCalc();
	switch (choice)
	{
	case 1:
		 
		
	case 2:
		
		 
	default:
		break;
	}
}

iMobile* Factory::get_instance_iMobile()
{
    return new cMobile;
}
