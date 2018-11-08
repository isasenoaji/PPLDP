#include "Layer.h"


Layer::~Layer()
{
}


Layer::Layer() {
	this->state = nullptr;
}

int Layer::getValue()
{
	return this->value;
}

void Layer::setValue(int value)
{
	this->value = value;
}

void Layer::getCurrentState()
{
	if (this->state == nullptr) {
		cout << "Currently doesn't have any state yet!" << endl;
		return;
	}
	cout << "Currently in ";
	this->state->what();
	cout << endl;
}

void Layer::setLayerState(State * state)
{
	this->state = state;
}

void Layer::doSomething()
{
	if (this->state == nullptr) {
		cout << "Currently doesn't have any state yet!" << endl;
		return;
	}
	cout << ("Now on ");
	this->state->what();
	cout << " state" << endl;

	this->state->doSomething(this);
}
