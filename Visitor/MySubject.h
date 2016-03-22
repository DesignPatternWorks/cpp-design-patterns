#pragma once
#include "Subject.h"
class MySubject :
	public Subject
{
public:
	MySubject();
	~MySubject();
	void accept(Visitor* visitor) override;
	string getSubject() override;
};

