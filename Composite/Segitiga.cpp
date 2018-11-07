#include "Segitiga.h"
#include "iostream"

using namespace std;

void Segitiga::setKoordinat(int x, int y)
{
	this->koordinat=make_pair(x,y);
}


pair<int,int> Segitiga::getKoordinat()
{
	return this->koordinat;
}

void Segitiga::setNama(string nama)
{
	this->nama=nama;
}

void Segitiga::getNama()
{
	cout << this->nama << endl;
}