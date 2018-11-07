#include "Layer.h"


Layer::Layer() {

}

void Layer::SetNama(string nama)
{
	this->nama = nama;
}


string Layer::GetNama()
{
	return this->nama;
}

void Layer::SetComponent(Component *component)
{
	this->component=component;
}

Component* Layer::GetComponent()
{
	return (this->component);
}

Layer::~Layer(){
	delete this->component;
}