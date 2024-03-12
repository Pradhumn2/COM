#pragma once
#include "iCalc.h"
#include "iMobile.h"

class cCalc : public iCalc
{
public:
	cCalc();
	~cCalc();

	void add(int a, int b);
	void sub(int a, int b);
	void query_interface(int choice, void **ptr);
};

