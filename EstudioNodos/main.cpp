#include <iostream>
#include "Nodo.h"
#include "Persona.h"

using namespace std;

int main(){

    Persona* p1 = new Persona("Diego","Martinez",21);
    Persona* p2 = new Persona("Elgran","Etoile",19);
    Persona* p3 = new Persona("Trinidad","Ardiles",20);

    Nodo* n1 = new Nodo();
    Nodo* n2 = new Nodo();
    Nodo* aux = NULL;
    n1 -> setPersona(p1);
    n2 -> setPersona(p2);
    n1 -> setSiguiente(n2);

    cout<< n1 -> getPersona() -> getNombre()<<endl;
    cout<< n1 -> getSiguiente() -> getPersona() -> getNombre()<<endl;

    return 0;
}