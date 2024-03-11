#include <iostream>
#include <string>

using namespace std;

class futbolista{
private:
    string nombre;
    string apellido;
    string posicion;
    int identificador;
    int edad;
public:

    futbolista(string _nombre, string _apellido, string _posicion, int _identificador, int _edad){
        this->nombre = _nombre;
        this->apellido = _apellido;
        this->posicion = _posicion;
        this->identificador = _identificador;
        this->edad = _edad;
    }

    // los get muestran los datos que tienen los atributos privados
    // por lo que si reegresan valor
    string getNombre(){
        return this->nombre;
    }
    string getApellido(){
        return this->apellido;
    }
    string getPosicion(){
        return this->posicion;
    }
    int getIdentificador(){
        return this->identificador;
    }
    int getEdad(){
        return this->edad;
    }

    // los set asignan un nuevo valor a los atributos por lo que 
    // NO regresan valor 

    void setNombre(string _nombre){
        this->nombre = _nombre;
    }

    void setApellido(string _apellido){
        this->apellido = _apellido;
    }

    void setPosicion(string _posicion){
        this->posicion = _posicion;
    }
    void setIdentificador(int _identificador){
        this->identificador = _identificador;
    }
    void setEdad(int _edad){
        this->edad = _edad;
    }







    //otro metodos o acciones que podra realizar

    void concentrarse(string a){
        cout << "se esta concentrando" << a << endl;
    }
    void viajar(){
        cout << "esta viajando" << endl;
    }
    void entrenar(){
        cout << "esta entrenando" << endl;
    }



};

int main(){

    futbolista fut("pepe","aguilar","porteria superior", 45,35);


    string a = "me la pelas POO kjaskjdaks";
    fut.concentrarse( a);


    return 0;
}