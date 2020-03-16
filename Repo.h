#pragma once
#include "Filme.h"

class Repo
{
private:
    Filme filme[20];
    int n;
public:
    Repo();
    ~Repo();
    void addElem(Filme s);
    Filme* getAll();
    int getSize();
    
};
