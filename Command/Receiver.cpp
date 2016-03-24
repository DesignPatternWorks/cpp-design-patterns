#include "Receiver.h"
#include <iostream>


Receiver::Receiver()
{
}


Receiver::~Receiver()
{
}

void Receiver::action() {
	std::cout << "command received!" << std::endl;
}
