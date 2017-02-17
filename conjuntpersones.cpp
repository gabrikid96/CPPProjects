#include "conjuntpersones.h"
#include <iostream>
#include <string>

ConjuntPersones::ConjuntPersones(){
    this->numPersones = 0;
}

void ConjuntPersones::afegirPersona(Persona *persona){
    if(this->numPersones < MAX){
        this->persones[this->numPersones] = persona;
        this->numPersones++;
    }
}

void ConjuntPersones::veureEdat(string nom){
    for (int i = 0; i < this->numPersones; i++){
        if (this->persones[i]->getNom().compare(nom) == 0){
            cout << "La edat de " << nom << " es " << this->persones[i]->getEdat() << endl;
            return;
        }
    }
}
void ConjuntPersones::veurePersonesAmbEdat(int edat){
    cout << "=======================================" << endl;
    cout << "Persones amb " << edat << " anys" << endl;

    for (int i = 0; i < this->numPersones; i++){
        if (this->persones[i]->getEdat() == edat){
            cout << "\t-" << this->persones[i]->getNom() << endl;
        }
    }
    cout << "=======================================" << endl;
}
void ConjuntPersones::veureMajors(int edat){
    cout << "=======================================" << endl;
    cout << "Persones amb mes de " << edat << " anys" << endl;

    for (int i = 0; i < this->numPersones; i++){
        if (this->persones[i]->getEdat() >= edat){
            cout << "\t-" << this->persones[i]->getNom() << endl;
        }
    }
    cout << "=======================================" << endl;
}
ConjuntPersones::~ConjuntPersones(){
    cout << "Esborrant persones" << endl;
    for (int i=0; i<numPersones; i++) {
        delete persones[i];
    }
}
