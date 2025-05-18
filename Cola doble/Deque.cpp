#include "Deque.h"

Nodo::Nodo(int valor) {
    dato = valor;
    siguiente = anterior = nullptr;
}

Deque::Deque() {
    frente = final = nullptr;
}

Deque::~Deque() {
    while (!estaVacia()) {
        eliminarFrente();
    }
}

bool Deque::estaVacia() const {
    return frente == nullptr;
}

void Deque::insertarFrente(int valor) {
    Nodo* nuevo = new Nodo(valor);
    if (estaVacia()) {
        frente = final = nuevo;
    }
    else {
        nuevo->siguiente = frente;
        frente->anterior = nuevo;
        frente = nuevo;
    }
    cout << "Insertado al frente: " << valor << endl;
}

void Deque::insertarFinal(int valor) {
    Nodo* nuevo = new Nodo(valor);
    if (estaVacia()) {
        frente = final = nuevo;
    }
    else {
        final->siguiente = nuevo;
        nuevo->anterior = final;
        final = nuevo;
    }
    cout << "Insertado al final: " << valor << endl;
}

void Deque::eliminarFrente() {
    if (estaVacia()) {
        cout << "La cola está vacía.\n";
        return;
    }
    Nodo* temp = frente;
    frente = frente->siguiente;
    if (frente) {
        frente->anterior = nullptr;
    }
    else {
        final = nullptr;  
    }
    cout << "Eliminado del frente: " << temp->dato << endl;
    delete temp;
}

void Deque::eliminarFinal() {
    if (estaVacia()) {
        cout << "La cola está vacía.\n";
        return;
    }
    Nodo* temp = final;
    final = final->anterior;
    if (final) {
        final->siguiente = nullptr;
    }
    else {
        frente = nullptr;  
    }
    cout << "Eliminado del final: " << temp->dato << endl;
    delete temp;
}

void Deque::mostrar() const {
    if (estaVacia()) {
        cout << "La cola está vacía.\n";
        return;
    }
    Nodo* temp = frente;
    cout << "Cola doble: ";
    while (temp) {
        cout << temp->dato << " ";
        temp = temp->siguiente;
    }
    cout << endl;
}
