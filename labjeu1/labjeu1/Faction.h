#pragma once
#include<string>

using std::string;
using std::to_string;

class Faction
{
private:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string 	nom = "Big Faction";

public:
	Faction();
	~Faction();

	int getAtt() { return attaque; }
	int getDef() { return defense; }
	int getVieTot() { return vie; }
	int getCapacite() { return capacite; }
	string getNom() { return nom; }

	virtual std::string to_string();
};

