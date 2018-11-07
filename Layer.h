#pragma once
#include "Component.h"

class Layer
{
public:
	void SetNama(string nama);
	void GetNama();
	void SetComponent();
	void GetComponent();

private:
	string Nama;
	Component *component;
};

