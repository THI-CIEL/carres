#pragma once
//Nom du projet : TP Carr�s anim�s
//Nom de l'auteur : Podechard Thibault 
//Date de cr�ation : 3 D�cembre 2024
//Fichier d'en-t�te

class CCarre
{
private:
	int sx;
	int sy;
	unsigned int cote;
public:
	//Fonction : Affecte la valeur de sx1 � sx
	//Param�tre(s) d'entr�(s) : int sx1
	//Param�tre(s) sortis(s)  : None : Void
	//Valeur de Retour : None
	void Setsx(int sx1);
	//Fonction : Affecte la valeur de sy1 � sy
	//Param�tre(s) d'entr�(s) : int sy1
	//Param�tre(s) sortis(s)  : None : Void
	//Valeur de Retour : None
	void Setsy(int sy1);
	//Fonction : Affecte la valeur de cote1 � cote
	//Param�tre(s) d'entr�(s) : int cote1
	//Param�tre(s) sortis(s)  : None : Void
	//Valeur de Retour : None
	void Setcote(int cote1);
	//Fonction : Afficher les caract�ristiques du carr�
	//Param�tre(s) d'entr�(s) : None
	//Param�tre(s) sortis(s)  : None : Void
	//Valeur de Retour : None
	void Afficher();
	//Fonction : Retourne sx
	//Param�tre(s) d'entr�(s) : None
	//Param�tre(s) sortis(s)  : sx
	//Valeur de Retour : sx
	int Getsx();
	//Fonction : Retourne sy
	//Param�tre(s) d'entr�(s) : None
	//Param�tre(s) sortis(s)  : sy
	//Valeur de Retour : sy
	int Getsy();
	//Fonction : Retourne cote
	//Param�tre(s) d'entr�(s) : None
	//Param�tre(s) sortis(s)  : cote
	//Valeur de Retour : cote
	unsigned int Getcote();

	// Fonction : D�place le carr� sans le dessiner. 
	// Les attributs x et y sont modifi�s en ajoutant ou retranchant la valeur de saut en fonction de la direction : 
	// Par ex direction nord saut=2 y=y-2 
	// Entr�es : 
	//  - direction : vaut 'n' si nord, 's' si sud, 'e' si est, 'w' si west
	//  - saut : nombre de pixels de d�placement du carr� 
	// Sortie : Aucune 
	void Deplacer(char direction, int saut);
};
