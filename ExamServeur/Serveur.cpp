#include "Serveur.h"

Serv::Serveur::Serveur(string a, int r)
{
	this->adresseIP = a;
	this->tailleRAM = r;
}

void Serv::Serveur::detailServeur()
{
	cout << "@IP : " << this->adresseIP << "  RAM : " << this->tailleRAM;
}

