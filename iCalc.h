#pragma once
#pragma once
#ifndef EVMPFG 
#define EVMPFG
#endif 


#include "catBaseUnknown.h"

class iCalc : virtual public catBaseUnknown
{
public:
	iCalc();
	virtual ~iCalc();
	virtual void add(int a, int b) = 0;
	virtual void sub(int a, int b) = 0;
};

