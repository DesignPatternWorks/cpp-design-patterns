#include "Adapter.h"
#include "Adapter2.h"
#include "Source.h"
#include "ITarget.h"
#include <iostream>

void main(int argc, char* argv[]) {
	ITarget* target = new Adapter();
	target->method1();
	target->method2();

	std::cout << "------------------" << std::endl;

	target = new Adapter2();
	target->method1();
	target->method2();

	system("pause");
}