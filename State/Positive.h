#pragma once
#include "State.h"
#include "Layer.h"
class Positive :
	public State
{
public:
	Positive();
	~Positive();
	void setState(Layer* layer);
	void doSomething(Layer* layer);
	void what();
};

