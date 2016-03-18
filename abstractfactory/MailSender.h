#pragma once
#include "ISender.h"
class MailSender : public ISender
{
public:
	MailSender();
	~MailSender();

	void send();
};

