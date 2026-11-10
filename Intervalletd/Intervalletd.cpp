// Intervalletd.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Tableau.h"
#include"Tableauborne.h"
using namespace std;
int main()
{
	Tableau T1(3);

	T1[0] = 1;
	T1[1] = 2;
	T1[2] = 3;
	T1.afficher();

	Tableau T2 = T1;//constructeur de copie

	Tableau T3(5);//operator=
	T3 = T1;

	Tableauborne tab(4, 10, 30);
	for (int i = 0;i < 4;i++) {
		cout << tab[i] << endl;
	}
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
