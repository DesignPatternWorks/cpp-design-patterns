#include "Adapter2.h"
#include <iostream>


Adapter2::Adapter2()
{
}


Adapter2::~Adapter2()
{
}

void Adapter2::method1() {
	source.method1();
}

void Adapter2::method2() {
	std::cout << "this is target method" << std::endl;
}
