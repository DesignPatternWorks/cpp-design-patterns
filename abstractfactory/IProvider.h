#pragma once
#include "ISender.h"
class IProvider
{
public:
	IProvider();
	virtual ~IProvider();
	virtual ISender* produce() = 0;
};

