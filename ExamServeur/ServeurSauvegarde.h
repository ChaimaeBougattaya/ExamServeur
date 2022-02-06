#pragma once
#include "Serveur.h"
namespace Serv {
	class ServeurSauvegarde :
		public Serveur
	{
	public:
		ServeurSauvegarde(string a,int r):Serveur(a,r)
		{
		}
		void afficher()override;
		~ServeurSauvegarde(){}
	};

}
