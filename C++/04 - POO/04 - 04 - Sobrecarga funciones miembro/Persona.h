#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona{
    // Atributos
    private:
        string nombre, ine;
        int edad;

    // Metodos
    public:
        // Sobrecarga metodos.
        Persona(string name, int age){                  // Contructor 1
            string nombre = name;
            int edad = age;
        }

        Persona(string INE){                            // Contructor 2 (Sobrecarga)
            ine = INE;
        }

        void correr(){
            cout << "Soy" << nombre << ", tengo" << edad << "años y estoy entrenando." << endl;
        }

        void correr(int hrs){
            cout << "He entrenado" << hrs << "horas a la semana" << endl;
        }
};