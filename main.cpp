#include <iostream>
#include "Repo.h"
#include "test.h"
#include "Filme.h"

using namespace std;

int main()
{
    char name[100];
    cout << "Dati titlul filmului: ";
    cin >> name;

    //Filme s1(name);
    //cout << s1;
    Repo repo;
    for (int i = 0;i < repo.getSize();i++)
    {
        cout << repo.getAll()[i];
    }
}

