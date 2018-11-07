#pragma once
#include "Component.h"
#include "utility"
#include "String"
using namespace std;

class Segitiga:public Component
{
public:
	void setKoordinat(int x, int y);
	pair<int,int> getKoordinat();
	void setNama(string nama);
	void getNama();
private:
	pair<int,int> koordinat;
	string nama;
};

