#include <iostream>
#include <string>

using namespace std;


class persona{
private:
    string nombre;
    int edad;
    double tamano;
public:

    // este es el constructor y se supone que es lo que asignara 
    // los valores que ingresen 
    persona(string _nombre, int _edad, double _tamano){
        // esto se puede usar el this o solo dejar la asignacion sin this 
        this-> nombre = _nombre;
        this-> edad = _edad;
        this-> tamano = _tamano;
    }

    // los get solo returnan el valor que tenga almacenado 
    // los atributos 
    string getNombre(){
        return this-> nombre;
    }

    int getEdad(){
        return this-> edad;
    }

    double getTamano(){
        return this-> tamano;
    }

    // se supone que aqui los set asignaran un nuevo valor
    // a los atributos privados, pero asi y solo asi se pueden 
    // modificar o acceder a ellos 
    void setNombre(string _nombre){
        this-> nombre = _nombre;
    }
    void setEdad(int _edad){
        this->edad = _edad;
    }

    void setTamano(double _tamano){
        this-> tamano = _tamano;
    }

    //aqui podemos crear metodos extras o acciones extras q
    // que pueda hacer nuestra clase o persona 
    void presentaraDatos(){
        cout << "el nombre de este pelon es " << nombre << " edad " << edad << " tamano " << tamano << endl; 

    }


};





int main(){

    persona p1("pepe",25,1.75);
    
    p1.setEdad(35);

    



    return 0;
}