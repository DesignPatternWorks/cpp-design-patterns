#pragma once
#include "Sourceable.h"
class Bridge
{
public:
	Bridge();
	virtual ~Bridge();
	virtual void method() = 0;
	virtual Sourceable* getSource();
	virtual void setSource(Sourceable*);
private:
	Sourceable* source;
};

