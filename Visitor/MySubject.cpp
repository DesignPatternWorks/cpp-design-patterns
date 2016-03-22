#include "MySubject.h"
#include "Visitor.h"


MySubject::MySubject()
{
}


MySubject::~MySubject()
{
}

void MySubject::accept(Visitor* visitor) {
	visitor->visit(this);
}

string MySubject::getSubject() {
	return "mySubject";
}
