// Exo.cpp : Ce fichier contient#include <iostream>
using namespace std;
#include <iostream>
#include "Personnage.h"
#include "Arme.h"
#include "Mana.h"
#include <String>

	  

		int main()
		{
			
			Personnage vegeta("Epee eteinte", 20);
			Personnage sangoku;

			sangoku = vegeta;
			
			
			sangoku.afficherEtat();
			
		
			
			return 0;
					
		}
