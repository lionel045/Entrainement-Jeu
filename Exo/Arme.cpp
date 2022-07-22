#include "Arme.h"

using namespace std;


	Arme::Arme() : m_nom("Epee tuba"), m_Degats(10)
	{

	}

	Arme::Arme(string nom, int Degats) : m_nom(nom), m_Degats(Degats)
	{

	}

	void Arme::changer(string nom, int Degats)
	{
		m_nom = nom;
		m_Degats = Degats;

	}

	void Arme::Afficher() const 
	{
	   cout << "Arme : " << m_nom << "Degats : " << m_Degats << endl;
	}

	int Arme::getDegats() const
	{

		return m_Degats;
	
	
	}
