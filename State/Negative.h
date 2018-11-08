#pragma once
#include "State.h"
#include "Layer.h"
class Negative :
	public State
{
public:
	Negative();
	~Negative();
	void setState(Layer* layer);
	void doSomething(Layer* layer);
	void what();
};

