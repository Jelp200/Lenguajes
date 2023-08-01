#include <iostream>
#include <stdlib.h>
#include "Alumno.cpp"

using namespace std;

int main(){

    // Arreglo de objetos estatico
    Alumno alumnosE[4];

    // Arreglo de objetos dinamico
    Alumno* alumnosD = new Alumno[3];

    // Pedir datos
    for(int i = 0; i < 3; i++){
        (alumnosD + i) -> pedirDatos();
        cout << endl;
    }

    // Pedir datos
    for(int i = 0; i < 3; i++){
        (alumnosD + i) -> mostrarNotas();
        cout << endl;
    }

    system("pause");
    return 0;
}
