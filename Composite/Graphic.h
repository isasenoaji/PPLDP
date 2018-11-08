#pragma once
#include "Component.h"
#include "iostream"
#include "String"
#include "vector"

using namespace std;

class Graphic : public Component
{
public:
	Graphic();
	~Graphic();
	void addComponent(Component* component);
	Component* getComponent(int idx);
	void setNama(string nama);
	void printNama();

private:
	vector <Component*> component;
	string nama;

};

