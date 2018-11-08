#pragma once
#include "Layer.h"
class Layer;

class State
{
public:
	State();
	~State();
	virtual void setState(Layer *layer)=0;
	virtual void doSomething(Layer *layer) = 0;
	virtual void what() = 0;
};

