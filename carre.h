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
	//Fonction : Retourne sx
	//Paramètre(s) d'entré(s) : None
	//Paramètre(s) sortis(s)  : sx
	//Valeur de Retour : sx
	int Getsx();
	//Fonction : Retourne sy
	//Paramètre(s) d'entré(s) : None
	//Paramètre(s) sortis(s)  : sy
	//Valeur de Retour : sy
	int Getsy();
	//Fonction : Retourne cote
	//Paramètre(s) d'entré(s) : None
	//Paramètre(s) sortis(s)  : cote
	//Valeur de Retour : cote
	unsigned int Getcote();

	// Fonction : Déplace le carré sans le dessiner. 
	// Les attributs x et y sont modifiés en ajoutant ou retranchant la valeur de saut en fonction de la direction : 
	// Par ex direction nord saut=2 y=y-2 
	// Entrées : 
	//  - direction : vaut 'n' si nord, 's' si sud, 'e' si est, 'w' si west
	//  - saut : nombre de pixels de déplacement du carré 
	// Sortie : Aucune 
	void Deplacer(char direction, int saut);
};
