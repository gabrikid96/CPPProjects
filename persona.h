#ifndef PERSONA_H
#define PERSONA_H
#include <string>

using namespace std;

class Persona
{
private:
    string nom;
    int edat;

public:
    Persona(string nom, int edat);
    string getNom();
    int getEdat();
    void setNom(string nom);
    void setEdat(int edat);
    ~Persona();
};

#endif // PERSONA_H
