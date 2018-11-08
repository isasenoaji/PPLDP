#include "Kotak.h"
#include "iostream"

using namespace std;

Kotak::Kotak()
{
}

void Kotak::setNama(string nama){
	this->nama=nama;
}

void Kotak::printNama(){
	cout <<this->getDesc() <<endl<<this->nama << endl;
}

void Kotak::setDesc(string desc){
	this->deskripsi = desc;
}

string Kotak::getDesc(){
	return this->deskripsi;
}

Kotak::~Kotak()
{
}
