#include <stack>
#include <string>

using namespace std;  

class Editor {
public:
    Editor();

    void realizarCambio(const string& cambio);
    void deshacer();
    void rehacer();
    string verUltimoCambio() const;
    bool estaVacia() const;

private:
    stack<string> pilaCambios;
    stack<string> pilaRehacer;
};

 