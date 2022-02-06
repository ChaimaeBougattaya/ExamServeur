#pragma once
#include<iostream>
#include<vector>
#include"Serveur.h"
using namespace std;
namespace Serv {
	class GigaHub
	{
	private:
		vector<Serveur*> Serveurs;

	public:
		GigaHub() 
		{
			this->Serveurs = vector<Serveur*>();
		}
		void addServeur(Serveur& s) {
			this->Serveurs.push_back(&s);
		}

		void for_each();
		void Rech_Bin(string adresseIP);
		void Rank_Server();
		~GigaHub() {
			for (int unsigned i = 0; i < Serveurs.size(); i++)delete Serveurs[i];
		}
	};
}

