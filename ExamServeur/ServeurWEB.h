#pragma once
#include "Serveur.h"
namespace Serv {
	class ServeurWEB :
		public Serveur
	{
	public :
		ServeurWEB(string a, int r):Serveur(a,r)
		{
		}
		void afficher() override;
		~ServeurWEB(){}
	};
}

