#pragma once
//Nom du projet : TP Carrés animés
//Nom de l'auteur : Podechard Thibault 
//Date de création : 3 Décembre 2024
//Fichier d'en-tête

class CCarre
{
private:
	int sx;
	int sy;
	unsigned int cote;
public:
	//Fonction : Affecte la valeur de sx1 à sx
	//Paramètre(s) d'entré(s) : int sx1
	//Paramètre(s) sortis(s)  : None : Void
	//Valeur de Retour : None
	void Setsx(int sx1);
	//Fonction : Affecte la valeur de sy1 à sy
	//Paramètre(s) d'entré(s) : int sy1
	//Paramètre(s) sortis(s)  : None : Void
	//Valeur de Retour : None
	void Setsy(int sy1);
	//Fonction : Affecte la valeur de cote1 à cote
	//Paramètre(s) d'entré(s) : int cote1
	//Paramètre(s) sortis(s)  : None : Void
	//Valeur de Retour : None
	void Setcote(int cote1);
	//Fonction : Afficher les caractéristiques du carré
	//Paramètre(s) d'entré(s) : None
	//Paramètre(s) sortis(s)  : None : Void
	//Valeur de Retour : None
	void Afficher();

	int Getsx();
	int Getsy();
	unsigned int Getcote();
};
