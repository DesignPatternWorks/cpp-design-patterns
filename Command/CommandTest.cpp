#include <iostream>
#include "MyCommand.h"
#include "Invoker.h"
#include "Receiver.h"

void main(int argc, char* argv[]) {
	Receiver* receiver = new Receiver();
	ICommand* cmd = new MyCommand(receiver);
	Invoker* invoker = new Invoker(cmd);

	invoker->action();
	
	system("pause");
}