#pragma once
class ITarget
{
public:
	ITarget();
	virtual ~ITarget();
	virtual void method1() = 0;
	virtual void method2() = 0;
};

