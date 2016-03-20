#include "Bridge.h"



Bridge::Bridge()
{
}


Bridge::~Bridge()
{
}

Sourceable* Bridge::getSource() {
	return source;
}

void Bridge::setSource(Sourceable* source) {
	this->source = source;
}