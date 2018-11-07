#pragma once
#include "Component.h"

class Graphic
{
public:
	void AddComponent();
	void GetComponent();
	void RemoveComponent();
	
private:
	Component *component;
	string fungsi;
};

