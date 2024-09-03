#include "Guerre.h"

Guerre::Guerre() :Vaisseau()
{
	vie = 150;
	defense = 30;
	attaque = 75;
	capacite = 65;
	nom = "BWarrior";
	niveau = 1;
	exp = 80;
}

Guerre::~Guerre()
{

}

string Guerre::to_string()
{
	std::string info = Vaisseau::to_string();
	info.append("\n Je suis un vaisseau de type guerre");
	return info;
}