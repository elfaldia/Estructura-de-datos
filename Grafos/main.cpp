#include <limits>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Nodo{
    private:
        string dato;
        vector<pair<Nodo*,int>> references;
    public:
        Nodo(string dato){this -> dato = dato;}
        string getDato(){return this->dato;}
        void setDato(string dato){this-> dato = dato;}
        vector<pair<Nodo*,int>> getReferencias(){return references;}
        void agregarReferencia(Nodo* nodo,int peso){
            references.push_back(make_pair(nodo,peso));
        }
};

int main()
{
    Nodo* nodoA = new Nodo("A");
    Nodo* nodoB = new Nodo("B");
    Nodo* nodoC = new Nodo("C");
    Nodo* nodoD = new Nodo("D");
    Nodo* nodoE = new Nodo("E");
    Nodo* nodoF = new Nodo("F");
    
    nodoA -> agregarReferencia(nodoB,1);
    nodoA -> agregarReferencia(nodoC,2);
    nodoA -> agregarReferencia(nodoD,8);
    
    nodoB -> agregarReferencia(nodoE,3);
    
    nodoC -> agregarReferencia(nodoE,3);
    nodoC -> agregarReferencia(nodoF,8);
    nodoC -> agregarReferencia(nodoD,5);
    
    nodoD -> agregarReferencia(nodoF,12);
    
    nodoE -> agregarReferencia(nodoF,4);

    return 0;
}