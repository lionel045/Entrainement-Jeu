#ifndef Mana_init
#define Mana_init
#pragma once
#include <string>
#include <iostream>


class Mana
{
    public:

		Mana(); // Constructeur
	
		void lancersort();  // Methode pour lancer un sort

		void afficherEtat() const; // Methode constante pour aller recuperer l'etat de du mana
		
		int getMana() const; // Accesseur Pour avoir le mana
		
		
		
	

private:

	int nb_mana;
	





};
#endif