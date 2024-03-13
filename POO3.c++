#include <iostream>
#include <string>

using namespace std;

class PERSONA{
private:
    string nombre;
    int edad;
    int identificacion;
public:

    PERSONA(string _nombre, int _edad, int _identificacion){
        this->nombre = _nombre;
        this->edad = _edad;
        this->identificacion = _identificacion;
    }

    // los GET retornan oh muestran los datos que tiene los atributos privados 
    string getNombre(){
        return nombre;
    }
    int getEdad(){
        return edad;
    }
    int getIdentificacion(){
        return identificacion;
    }

    //los SET no muestran, si no que asignan 
    void setNombre(string _nombre){
        this-> nombre = _nombre;
    }
    void setEdad(int _edad){
        this-> edad = _edad;
    }
    void setIdentificacion(int _identificacion){
        this-> identificacion = _identificacion;
    }

    // funciones extras 
    void caminar(){
        cout << "esta caminando" << endl;
    }
    void correr(){
        cout << "esta corriendo" << endl; 
    }

};


int main(){

    PERSONA p1("Jose", 19, 1469);
    PERSONA p2("Tonita",20,1204);
    PERSONA p3("German",20,2004);

    PERSONA Personas[] = {p1,p2,p3};

    for(int i = 0; i <= 2; i++){
        cout << "la edad de las personas: " << Personas[i].getEdad() << endl;
    }

    return 0;
}