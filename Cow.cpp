
#define _CRT_SECURE_NO_WARNINGS
#include "Cow.h"
#include <iostream>
using namespace std;

Cow::Cow() {
	name = new char[1];
	strcpy(name, "");
	hobby = new char[1];
	strcpy(hobby, "");
	weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt) {
	name = new char[strlen(nm) + 1];
	strcpy(name, nm);
	hobby = new  char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow & c) {
	name = new char[strlen(c.name) + 1];
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow() {
	delete[] hobby;
}

Cow & Cow::operator=(const Cow & c) {
	if (this == &c) // object assigned to itself
		return *this;
	delete[] name;
	delete[] hobby;
	name = new char[strlen(c.name) + 1];
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const {
	cout << "\nName: " << name;
	if (hobby == NULL)
	{
		cout << "\nHobby:  [empty - please initialize]";
	}
	else
	{
		cout << "\nHobby: " << hobby;
		cout << "\nWeight: " << weight << endl;
	}
}