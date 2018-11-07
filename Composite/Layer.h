#pragma once
#include "Component.h"
#include "String"

using namespace std;

class Component;

class Layer
{
public:
	Layer();
	~Layer();
	void SetNama(string nama);
	string GetNama();
	void SetComponent(Component *component);
	Component* GetComponent();

private:
	string nama;
	Component* component;
};

