#pragma once
#include "ICommand.h"
#include "Receiver.h"
class MyCommand :
	public ICommand
{
public:
	MyCommand(Receiver* receiver);
	~MyCommand();
	void exec() override;
private:
	Receiver* receiver;
};

