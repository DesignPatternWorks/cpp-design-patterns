#pragma once
#include "Source.h"
#include "ITarget.h"
class Adapter :
	public ITarget, private Source
{
public:
	Adapter();
	~Adapter();
	virtual void method1();
	virtual void method2();
};

