#pragma once
#include "Element.h"

class Compound
{
private:
	Element _elementsIn[10];
	int _arraySize;
	string _name;


public:
	Compound() {};
	Compound(Element elements[], int amounts[], string name) {

		int arraySize = 2;
		_arraySize = arraySize;
		_name = name;

		for (int i = 0; i < arraySize; i++) {

			_elementsIn[i] = Element(elements[i].getSymbol(), elements[i].getAtomicNum(), elements[i].getAtomicWieght());
			_elementsIn[i].setAmount(amounts[i]);

		}

	}

	Compound(const Compound &oldCompound) {
		_arraySize = oldCompound._arraySize;
		_name = oldCompound._name;
		for (int i = 0; i < 10; i++) {
			_elementsIn[i] = oldCompound._elementsIn[i];
		}
	}

	Compound& operator=(const Compound& oldCompound) {
		_arraySize = oldCompound._arraySize;
		_name = oldCompound._name;
		for (int i = 0; i < 10; i++) {
			_elementsIn[i] = oldCompound._elementsIn[i];
		}
		return *this;
	}

	void addElement(Element newElement, int amount) {
		_elementsIn[2] = newElement;
		_elementsIn[2].setAmount(amount);
		_arraySize++;
	}

	void PrintCompound() {

		cout << "Compound " << _name << " is made of:" << endl << endl;
		for (int i = 0; i < _arraySize; i++) {
			cout << _elementsIn[i].getAmount() << " atom(s) of ";
			_elementsIn[i].PrintElement();
			cout << endl << endl;

		}

	}

};

