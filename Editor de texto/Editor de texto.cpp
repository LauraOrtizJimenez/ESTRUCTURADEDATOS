#include "Editor.h"
#include <iostream>

Editor::Editor() {}

void Editor::realizarCambio(const string& cambio) {
    pilaCambios.push(cambio);
    while (!pilaRehacer.empty()) {
        pilaRehacer.pop();
    }
}

void Editor::deshacer() {
    if (!pilaCambios.empty()) {
        string cambioDeshecho = pilaCambios.top();
        pilaCambios.pop();
        pilaRehacer.push(cambioDeshecho);
    }
    else {
        cout << "No hay cambios para deshacer.\n";
    }
}

void Editor::rehacer() {
    if (!pilaRehacer.empty()) {
        string cambioRehecho = pilaRehacer.top();
        pilaRehacer.pop();
        pilaCambios.push(cambioRehecho);
    }
    else {
        cout << "No hay cambios para rehacer.\n";
    }
}

string Editor::verUltimoCambio() const {
    if (!pilaCambios.empty()) {
        return pilaCambios.top();
    }
    else {
        return "No hay cambios realizados.";
    }
}

bool Editor::estaVacia() const {
    return pilaCambios.empty();
}
