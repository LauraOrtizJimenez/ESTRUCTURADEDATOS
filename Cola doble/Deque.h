#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
    Nodo* anterior;
    Nodo(int valor);
};

class Deque {
private:
    Nodo* frente;
    Nodo* final;

public:
    Deque();
    ~Deque(); 

    void insertarFrente(int valor);
    void insertarFinal(int valor);
    void eliminarFrente();
    void eliminarFinal();
    bool estaVacia() const;
    void mostrar() const;
};

#endif 
   