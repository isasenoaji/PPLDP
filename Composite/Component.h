#pragma once
#include "String"

using namespace std;

class Component
{
public:
	Component();
	~Component();
	virtual void getNama()=0;
	virtual void setNama(string nama) = 0;
};

