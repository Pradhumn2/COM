#pragma once
#include "iMobile.h"
#include "iCalc.h"

class cMobile : public iMobile , public iCalc
{
public:
	cMobile();
	~cMobile();
	void add(int a, int b);
	void sub(int a, int b);
	void answer_call();
	void decline_call();
	void query_interface(int choice, void**ptr);
};

