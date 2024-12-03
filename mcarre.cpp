//Nom du projet : TP Carrés animés
//Nom de l'auteur : Podechard Thibault 
//Date de création : 3 Décembre 2024
//Fichier Main

#include <iostream>
#include <conio.h>
#include "carre.h"
using namespace std;

int main()
{
	CCarre carre_1;

	carre_1.Setsx(8);
	carre_1.Setsy(4);
	carre_1.Setcote(20);
	carre_1.Afficher();

	cout << "\nLongueur : " << carre_1.Getsx() << "\nHauteur : " << carre_1.Getsy() << "\nCote : " << carre_1.Getcote() << "\n";

	carre_1.Deplacer('w', 3);

	cout << "\nLongueur : " << carre_1.Getsx() << "\nHauteur : " << carre_1.Getsy() << "\nCote : " << carre_1.Getcote() << "\n";
}