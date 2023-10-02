#include <iostream>
#include <stack>
#include <cstdlib>
#include <string>
using namespace std;

class Camion{
    private:
        int peso;
        string id;
    public:
        Camion(int peso,string id);
        int getPeso();
};
Camion::Camion(int peso,string id){
    this -> peso = peso;
    this -> id = id;
}
int Camion::getPeso(){
    return this -> peso;
}

int main(){

    int cant = 6 + rand() %10;
    int valor;
    stack<Camion> camiones,aux1,aux2;
    for(int i = 0; i < cant;i++){       
        camiones.push(Camion(rand()%50,to_string(i)));
        cout<<camiones.top().getPeso()<<endl;
    }

    while(!camiones.empty()){
        
        if(camiones.top().getPeso() <= aux1.top().getPeso() || aux1.empty()){
            Camion n = camiones.top();
            aux1.push(n);
            camiones.pop();
        }
        
    }

    return 0;
}