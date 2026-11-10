#include "Tableau.h"
#include<iostream>
using namespace std;

Tableau::Tableau(int T)
{
	this->taille = T;
	tab = new double[T];
	for (int i = 0;i < T;i++) {
		this->tab[i] = 0;
	}
}

Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	tab = new double[T.taille];
	for (int i = 0;i < taille;i++) {
		this->tab[i] = T.tab[i];
	}
}

Tableau& Tableau::operator=(const Tableau& T)
{
	if (this != &T) {
		delete[]tab;
		taille = T.taille;
		tab = new double[taille];
		for (int i = 0;i < taille;i++) {
			tab[i] = T.tab[i];
		}
		return *this;
	}
}

void Tableau::afficher() const
{
	for (int i = 0;i < taille;i++) {
		cout << tab[i] << endl;
	}
}

double& Tableau::operator[](int i) //& POUR AUTORISER LA MODIFICATION
{
	if(i>=0 && i<taille){
	return tab[i];
  }
	exit(-1);
}

Tableau::~Tableau()
{
	delete[]tab;
}
