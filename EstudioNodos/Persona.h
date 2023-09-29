#pragma once
#include <iostream>
#include <string>

using namespace std;

class Persona{
    private:
        string nombre, apellido;
        int edad;
    public:
        Persona(string nom,string apell,int eda){
            this -> nombre = nom;
            this -> apellido = apell;
            this -> edad = eda;
        };
        ~Persona(){
            cout<<"se elimino el objeto"<<endl;
        }
        string getNombre(){
             return this -> nombre;
        };
        string getApellido(){
            return this -> apellido;
        };
        int getEdad(){
            return this -> edad;
        };
        void setNombre(string nombre){
            this -> nombre = nombre;
        };
        void setApellido(string apellido){
            this -> apellido = apellido;
        };
        void setEdad(int edad){
            this -> edad = edad;
        };
};