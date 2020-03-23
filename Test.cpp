#include "Test.h"
#include "Repo.h"
#include <cassert>

void tests() {
	char* nume1 = new char[10], * data1 = new char[10], *gen1 = new char[10];
	char* nume2 = new char[10], * data2 = new char[10], *gen2 = new char[10];

	strcpy_s(nume1, sizeof "Titanic", "Titanic");
	strcpy_s(data1, sizeof "12.02.2020", "12.02.2020");
	strcpy_s(gen1, sizeof "romantic", "romantic");
	Filme s1(nume1, data1, gen1);

	strcpy_s(nume2, sizeof "Nerve", "Nerve");
	strcpy_s(data2, sizeof "12.04.2020", "12.04.2020");
	strcpy_s(gen2, sizeof "actiune", "actiune");
	Filme s2(nume2, data2, gen2);
	Repo repo;
	Filme gestiune[4];
	gestiune[0] = s1;
	gestiune[1] = s2;
	repo.insert(s1);
	repo.insert(s2);

	repo.deleteFilme(s2);
	assert(repo.get_Size() == 1);

	/*char* nume = new char[10], * data = new char[10], * gen = new char[10];
	char* nume3 = new char[10], * data3 = new char[10], * gen3 = new char[10];
	strcpy_s(nume, sizeof "Bambi", "Bambi");
	strcpy_s(data, sizeof "12.05.2020", "12.05.2020");
	strcpy_s(gen, sizeof "animatie", "animatie");
	strcpy_s(nume3, sizeof "Beauty", "Beauty");
	strcpy_s(data3, sizeof "12.01.2020", "12.01.2020");
	strcpy_s(gen3, sizeof "romantic", "romantic");
	Filme s3(nume3, data3, gen3);
	gestiune[0] = s3;
	repo.UpdateFilme(s3, nume, data, gen);
	assert(repo.get_All()[0] == s3);
	*/
	for (int i = 0; i < repo.get_Size(); i++) 
	{
		assert(repo.get_All()[i] == gestiune[i]);
	}
}