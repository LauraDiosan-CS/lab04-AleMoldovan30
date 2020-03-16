#include "Filme.h"
#include <cstddef>
#include <string.h>
#include <ostream>
#include <iostream>
using namespace std;

Filme::Filme() 
{
	this->name = NULL;
}

Filme::Filme(char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, 1 + strlen(name), name);
}

Filme::Filme(const Filme& s)
{
	//cout << "Constructor copiat" << endl;
	this->name = new char[strlen(s.name) + 1];
	strcpy_s(this->name, 1 + strlen(s.name), s.name);
}

Filme::~Filme()
{
	if (this->name) {
		delete[] this->name;
		this->name = NULL;
	}
}

char* Filme::getName() 
{
	return this->name;
}

void Filme::setName(char* name)
{
	if (this->name) {
		delete[] this->name;
	}
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}


Filme& Filme::operator=(const Filme& s) 
{
	this->setName(s.name);
	return *this;
}

bool Filme:: operator==(const Filme& s) 
{
	return strcmp(this->name, s.name) == 0;
}

ostream& operator<<(ostream& os, const Filme& s)
{
	os << s.name;
	return os;
}
