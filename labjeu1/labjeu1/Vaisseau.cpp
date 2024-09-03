#include "Vaisseau.h"

using std::to_string;

Vaisseau :: Vaisseau():valeurMarchande(0), attaque(0), defense(0), vie(0), capacite(0), niveau(1), exp(0)
{
	
}

Vaisseau::Vaisseau(string _nom):valeurMarchande(100), attaque(0), defense(0), vie(0), capacite(0), niveau(1), exp(0)
{
	nom = _nom;
}

Vaisseau::Vaisseau(string _nom, int _niveau, int _exp):valeurMarchande(100), attaque(0), defense(0), vie(0), capacite(0)
{
	niveau = _niveau;
	exp = _exp;
}

std::string Vaisseau::to_string()
{
	std::string info;
	info.append("Nom:" + nom + "\n");
	info.append("Attaque:" + std::to_string(this->getAtt()) + "\n");
	info.append("Attaque:" + std::to_string(this->getDef()) + "\n");
	info.append("Attaque:" + std::to_string(this->getVieTot()) + "\n");

	return info;
}