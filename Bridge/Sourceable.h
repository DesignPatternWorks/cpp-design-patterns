#pragma once
class Sourceable
{
public:
	Sourceable();
	virtual ~Sourceable();
	virtual void method() = 0;
};

