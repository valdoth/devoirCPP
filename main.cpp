#include "ListPersonne.h"



int main()
{
    Personne test1("valdo","tsiaro", 17);
    Personne test2("kiady", "einstein", 34);
    Personne test3("maria", "carrey", 55);
    Personne test4("James", "rodri", 43);
    Personne test5("avril", "curry", 18);
    Personne test6("Toky", "ronaldo", 45);

    ListPersonne test;
    
    cout << "Ajouter des personnes dans le registre.\n";
    test.ajouterPersonne(test1);
    test.ajouterPersonne(test3);
    test.ajouterPersonne(test4);
    test.ajouterPersonne(test5);
    test.ajouterPersonne(test6);
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

    // enregistrer le registre dans un fichier excel
    test.saveData();


    return 0;
}
