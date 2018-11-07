#include "Graphic.h"

Graphic::Graphic()
{
}

Graphic::~Graphic()
{
	for (int i = 0; i < this->component.size(); ++i) {
		if (this->component[i] != nullptr) {
			delete this->component[i];
		}
	}
}

void Graphic::addComponent(Component * component)
{
	this->component.push_back(component);
}

Component * Graphic::getComponent(int idx)
{
	if (this->component[idx] != nullptr) {
		return this->component[idx];
	}
	else {
		cout << "Out of index!" << endl;
	}
}


void Graphic::setNama(string nama)
{
	this->nama = nama;
}

void Graphic::getNama()
{
	cout << this->nama << endl;
	for (int i = 0; i < this->component.size(); ++i) {
		this->component[i]->getNama();
	}
}
