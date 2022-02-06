#pragma once
#include"Serveur.h"
namespace Serv{

	class Compare
	{
	public:
		bool operator()(const Serveur* a, const Serveur* b) const
		{
			return a->tailleRAM >= b->tailleRAM;
		}
	};

}