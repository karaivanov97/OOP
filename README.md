#include "stdafx.h"
#include <iostream>
using namespace std;
class Int {
	int n;
public:
	//Без този конструктор декларацията на масива
	//в main няма да се компилира.
	Int() {
		n = rand() % 10000;
	}
	//Два предефинирани конструктора с по един параметър
	Int(unsigned up) {
		n = rand() % up;
		cout << "fhdjg" << n << endl;
	}
	Int(int n) :n(n) {
	}
	int getN() {
		return n;
	}
};
void main() {
	Int a[10];
	for (int i = 0; i < 10; i++) {
		cout << a[i].getN() << endl;
	}
	Int x(100);
	cout << x.getN() << endl;

	//Ако стойността на параметъра не е unsigned,
	//ще се използва конструкторът с параметър int.
	Int y(30000u);
	cout << y.getN() << endl;

	Int promenliva(1325u);
	cout << promenliva.getN() << endl;
}

