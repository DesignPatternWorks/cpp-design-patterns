#include "Adapter.h"
#include <iostream>


Adapter::Adapter()
{
}


Adapter::~Adapter()
{
}

void Adapter::method1() {
	Source::method1();
}

void Adapter::method2() {
	std::cout << "this is target method" << std::endl;
}
