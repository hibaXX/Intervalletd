#pragma once
class Tableau
{
protected:
	int taille;
	double* tab;
public:
	Tableau(int);
	Tableau(const Tableau&);
	Tableau& operator=(const Tableau&);
	void afficher()const;
	double& operator[](int i);
	~Tableau();
};

