#ifndef DEF_ARME
#define DEF_ARME
#include <string>
#include <iostream>
class Arme
{
	public:

		Arme(); // constructeur

		Arme(std::string nom, int degats); // Attribut

		void changer(std::string nonArme, int nbDegats);

		void Afficher() const;
		int getDegats() const;


        private:

		std::string  m_nom;
		int m_Degats;


};

#endif
