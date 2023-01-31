#include <iostream>
#include "Alumno.h"

using namespace std;

void Alumno::pedirDatos(){
    cout << "De la calificacion de electronica lineal: ";
    cin >> calEL;

    cout << "De la calificacion de sistemas: ";
    cin >> calCONCLA;

    cout << "De la calificacion de microprocesadores: ";
    cin >> calMP;
}

void Alumno::mostrarNotas(){
    cout << "Electronica lineal: " << calEL << endl;
    cout << "Electronica sistemas: " << calCONCLA << endl;
    cout << "Electronica miscroprocesadores: " << calMP << endl;
    cout << "Promedio: " << ((calEL + calCONCLA + calMP) / 3) << endl;
}
