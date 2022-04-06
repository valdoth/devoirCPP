#include <string>
#include <iostream>

using namespace std;

class Personne
{
    private:
        string firstname;
        string lastname;
        int age;

    public:
        // constructor and destructor
        Personne();
        Personne(string nom, string prenom, int age);
        ~Personne();

        // getter
        string getLastname();
        string getFirstname();
        int getAge();

        // setter
        void setLastname(string nom);
        void setFirstname(string prenom);
        void setAge(int age);

        // affichage
        void displayPersonne();
};