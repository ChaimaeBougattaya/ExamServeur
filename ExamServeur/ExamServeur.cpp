// ExamServeur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Serveur.h"
#include"ServeurImpression.h"
#include"ServeurMessagerie.h"
#include"ServeurSauvegarde.h"
#include"ServeurWEB.h"
#include"GigaHub.h"
using namespace Serv;
int main()
{
    Serveur* s = new ServeurWEB("132:544:765", 64);
    Serveur* s1 = new ServeurMessagerie("200:876:111", 32);
    Serveur* s2 = new ServeurImpression("300:100:300", 4);

    GigaHub* Giga = new GigaHub();
    Giga->addServeur(*s);
    Giga->addServeur(*s1);
    Giga->addServeur(*s2);

    Giga->for_each();
    
    Giga->Rank_Server();

    Giga->for_each();


    Giga->Rech_Bin("200:876:111");
    Giga->Rech_Bin("100:100:100");
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
