#pragma once
#include "Visitor.h"
class MyVisitor :
	public Visitor
{
public:
	MyVisitor();
	~MyVisitor();
	void visit(Subject* sub) override;
};

