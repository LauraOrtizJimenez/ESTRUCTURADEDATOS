#include <iostream>
#include "Clientes.h"

using namespace std;

int main() {
    Clientes cola; 
    int opcion;
    int cliente;

    while (true) {
        cout << "\n---- Menu de Gestion de Taquilla de Cine ----\n";
        cout << "1. Agregar cliente\n";
        cout << "2. Atender cliente\n";
        cout << "3. Ver siguiente cliente\n";
        cout << "4. Ver tamanio de la cola\n";
        cout << "5. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Introduce el numero del cliente: ";
            cin >> cliente;
            cola.enqueue(cliente);
            break;

        case 2:
            cola.dequeue();
            break;

        case 3:
            cliente = cola.peek();
            if (cliente != -1) {
                cout << "El siguiente cliente a atender es: Cliente " << cliente << endl;
            }
            break;

        case 4:
            cout << "Numero de clientes en la cola: " << cola.tamanioCola() << endl;
            break;

        case 5:
            cout << "Saliendo del sistema...\n";
            return 0;

        default:
            cout << "Opcion invalida. Por favor, selecciona una opción valida.\n";
            break;
        }
    }

    return 0;
}
