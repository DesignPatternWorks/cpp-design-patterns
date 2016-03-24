#pragma once
#include "ICommand.h"
class Invoker
{
public:
	Invoker(ICommand* cmd);
	~Invoker();
	void action();

private:
	ICommand* cmd;
};

