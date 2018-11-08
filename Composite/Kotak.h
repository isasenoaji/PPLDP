#pragma once
#include "String"
#include "Component.h"
using namespace std;

class Kotak:public Component
{
public:
	Kotak();
	void setNama(string nama);
	void printNama();
	void setDesc(string desc);
	string getDesc();
	~Kotak();

private:
	string nama;
	string deskripsi;
};

