//Nom du projet : TP Carr�s anim�s
//Nom de l'auteur : Podechard Thibault 
//Date de cr�ation : 3 D�cembre 2024
//Fichier source des fonctions

#include <iostream>
#include <conio.h>
#include "carre.h"
using namespace std;

void CCarre::Setsx(int sx1)
{
	sx = sx1;
}
void CCarre::Setsy(int sy1)
{
	sy = sy1;
}
void CCarre::Setcote(int cote1)
{
	cote = cote1;
}
void CCarre::Afficher()
{
	cout << "Proprietes du carre : \n   - Longueur : " << sx << "\n   - Hauteur : " << sy << "\n   - Longueur du cote : " << cote << "\n";
}
