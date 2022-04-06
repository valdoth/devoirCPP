#include "Personne.h"

Personne::Personne()
{
    
}

Personne::Personne(string nom, string prenom, int age)
{
    this->lastname = nom;
    this->firstname = prenom;
    this->age = age;
}

Personne::~Personne()
{

}

string Personne::getLastname() 
{
    return lastname;
}

string Personne::getFirstname()
{
    return firstname;
}

int Personne::getAge()
{
    return age;
}

void Personne::setLastname(string nom)
{
    lastname = nom;
}

void Personne::setFirstname(string prenom)
{
    firstname = prenom;
}

void Personne::setAge(int ages)
{
    age = ages;
}

// afficher les informations de la personne
void Personne::displayPersonne()
{   
    cout << getLastname() << " " << getFirstname() << ", " << getAge() << " ans" << endl;
}