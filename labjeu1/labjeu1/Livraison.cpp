#include "Livraison.h"

Livraison::Livraison():Vaisseau()
{
	vie = 70;
	defense = 50;
	attaque = 50;
	capacite = 100;
	nom = "Drop Fast";
	niveau = 1;
	exp = 30;
}

Livraison::~Livraison()
{

}

string Livraison::to_string()
{
	std::string info = Vaisseau::to_string();
	info.append("\n Je suis un vaisseau de type guerre");
	return info;
}
