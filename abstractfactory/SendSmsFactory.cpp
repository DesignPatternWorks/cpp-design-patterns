#include "SendSmsFactory.h"
#include "SmsSender.h"


SendSmsFactory::SendSmsFactory()
{
}


SendSmsFactory::~SendSmsFactory()
{
}

ISender* SendSmsFactory::produce() {
	return new SmsSender();
}
