#include "MyBridge.h"



MyBridge::MyBridge()
{
}


MyBridge::~MyBridge()
{
}

void MyBridge::method() {
	getSource()->method();
}
