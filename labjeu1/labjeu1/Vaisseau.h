#pragma once
#include<string>

using std::string;
using std::to_string;


class Vaisseau
{
private:
	int valeurMarchande;

protected:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;
	int niveau;
	int exp;

public:
	Vaisseau();
	Vaisseau(string _nom);
	Vaisseau(string _nom, int _niveau, int _exp);
	~Vaisseau();

	int getAtt() { return attaque; }
	int getDef() { return defense; }
	int getVieTot() { return vie; }

	virtual std::string to_string();

};

