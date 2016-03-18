#include "IProvider.h"
#include "ISender.h"
#include "SendMailFactory.h"
#include "SendSmsFactory.h"
#include <iostream>

void main(int argc, char* argv[]) {
	IProvider* provider = new SendMailFactory();
	ISender* sender = provider->produce();
	sender->send();
	system("pause");
}