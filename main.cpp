#include <iostream>

using namespace std;

int getOption();

int main()
{

    int option = getOption();

    while (option != 5){
        switch (option){
            case 1:{//Afegir Persona

            }break;

            case 2:{//Veure edat

            }break;

            case 3:{//Veure persones amb edat det

            }break;

            case 4:{//Veure majors de

            }break;
        }
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

