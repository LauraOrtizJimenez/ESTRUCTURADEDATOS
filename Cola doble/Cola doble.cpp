#include "Deque.h"

int main() {
    Deque dq;
    int opcion, valor;

    do {
        cout << "\n--- MENU COLA DOBLE DINAMICA ---\n";
        cout << "1. Insertar al frente\n";
        cout << "2. Insertar al final\n";
        cout << "3. Eliminar del frente\n";
        cout << "4. Eliminar del final\n";
        cout << "5. Mostrar la cola\n";
        cout << "6. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Ingrese el valor a insertar al frente: ";
            cin >> valor;
            dq.insertarFrente(valor);
            break;
        case 2:
            cout << "Ingrese el valor a insertar al final: ";
            cin >> valor;
            dq.insertarFinal(valor);
            break;
        case 3:
            dq.eliminarFrente();
            break;
        case 4:
            dq.eliminarFinal();
            break;
        case 5:
            dq.mostrar();
            break;
        case 6:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opcion invalida, intente de nuevo.\n";
        }
    } while (opcion != 6);

    return 0;
}
