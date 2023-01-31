#include <iostream>
#include <stdlib.h>
#include "Persona.h"

using namespace std;

int main(){

    Persona* p1 = new Persona("Jorge", 22);
    p1 -> correr();

    Persona* p2 = new Persona("01050305");
    p2 -> correr(4);

    system("pause");
    return 0;
}