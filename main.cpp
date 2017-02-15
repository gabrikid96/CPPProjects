#include <iostream>
#include "persona.h"
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
    Persona *persones[MAXIM];


    while (option != 5){
        switch (option){
            case 1:{//Afegir Persona
                string nom;
                int edat;
                cout << "Digues el nom de la persona: ";
                cin >> nom;
                cout << "Digues la edat de la persona: ";
                cin >> edat;
                afegirPersona(persones,nom,edat);
            }break;

            case 2:{//Veure edat
                mostrarPersones(persones);
            }break;

            case 3:{//Veure persones amb edat det

            }break;

            case 4:{//Veure majors de

            }break;
        }
        option = getOption();
    }

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

void afegirPersona(Persona ** persones, string nom, int edat){
    persones[numPersones] = new Persona(nom,edat);
    numPersones++;
}

void mostrarPersones(Persona ** persones){
    string nom;
    int edat;
    cout << "=====================" << endl;
    for (int i = 0; i < numPersones; ++i){
        edat = persones[numPersones]->getEdat();
        nom = persones[numPersones]->getNom();
        cout << "Persona " << i << endl;
        cout << "\tNom: " << nom << endl << "\tEdat: " << edat << endl;
    }
    cout << "=====================" << endl;
}

