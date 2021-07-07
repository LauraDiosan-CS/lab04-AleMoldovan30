#include <assert.h>
#include<string.h>
#include "test.h"
#include "Filme.h"

void testFilm()
{
	Filme filme[2];
	char* fil1 = new char[10];
	strcpy_s(fil1, sizeof "Titanic", "Titanic");
	Filme s1(fil1);
	char* fil2 = new char[10];
	strcpy_s(fil2, sizeof "Nerve", "Nerve");
	Filme s2(fil2);

	filme[0] = s1;
	filme[1] = s2;
}

