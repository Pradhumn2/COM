#pragma once
#ifndef EVMFP 
#define EVMFP
#endif 

#include "catBaseUnknown.h"

class iMobile : virtual public catBaseUnknown
{
public:
	iMobile();
	virtual ~iMobile();
	virtual void answer_call() = 0;
	virtual void decline_call() = 0;
};

