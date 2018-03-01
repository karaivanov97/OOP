# OOP
// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <clocale>

using namespace std;

class Person {
	const char *name; //указател към неизменяемо съдържание
	int hcm;  //член, изменяем от const функции
	int wkg;
public:
	Person(const char * nme, int h, int w) {
		name = nme; hcm = h; wkg = w;
	}
	const char* getName()const { return name; } //връща const резултат
	int getH()const { return hcm; }
	int getW()const { return wkg; }
	void setH(int h) { hcm = h; }
	void setW(int w) { wkg = w; }
	double bmi()const {
		double t = 0.01*hcm; t *= t;	return wkg / t;
	}
	void sastoqnie() const {
		if (bmi() < 16) {
			cout << "Nedohranen";
		}
		else {
			cout << "Normalno";
		}
		}
	void prn()const {
		cout << "Lichni danni:\nIme:"
			<< name << ", visochina [cm]:" << hcm << ", teglo [kg]:"
			<< wkg << ", indeks na telesna masa:" << bmi() << endl;
	}
};

int main()
{
	setlocale(0, "");
	Person x("MisterX", 185, 67);	x.prn();
	Person Stoyan("Stoyan", 180, 60); Stoyan.prn();
	Person *Rositsa = new Person("Rositsa", 170, 51); Rositsa->prn();
	cout << Rositsa->getH() << endl;
	Rositsa->setH(150);
	cout << Rositsa->getH() << endl;
	cout << Stoyan.getW() << endl;
	Stoyan.setW(20);
	cout << Stoyan.getW() << endl;
	cout << Stoyan.bmi() << endl;
	Stoyan.sastoqnie();
	cout << endl;
	cout << Rositsa->bmi() << endl;
	Rositsa->sastoqnie();

    return 0;
}
