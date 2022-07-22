#include "Mana.h"
using namespace std;
#include <iostream>

	
	Mana::Mana() 
	{
			
		nb_mana = 100;
		
		
	}

	void  Mana::lancersort()
		{
	
		
		int m_feu = 20; // Initialisation de variable int afin de pouvoir differencier le type d'attaque et le mana à user
		int m_glace = 30; //
   		int m_haki = 45;//
		char Selection; // Sera initialiser  par l'utilisateur afin de traiter la condition switch
		string *choixuser = 0; // Initialisation d'un pointeur qui redirigera le choix de l'utilisateur à partir du switch

		std::string bouledefeu = "Souffle de feu : "; // Variable string pour cree le nom des attaques


		std::string tempeteglacer = "Gele Artique : "; //


		std::string haki = "Haki supreme : "; //

		cout << "A)" << bouledefeu << " utilise " << m_feu << " de  Mana " << endl;  // Faire sortir ces variables 

		cout << "B)" << tempeteglacer << " utilise " << m_glace << " de  Mana " << endl;

		cout << "C)" << haki << " utilise " << m_haki << " de  Mana " << endl;

		cout << " Quelle attaque aller vous choisir ?" << endl;
		cout << " A,B,C " << endl;

		cin >> Selection; // Choisir l'un des trois choix

		switch (toupper(Selection))
		{
		 case 'A':

			choixuser = &bouledefeu; // Pointeur qui prendra l'adresse memoire de la variable boule de feu

			nb_mana -= m_feu; // Appelle de l'attribut membre nb_mana afin de le soustraire à la variable m_feu

			break;

		case 'B':

			choixuser = &tempeteglacer; //

			nb_mana -= m_glace; // 
			break;

		case 'C': 

			choixuser = &haki; //
			nb_mana -= m_haki; //

		}

		cout << " Vous avez donc choisis " << *choixuser << endl;  // Afficher la valeur recuperer de la condition switch


		choixuser = nullptr;
	

		
	}
	 void Mana::afficherEtat() const 
	 {
		cout << " Il vous reste : " << nb_mana << " Point de mana " << endl; 

	}


	int Mana::getMana()const  {


		return nb_mana;

		
	}


	


