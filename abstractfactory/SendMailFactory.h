#pragma once
#include "IProvider.h"
class SendMailFactory : public IProvider
{
public:
	SendMailFactory();
	~SendMailFactory();
	ISender* produce();
};

