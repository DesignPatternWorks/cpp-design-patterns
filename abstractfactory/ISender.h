#pragma once
class ISender
{
public:
	ISender();
	virtual ~ISender();
	virtual void send() = 0;
};

