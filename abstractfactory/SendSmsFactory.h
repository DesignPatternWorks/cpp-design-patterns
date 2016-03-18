#pragma once
#include "IProvider.h"
class SendSmsFactory : public IProvider
{
public:
	SendSmsFactory();
	~SendSmsFactory();
	ISender* produce();
};

