#include <iostream>
#include "Clientes.h"

using namespace std;

Clientes::Clientes() {
    frente = 0;
    fin = 0;
    tamanio = 0;
}

void Clientes::enqueue(int cliente) {
    if (estaLlena()) {
        cout << "Error: La cola está llena. No se puede agregar el cliente " << cliente << ".\n";
    }
    else {
        cola[fin] = cliente;
        fin = (fin + 1) % 5; 
        tamanio++;
        cout << "Cliente " << cliente << " ha sido agregado a la cola.\n";
    }
}

void Clientes::dequeue() {
    if (estaVacia()) {
        cout << "Error: No hay clientes para atender.\n";
    }
    else {
        cout << "Cliente " << cola[frente] << " ha sido atendido.\n";
        frente = (frente + 1) % 5; 
        tamanio--;
    }
}

int Clientes::peek() {
    if (estaVacia()) {
        cout << "Error: La cola está vacía.\n";
        return -1;
    }
    else {
        return cola[frente];
    }
}

bool Clientes::estaVacia() {
    return tamanio == 0;
}

bool Clientes::estaLlena() {
    return tamanio == 5;
}

int Clientes::tamanioCola() {
    return tamanio;
}
