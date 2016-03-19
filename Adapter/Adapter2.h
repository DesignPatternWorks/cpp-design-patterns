#pragma once
#include "Source.h"
#include "ITarget.h"

class Adapter2:
	public ITarget
{
public:
	Adapter2();
	~Adapter2();
	virtual void method1();
	virtual void method2();
private:
	Source source;
};

