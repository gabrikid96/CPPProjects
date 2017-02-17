#ifndef CONJUNTPERSONES_H
#define CONJUNTPERSONES_H
#define "persona.h"
#include <string>

using namespace std;


class ConjuntPersones{

private:
    int numPersones;
    Persona * persones;
public:
    ConjuntPersones(int maxim);
    void afegirPersona(Persona persona);
    void veureEdat(string nom);
    void veurePersonesAmbEdat(int edat);
    void veureMajors(int edat);
    ~ConjuntPersones();
};

#endif // CONJUNTPERSONES_H

