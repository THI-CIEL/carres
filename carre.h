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

	int Getsx();
	int Getsy();
	unsigned int Getcote();
};
