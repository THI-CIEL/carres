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
}