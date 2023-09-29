/*

class Alumno{
    string nombre;
    int edad;
    Ramos* listaRamos;
};

class Ramos{
    string nombre;
    Notas* listaNotas;
};

class Notas{
    double nota;
};

class Nodo{
    Objeto* objeto; 
    Nodo* siguiente;
}

void sacarPromedio(string nombreAlumno, string nombreRamo, Lista* lisaAlumnos){

    Alumno alumno = encontarAlumno(nombreAlumno, listaAlumnos);
    if(alumno == NULL){
        return;
    }
    Ramo ramo = encontrarRamo(nombreRamo,alumno.listaRamos);
    if(ramo == NULL){
        return;
    }

    double promedio;
    Nota nota = ramo.listaNotas;
    int cantNotas = 0;

    if(nota == NULL){
        double promedio = 1.0;
        cout<<"El alumno no tiene notas";
        cout<<"El promedio es: "<<promedio;
        return;
    }
    promedio =0.0;
    while(nota !=NULL){
        promedio = promedio + nota -> nota;
        cantNotas++;
        nota = nota -> siguiente;
    }
    promedio = promedio/cantNotas;
    cout<<"El promedio del alumno para el ramo es: "<<promedio;
};

Ramo encontrarRamo(string nombreRamo, Lista* listaRamos){

    if(listaRamos == NULL ){
         cout<<"la lista de ramos esta vacia"<<endl;
        return NULL;
    }
    Nodo* aux = listaRamos;
    Nodo* ramo;
    if(aux.objeto.nombre == nombreRamo){
        cout<<"se encontro el ramo";
        ramo = aux;
        return ramo;
    } Se utiliza para revisar 
    while(aux != NULL){
        if(aux.objeto.nombre == nombreRamo){
            cout<<"Se encontro el ramo";
            ramo = aux;
            return ramo;
        }
        aux = aux.siguiente;
    }
    cout<<"El ramo no estaba en la lista";
    return NULL;
};

Alumno encontrarAlumno(string nombreAlumno, Lista* listaAlumnos){

    if(listaAlumnos == NULL){
        cout<<"la lista de alumnos esta vacia"<<endl;
        return NULL;
    }

    Nodo* aux = listaAlumnos;
    Nodo* alumno;
    if(aux.objeto.nombre == nombreAlumno){
        cout<<"se encontro al alumno";
        alumno = aux;
        return alumno;
    } Se utiliza para revisar 

    aux = aux.siguiente;

    while(aux!= listaAlumnos){
        if(aux.objeto.nombre == nombreAlumno){
            cout<<"Se encontro el alumno";
            alumno = aux;
            return alumno;
        }
        aux = aux.siguiente;
    }
};

*/