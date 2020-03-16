#include "Repo.h"

Repo::Repo()
{
	this->n = 0;
}
Repo::~Repo()
{
	this->n = 0;
}
void Repo::addElem(Filme s)
{
	this->filme[this->n++] = s;
}

Filme* Repo::getAll()
{
	return this->filme;
}

int Repo::getSize()
{
	return this->n;
}