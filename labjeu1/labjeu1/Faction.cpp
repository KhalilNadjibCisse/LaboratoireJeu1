#include "Faction.h"

using std::to_string;

Faction::Faction() : attaque(0), defense(0), vie(0), capacite(0)
{
	 attaque = 55;
	 defense = 65;
	 vie = 75;
	 capacite = 55;
	 nom = "Big Faction";
}

std::string Faction::to_string()
{
	std::string info;
	info.append("Nom:" + nom + "\n");
	info.append("Attaque:" + std::to_string(this->getAtt()) + "\n");
	info.append("Defense:" + std::to_string(this->getDef()) + "\n");
	info.append("vie:" + std::to_string(this->getVieTot()) + "\n");
	info.append("Capacoite:" + std::to_string(this->getCapacite()) + "\n");

	return info;
}
