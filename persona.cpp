#include "persona.h"
#include <string>

Persona::Persona(string nom, int edat)
{
    this->edat = edat;
    this->nom = nom;
}


void Persona::setEdat(int edat){
    this->edat = edat;
}

void Persona::setNom(string nom){
    this->nom = nom;
}

int Persona::getEdat(){
    return this->edat;
}

string Persona::getNom(){
    return this->nom;
}


