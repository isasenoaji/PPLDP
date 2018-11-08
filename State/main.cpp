#include "iostream"
#include "Layer.h"
#include "State.h"
#include "Positive.h"
#include "Negative.h"

using namespace std;

int main() {
	Layer *mylayer = new Layer();
	State *plus = new Positive();
	State *nega = new Negative();

	mylayer->setValue(10);
	cout << mylayer->getValue() << endl;
	mylayer->getCurrentState();
	mylayer->doSomething();
	cout<<mylayer->getValue()<<endl;
	cout << endl;

	mylayer->setLayerState(nega);
	cout << mylayer->getValue() << endl;
	mylayer->getCurrentState();
	mylayer->doSomething();
	cout << mylayer->getValue() << endl;
	cout << endl;

	mylayer->setLayerState(plus);
	cout << mylayer->getValue() << endl;
	mylayer->getCurrentState();
	mylayer->doSomething();
	cout << mylayer->getValue() << endl;


	return 0;
}