#pragma once
#include "ISender.h"

class SmsSender : public ISender
{
public:
	SmsSender();
	~SmsSender();

	void send();
};

