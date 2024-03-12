#pragma once

#ifndef EVM 
#define EVM
#endif 


#include <iostream>
using namespace std;

class iUnknown
{
public:
	iUnknown();
	virtual  ~iUnknown();
	virtual void query_interface(int choice, void **ptr) = 0;
};

