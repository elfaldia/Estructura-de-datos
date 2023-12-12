#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n){
    if(n <= 1){
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int busquedaBinaria(vector<int> lista,int inicio,int final,int obj){
    if(inicio <= final){
        int medio = inicio + (final - inicio)/2;
        if(lista[medio] == obj){
            return medio;
        }if(lista[medio] > obj){
            return busquedaBinaria(lista,inicio,medio-1,obj);
        }
        return busquedaBinaria(lista,medio+1,final,obj);
    }
    return -1;
}

bool primo(int n, int div)
{
    if(n == div)
    {
        return true;
    }else{
        if(n % div == 0)
        {
            return false;
        }else{
            return primo(n,div + 1);
        }
    }
}

int factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int mayorLista(vector<int> lista, int i, int m){
    if(lista.size() == i){
        return m;
    }else{
        if(lista[i] > m){
            m = lista[i];
        }
        return mayorLista(lista,i+1,m);
    }
}

int menorLista(vector<int> lista, int i, int m){
    if(lista.size() == i){
        return m;
    }else{
        if(lista[i] < m){
            m = lista[i];
        }
        return menorLista(lista,i+1,m);
    }
}

int main()
{
    vector<int> arreglo = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = busquedaBinaria(arreglo,0,arreglo.size() -1,10);
    if(i != -1){
        cout<<"el numero que buscaste fue "<<arreglo[i]<<endl;
    }else{
        cout<<"El numero que diste no se encuentra en el arreglo"<<endl;
    }
    return 0;
}
