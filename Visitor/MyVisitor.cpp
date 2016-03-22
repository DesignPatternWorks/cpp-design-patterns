#include "MyVisitor.h"
#include "Subject.h";
#include <iostream>
using namespace std;

MyVisitor::MyVisitor()
{
}


MyVisitor::~MyVisitor()
{
}

void MyVisitor::visit(Subject* sub) {
	cout << "visit the subject: " << sub->getSubject() << endl;
}
