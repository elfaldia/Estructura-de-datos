#include <vector>
#include <string>
#include <limits>
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

void bellmanFord(vector<Nodo*> nodos, Nodo* origen)
{
    vector<pair<Nodo*,pair<Nodo*,int>>> distancias;
    for(Nodo* nodo:nodos){
        if(nodo == origen){
            distancias.push_back(make_pair(origen,make_pair(origen,0)));
        }else{
            int max = numeric_limit<int>::max();
            distancias.push_back(make_pair(origen,make_pair(origen,0)));
        }
    }
}

int main()
{
    vector<Nodo*> nodos;
    Nodo* nodoA = new Nodo("A");
    nodos.push_back(nodoA);
    Nodo* nodoB = new Nodo("B");
    nodos.push_back(nodoB);
    Nodo* nodoC = new Nodo("C");
    nodos.push_back(nodoC);
    Nodo* nodoD = new Nodo("D");
    nodos.push_back(nodoD);
    Nodo* nodoE = new Nodo("E");
    nodos.push_back(nodoE);
    Nodo* nodoF = new Nodo("F");
    nodos.push_back(nodoF);
    
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