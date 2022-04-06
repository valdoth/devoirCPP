#include "ListPersonne.h"

ListPersonne::ListPersonne()
{

}

ListPersonne::~ListPersonne()
{

}

// ajouter une personne dans le registre
void ListPersonne::ajouterPersonne(Personne personne)
{
    registre.push_back(personne);
}

// modifier les informations d'une personne dans une registre
void ListPersonne::modifier(Personne personne, Personne remplacer)
{
    for (vector<Personne>::iterator i = registre.begin(); i != registre.end(); i++)
    {
        if (i->getLastname() == personne.getLastname() && i->getFirstname() == personne.getFirstname() && i->getAge() == personne.getAge()) 
        {
           i->setAge(remplacer.getAge());
           i->setLastname(remplacer.getLastname());
           i->setFirstname(remplacer.getFirstname());
        }
    }
}

// supprimer une personne dans le registre
void ListPersonne::supprimerPersonne(Personne personne)
{
    for (vector<Personne>::iterator i = registre.begin(); i != registre.end(); i++)
    {
        if (i->getLastname() == personne.getLastname() && i->getFirstname() == personne.getFirstname() && i->getAge() == personne.getAge()) 
        {
           registre.erase(i);
        }
    }
}

// rechercher une personne dans le registre
void ListPersonne::rechercherPersonne(Personne personne)
{
    for (vector<Personne>::iterator i = registre.begin(); i != registre.end(); i++)
    {
        if (i->getLastname() == personne.getLastname() && i->getFirstname() == personne.getFirstname() && i->getAge() == personne.getAge()) 
        {
            cout << "Personne trouvee: \n";
            i->displayPersonne();
            return;
        }
    }
    cout << "Aucun personne ne correspond a cette recherche\n";
}

// afficher le registre
void ListPersonne::afficherRegistre()
{
    for (vector<Personne>::iterator i = registre.begin(); i != registre.end(); i++)
    {   
        i->displayPersonne();
    }
}