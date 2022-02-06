#pragma once
#include<iostream>
using namespace std;

namespace Serv {
	class Serveur
	{
	public :
		string adresseIP;
		int tailleRAM;
	public:
		Serveur(string a, int r);
		void detailServeur();
		virtual void afficher() = 0;
		virtual ~Serveur() {

		}
	};
}

