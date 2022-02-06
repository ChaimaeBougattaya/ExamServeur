#pragma once
#include"Serveur.h"
namespace Serv {

	class SearchCompare
	{
	public:
		bool operator()(const Serveur* a, const string b) const
		{
			return a->adresseIP > b;
		}

		bool operator()(const string a, const Serveur* b) const
		{
			return a < b->adresseIP;
		}
	};
}
