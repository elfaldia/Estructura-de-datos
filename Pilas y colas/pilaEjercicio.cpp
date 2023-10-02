#include <iostream>
#include <stack>
#include <random> 
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

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 49);

    int cant = 6 + dis(gen) %10;
    int valor;
    stack<Camion> camiones,aux1,aux2;
    for(int i = 0; i < cant;i++){
      
        camiones.push(Camion(dis(gen),to_string(i)));      
        cout<<camiones.top().getPeso()<<endl;
    }
    cout<<" "<<endl;
    while(!camiones.empty()){
        if(aux1.empty()){
            aux1.push(camiones.top());
            camiones.pop();
        }else{
            if(camiones.top().getPeso() <= aux1.top().getPeso()){
                aux1.push(camiones.top());
                camiones.pop();
            }else{
                while(camiones.top().getPeso() >= aux1.top().getPeso() && !aux1.empty()){
                    aux2.push(aux1.top());
                    aux1.pop();           
                }
                aux1.push(camiones.top());
                camiones.pop();
                while(!aux2.empty()){
                    aux1.push(aux2.top());
                    aux2.pop();
                }
            }    
        }
    }
    
    if(camiones.empty()){
        cout<<"hola";
    }

    while(!aux1.empty()){
        camiones.push(aux1.top());
        aux1.pop();
    }

    return 0;
}