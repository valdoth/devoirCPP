#include <fstream>
#include "ListPersonne.h"

using namespace std;


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
            cout << "Personne trouvee: ";
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



// sauver les données dans un fichier excel
void ListPersonne::saveData() 
{
    ofstream outFile;
	// variable pour stocker le nom du fichier
	string fichier;
	cout << "Entrer le nom du fichier excel ou on va va enregistrer le registre: "; 
	cin >> fichier;
    fichier += ".xls"; 
	outFile.open(fichier);
	if (outFile) {
		outFile << "Nom\tPrenom\tAge" << endl;
		for (vector<Personne>::iterator i = registre.begin(); i != registre.end(); i++) 
        {
			outFile << i->getLastname() << "\t" << i->getFirstname() << "\t" << i->getAge() << endl ;
		}
		outFile << endl;
    }
}