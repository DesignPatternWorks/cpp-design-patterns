#include "SendMailFactory.h"
#include "MailSender.h"


SendMailFactory::SendMailFactory()
{
}


SendMailFactory::~SendMailFactory()
{
}

ISender* SendMailFactory::produce() {
	return new MailSender();
}