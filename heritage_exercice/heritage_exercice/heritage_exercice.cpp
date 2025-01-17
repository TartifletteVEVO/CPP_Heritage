// heritage_exercice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "vectb.h"
#include "vectok.h"
#include "liste_points.h"

int main()
{
    vect test1;
    vectb test2(10, 12);
    vectok test3(11, 19);
    vectok test4 = test3;
    vectok test5(test4);
    liste_points liste1;

    test1.adr.push_back(5); 
    test2.adr.push_back(26);
    test2.adr.push_back(2);

    liste1.ajouter(point(2, 4));
    liste1.ajouter(point(7, 0));

    cout << test4[0] << endl;
    cout << test4[1] << endl;
    cout << test1[0] << endl;
    cout << test2[2] << endl;
    cout << test2.debut() << endl;
    cout << test2.fin() << endl;
    cout << "----------" << endl;
    liste1.affiche();
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
