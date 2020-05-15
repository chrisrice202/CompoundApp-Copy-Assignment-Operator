#pragma once
#include <iostream>

using namespace std;

class Element
{
private:
	string _symbol;
	int _atomicNum;
	float _atomicWeight;
	int _amount = 0;

public:
	Element() {};
	Element(string symbol, int num, float weight) {

		_symbol = symbol;
		_atomicNum = num;
		_atomicWeight = weight;

	}

	void setAmount(int amount) {
		_amount = amount;
	}

	int getAmount() {
		return _amount;
	}

	string getSymbol() {
		return _symbol;
	}

	int getAtomicNum() {
		return _atomicNum;
	}

	float getAtomicWieght() {
		return _atomicWeight;
	}

	void PrintElement() {

		cout << _symbol << " with the Atomic Number " << _atomicNum << " and the Weight " << _atomicWeight;

	}

};

