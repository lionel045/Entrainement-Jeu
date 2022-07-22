#include "Personnage.h"
#include <iostream>
#include <String>
using namespace std;



 
void Personnage::Attribuernom()
		{
		 
		   cout << " Saisisser votre nom " << endl;
		   cin >> &nom_player1;
		  cout << "Joueur :" <<  &nom_player1 << endl;
		 
		
          }

	void Personnage::recevoirDegats(int nbDegats)
	{
		nb_vie -= nbDegats;

		if (nb_vie <= 0 ) 
		{
		 nb_vie = 0;
		}
	}
	void Personnage::attaquer(Personnage& cible)
	{

		cible.recevoirDegats(m_arme->getDegats());
	}



	void Personnage::boirePotionDeVie(int quantitePotion)
	{
	       nb_vie += quantitePotion;

			 if (nb_vie > 100)
		     {
			   nb_vie = 100;
			  }
			 else
			 {
				 cout << &nom_player1 << " " << " Boit une potion et prend " << quantitePotion << " de vie " << endl;
			 }
	}

	void Personnage::afficherEtat() const
	{
		cout << "Vie: " << nb_vie << endl;

		cout << "Mana: " << m_mana.getMana() << endl;

		m_arme -> Afficher();

		m_mana.afficherEtat();

		

	}

	bool Personnage:: estVivant() const
	{
	 
	return nb_vie > 0;

	}

	void Personnage::lancersort(Personnage& cible)
	{
		cible.m_mana.lancersort();

	}
	Personnage::Personnage() : nom_player1(), nb_vie(100), m_mana()
	{

		
			m_arme = new Arme();


	}


	Personnage::Personnage( string nomArme, int nbDegats): nom_player1(), nb_vie(100), m_mana()
	{
	 	 
		m_arme = new Arme(nomArme, nbDegats);
	
	}

	Personnage::Personnage(Personnage const& personnageACopier) : nb_vie(personnageACopier.nb_vie), m_mana(personnageACopier.m_mana),  nom_player1(personnageACopier.nom_player1), m_arme(0)
	{

		 m_arme = new Arme (*(personnageACopier.m_arme));
	}

	Personnage::~Personnage()
	{
		delete m_arme;

	}

	Personnage& Personnage::operator=(Personnage const& personnageACopier)

	{

		if (this != &personnageACopier)
		{
			nb_vie = personnageACopier.nb_vie;
			m_mana = personnageACopier.m_mana;
			nom_player1 = personnageACopier.nom_player1;

			delete m_arme;

			m_arme = new Arme(*(personnageACopier.m_arme));

		}


		return *this;


	}