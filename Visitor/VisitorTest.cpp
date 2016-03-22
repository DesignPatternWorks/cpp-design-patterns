#include <iostream>
#include "MyVisitor.h"
#include "MySubject.h"

void main(int argc, char* argv[]) {
	Visitor* visitor = new MyVisitor();
	Subject* sub = new MySubject();
	sub->accept(visitor);
	system("pause");
}