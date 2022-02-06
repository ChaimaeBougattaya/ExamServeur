#pragma once
#include "Serveur.h"
namespace Serv {
	class ServeurMessagerie :
		public Serveur
	{
	public:
		ServeurMessagerie(string a, int r) :Serveur(a, r)
		{
		}
		void afficher()override;
		~ServeurMessagerie(){}
	};

}
