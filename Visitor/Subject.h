#pragma once

#include <string>
using namespace std;

class Visitor;

class Subject
{
public:
	Subject();
	virtual ~Subject();
	virtual void accept(Visitor* visitor) = 0;
	virtual string getSubject() = 0;
};

