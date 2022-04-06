#include "ListPersonne.h"

int main()
{
    Personne test1("valdo","tsiaro", 20);
    Personne test2("kiady", "einstein", 34);
    Personne test3("maria", "carrey", 45);

    ListPersonne test;
    
    cout << "Ajouter des personnes dans le registre.\n";
    test.ajouterPersonne(test1);
    test.ajouterPersonne(test3);
    cout << endl;

    cout << "Afficher les personnes dans le registre: \n";
    test.afficherRegistre();
    cout << endl;
    
    cout << "Rechercher dans le fichier.\n";
    test.rechercherPersonne(test2);
    cout << endl;
    
    cout << "Rechercher dans le fichier.\n";
    test.rechercherPersonne(test1);
    cout << endl;
    
    cout << "Afficher les personnes dans le registre: \n";
    test.afficherRegistre();
    cout << endl;

    cout << "Modifier une personne dans le registre.\n";
    test.modifier(test3, test2);
    cout << endl;

    cout << "Afficher les personnes dans le registre: \n";
    test.afficherRegistre();
    cout << endl;

    cout << "Supprimer une personne dans le registre.\n";
    test.supprimerPersonne(test1);
    cout << endl;

    cout << "Afficher les persones dans le registre: \n";
    test.afficherRegistre();
    cout << endl;

    return 0;
}