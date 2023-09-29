#pragma once
#include <iostream>
#include "Persona.h"

class Nodo{
    private:
        Persona* persona;
        Nodo* siguiente;
    public:
        Nodo(){
            this -> persona = NULL;
            this -> siguiente = NULL;
        };
        ~Nodo(){
            this -> persona -> ~Persona();
            cout<<"El nodo a sido eliminado correctamente"<<endl;
        };
        Persona* getPersona(){
            return this -> persona;
        };
        Nodo* getSiguiente(){
            return this -> siguiente;
        };
        void setPersona(Persona* persona){
            this -> persona = persona;
        };
        void setSiguiente(Nodo* siguiente){
            this -> siguiente = siguiente;
        };
};