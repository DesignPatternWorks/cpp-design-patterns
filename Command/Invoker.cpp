#include "Invoker.h"



Invoker::Invoker(ICommand* cmd)
{
	this->cmd = cmd;
}


Invoker::~Invoker()
{
}

void Invoker::action() {
	cmd->exec();
}
