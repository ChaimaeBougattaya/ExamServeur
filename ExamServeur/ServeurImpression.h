#pragma once
#include "Serveur.h"
namespace Serv {
	class ServeurImpression :
		public Serveur
	{
	public:
		ServeurImpression(string a, int r) :Serveur(a, r) 
		{
		}
		void afficher()override;
		~ServeurImpression(){}
	};
}

