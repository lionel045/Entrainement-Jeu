#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

 #include <string>
 #include "Arme.h"
#include "Mana.h"
class  Personnage

{
	public:
	
		Personnage();
	
	Personnage(std::string nomArme, int nbDegats); //constructeur
	
	Personnage(Personnage const& personnageACopier);

	void recevoirDegats(int nbDegats);
	void Attribuernom();

	void afficherEtat() const;

	void attaquer(Personnage& cible);
	

	void boirePotionDeVie(int quantitePotion);
	
	bool estVivant() const;

	void lancersort(Personnage& cible);

	Personnage& operator=(Personnage const& personnageACopier);
	~Personnage();

	private:
	int nb_vie;
	char nom_player1;
	Arme *m_arme;
	Mana m_mana;
};












#endif // !DEF_PERSONNAGE

#pragma once
