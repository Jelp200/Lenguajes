#include <iostream>

using namespace std;

class Alumno{
    // Atributos
    private:
        float calEL, calCONCLA, calMP; 

    // Metodos
    public:
        Alumno(){}                      // Contructor por defecto (Es necesario para el arreglo de objetos)
        void pedirDatos();
        void mostrarNotas();
};