#include <iostream>
#include "Editor.h"

using namespace std;

int main() {
    Editor editor;  
    string cambio;
    int opcion;

    do {
        cout << "\nEditor de texto - Menu:\n";
        cout << "1. Realizar cambio\n";
        cout << "2. Deshacer\n";
        cout << "3. Rehacer\n";
        cout << "4. Ver ultimo cambio\n";
        cout << "0. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;
        cin.ignore(); 

        switch (opcion) {
        case 1:
            cout << "Introduce el cambio: ";
            getline(cin, cambio); 
            editor.realizarCambio(cambio);
            cout << "Cambio realizado con exito.\n";
            break;

        case 2:
            editor.deshacer();
            cout << "Ultimo cambio deshecho (si lo habia).\n";
            break;

        case 3:
            editor.rehacer();
            cout << "Ultimo cambio rehecho (si lo habia).\n";
            break;

        case 4:
            cout << "Ultimo cambio realizado: " << editor.verUltimoCambio() << endl;
            break;

        case 0:
            cout << "Saliendo del editor...\n";
            return 0;

        default:
            cout << "Opcion invalida. Por favor, elige una opción valida.\n";
            break;
        }
    } while (opcion != 0);

    return 0;
}
