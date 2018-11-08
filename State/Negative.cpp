#include "Negative.h"



Negative::Negative()
{
}


Negative::~Negative()
{
}

void Negative::setState(Layer * layer)
{
	layer->setLayerState(this);
}

void Negative::doSomething(Layer* layer)
{
	cout << "Present behaviour now depend on the Negative Class" << endl;
	layer->setValue(-1 * layer->getValue());
}

void Negative::what() {
	cout << "Negative";
}