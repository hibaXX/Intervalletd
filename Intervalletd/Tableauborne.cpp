
#include "Tableauborne.h"
using namespace std;
#include<iostream>

Tableauborne::Tableauborne(int n, double inf, double sup):Tableau(n)
{
	this->borneinf = inf;
	this->bornesup = sup;
}

double& Tableauborne::operator[](int i) const
{
	if (i >= 0 && i < taille) {
		return tab[i];
	}
	exit(-1);
}
