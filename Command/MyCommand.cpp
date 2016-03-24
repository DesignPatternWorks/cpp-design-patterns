#include "MyCommand.h"



MyCommand::MyCommand(Receiver* receiver)
{
	this->receiver = receiver;
}


MyCommand::~MyCommand()
{
}

void MyCommand::exec() {
	receiver->action();
}
