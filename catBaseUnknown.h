#pragma 

#ifndef _HEADER_AAA
#define _HEADER_AAA

#include "iUnknown.h"

class catBaseUnknown : public iUnknown
{
protected:
	int count_ptr;
public:
	catBaseUnknown();
	void addref();
	void release_ref();
	virtual ~catBaseUnknown();
};


#endif


