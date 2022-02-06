#include "GigaHub.h"
#include"Compare.h"
#include"SearchCompare.h"
#include<algorithm>
void Serv::GigaHub::for_each()
{
	cout << "\n *********  GigaHub  ********** \n";
	for (int unsigned i = 0; i < this->Serveurs.size(); i++)
	{
		Serveurs[i]->afficher();
		cout << endl;
	}
}

void Serv::GigaHub::Rech_Bin(string adresseIP)
{
	if (binary_search(this->Serveurs.begin(), this->Serveurs.end(), adresseIP, SearchCompare()) == true)
		cout << "\n\nserveur qui a  @:" << adresseIP << "  existe";
	else
		cout << "\n\nserveur qui a  @:" << adresseIP << "  n'existe pas";
}

void Serv::GigaHub::Rank_Server()
{
	sort(this->Serveurs.begin(), this->Serveurs.end(), Compare());
}
