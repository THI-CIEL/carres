//Nom du projet : TP Carrés animés
//Nom de l'auteur : Podechard Thibault 
//Date de création : 3 Décembre 2024
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

int CCarre::Getsx()
{
	return sx;
}
int CCarre::Getsy()
{
	return sy;
}
unsigned int CCarre::Getcote()
{
	return cote;
}

void CCarre::Deplacer(char direction, int saut)
{
	switch(direction)
	{
	case 'n':
		this->sy -= saut;
		break;
	case 's':
		this->sy += saut;
		break;
	case 'e':
		this->sx += saut;
		break;
	case 'w':
		this->sx -= saut;
		break;
	} 
}
void CCarre::Deplacer(int dx1, int dy1)
{
	this->sx += dx1;
	this->sy += dy1;
}

CCarre::CCarre()
{
	this->sx = 0;
	this->sy = 0;
	this->cote = 0;
}
CCarre::CCarre(int sx1, int sy1, unsigned int cote1)
{
	this->sx = sx1;
	this->sy = sy1;
	this->cote = cote1;
}

