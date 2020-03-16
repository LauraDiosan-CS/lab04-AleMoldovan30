#pragma once
#include <ostream>

using namespace std;

class Filme
{
    private:
        char* name;
    public:
        Filme();
        Filme(char* name);
        Filme(const Filme& s);
        ~Filme();
        char* getName();
        void setName(char* name);
        Filme& operator = (const Filme& s);
        bool operator == (const Filme& s);
        friend ostream& operator<<(ostream& os, const Filme& s);

};

