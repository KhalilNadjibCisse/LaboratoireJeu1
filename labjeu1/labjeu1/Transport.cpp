#include "Transport.h"

Transport::Transport() :Vaisseau()
{
	vie = 100;
	defense = 10;
	attaque = 25;
	capacite = 95;
	nom = "Big Transport";
	niveau = 1;
	exp = 75;
}

Transport::~Transport()
{

}

string Transport::to_string()
{
	std::string info = Vaisseau::to_string();
	info.append("\n Je suis un vaisseau de type transport");
	return info;
}
