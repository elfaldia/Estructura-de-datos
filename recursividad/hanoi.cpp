#include <iostream>
using namespace std;

void hanoi(int n,char origen,char aux,char destino){
    if(n == 1){
        cout<<"el disco 1 va de origen "<< origen << " a "<< destino<<endl;
        return;
    }
    hanoi(n-1,origen,aux,destino);
    cout<<"el disco "<< n <<" va de origen "<< origen << " a "<< destino<<endl;
    hanoi(n-1,aux,destino,origen);
}

int main()
{
    hanoi(5,'A','B','C');
    return 0;
}
