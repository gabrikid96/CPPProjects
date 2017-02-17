#ifndef CONJUNTPERSONES_H
#define CONJUNTPERSONES_H
#define MAX 100
#include "persona.h"
#include <string>

using namespace std;


class ConjuntPersones{


    private:
        int numPersones;
        Persona * persones[MAX];
    public:
        ConjuntPersones();
        void afegirPersona(Persona *persona);
        void veureEdat(string nom);
        void veurePersonesAmbEdat(int edat);
        void veureMajors(int edat);
        ~ConjuntPersones();
};

#endif // CONJUNTPERSONES_H

