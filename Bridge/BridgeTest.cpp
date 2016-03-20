#include <iostream>
#include "Sourceable.h"
#include "Bridge.h"
#include "MyBridge.h"
#include "SourceSub1.h"
#include "SourceSub2.h"

void main(int argc, char* argv[]) {
	Bridge* bridge = new MyBridge();
	
	Sourceable* source1 = new SourceSub1();
	bridge->setSource(source1);
	bridge->method();

	Sourceable* source2 = new SourceSub2();
	bridge->setSource(source2);
	bridge->method();

	system("pause");
}