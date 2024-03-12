#pragma once
#include "iUnknown.h"
#include "cMobile.h"
#include "cCalc.h"
#include "iCalc.h"
#include "iMobile.h"
#include "catBaseUnknown.h"

class Factory
{
public:
	
	static iMobile* get_instance_iMobile();
	static iCalc* get_instance_iCalc();
	static void get_instance(int choice, void** (ptr));
};

