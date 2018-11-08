#pragma once
#include "State.h"
#include "iostream"

using namespace std;

class State;

class Layer
{
public:
	Layer();
	~Layer();
	int getValue();
	void setValue(int value);
	void whatIsCurrentState();
	void setLayerState(State* state);
	void doSomething();
private:
	State* state;
	int value;
};

