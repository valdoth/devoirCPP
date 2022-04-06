#include "Personne.h"
#include <vector>

class ListPersonne
{
    private:
        vector<Personne> registre; 

    public:
        ListPersonne();
        ~ListPersonne();
        
        void ajouterPersonne(Personne personne);
        void modifier(Personne personne, Personne remplacer);
        void supprimerPersonne(Personne personne);
        void rechercherPersonne(Personne personne);
        void afficherRegistre();

};