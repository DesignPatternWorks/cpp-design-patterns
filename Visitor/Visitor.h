#pragma once

class Subject;

class Visitor
{
public:
	Visitor();
	virtual ~Visitor();
	virtual void visit(Subject* sub) = 0;
};

