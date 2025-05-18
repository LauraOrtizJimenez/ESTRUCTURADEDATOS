#pragma once
class Clientes {
private:
    int cola[5]; 
    int frente;  
    int fin;     
    int tamanio; 

public:
   
    Clientes();

    // Métodos de la cola
    void enqueue(int cliente);
    void dequeue();
    int peek();
    bool estaVacia();
    bool estaLlena();
    int tamanioCola();
};

