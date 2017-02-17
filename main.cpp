#include <iostream>
#include "persona.h"
#include "conjuntpersones.h"
#include <string>

using namespace std;

int getOption();
int getSize(Persona *persones);
void afegirPersona(Persona ** persones, string nom, int edat);
void mostrarPersones(Persona ** persones);

const int MAXIM = 100;
int numPersones = 0;

int main()
{

    int option = getOption();
    ConjuntPersones *conjunt = new ConjuntPersones();
    while (option != 5){
        string nom;
        int edat;
        switch (option){
            case 1:{//Afegir Persona
                cout << "Digues el nom de la persona: ";
                cin >> nom;
                cout << "Digues la edat de la persona: ";
                cin >> edat;
                Persona *persona = new Persona(nom,edat);
                conjunt->afegirPersona(persona);

            }break;

            case 2:{//Veure edat
                cout << "Digues el nom de la persona que vols veure la seva edat: ";
                cin >> nom;
                conjunt->veureEdat(nom);
            }break;

            case 3:{//Veure persones amb edat det
                cout << "Digues la edat de les persones que vols veure: ";
                cin >> edat;
                conjunt->veurePersonesAmbEdat(edat);
            }break;

            case 4:{//Veure majors de
            cout << "Digues la edat per veure les persones amb edat major o igual: ";
            cin >> edat;
            conjunt->veureMajors(edat);

            }break;
        }
        option = getOption();
    }
    delete conjunt;

    return 0;
}

int getOption(){
    int option;
    cout << "\t[1] Afegir Persona" << endl;
    cout << "\t[2] Veure Edat" << endl;
    cout << "\t[3] Veure persones amb edat determinada" << endl;
    cout << "\t[4] Veure major de" << endl;
    cout << "\t[5] Sortir" << endl;
    cout << "Tria una opció: ";
    cin >> option;
    return option;
}


