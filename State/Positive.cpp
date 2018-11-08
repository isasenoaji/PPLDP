#include "Positive.h"



Positive::Positive()
{
}


Positive::~Positive()
{
}

void Positive::setState(Layer * layer)
{
	layer->setLayerState(this);
}

void Positive::doSomething(Layer* layer)
{
	cout << "Present behaviour now depend on the Positive Class" << endl;
	if (layer->getValue() < 0) {
		layer->setValue(layer->getValue()*-1);
	}
}

void Positive::what()
{
	cout << "Positive";
}

