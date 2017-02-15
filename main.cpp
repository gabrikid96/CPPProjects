#include <iostream>
#include "persona.h"
#include <string>

using namespace std;

int getOption();
int getSize(Persona *persones);

const int MAXIM = 100;

int main()
{

    int option = getOption();
    Persona *persones[MAXIM];


    while (option != 5){
        switch (option){
            case 1:{//Afegir Persona
                persones[0] = new Persona("Tu tia", 18);
                persones[1] = new Persona("Tu tia", 18);
                cout << getSize(*persones) << endl;
            }break;

            case 2:{//Veure edat

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

int getSize(Persona *persones){
    //TODO : esto no da el size correcto!
    return sizeof(Persona)/sizeof(*persones);
}

