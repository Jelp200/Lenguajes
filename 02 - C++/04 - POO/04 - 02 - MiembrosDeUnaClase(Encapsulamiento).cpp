/*
** #########################################################################################
**      Archivo: 04 - 02 - Mienbros de una clase (Encapsulamiento)
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <iostream>

// DECLARAMOS UNA CLASE
class Clase{
    // Atributos
    /*
    ENCAPSULAMIENTO (PROTECCION DE INFORMACIÓN)
    
    public:                         (Los miembros pueden ser accedidos por miembros de la misma clase, clases heredadas/hijas o miembros de otra clase).
    private:                        (Los miembros pueden ser accedidos por miembros de la misma clase "uitilizamos seters y geters").
    protected:                      (Los miembros pueden ser accedidos por miembros de la misma clase y clases heredadas).
    */
    private:
        int x, y;                   // Solo de los metodos de esta clase pueden acceder a el.

    // Metodos
    public:
        // Contructor (inicializa los atributos de la clase, tiene el mismo nombre de la clase).
        Clase(int X, int Y){        // Constructor 1
            x = X;
            y = Y;
        }

        Clase(){                    // Constructor 2
            x = y = 0;
        }

        void setX(int valorX);      // Establecemos el valor de X
        void setY(int valorY);      // Establecemos el valor de Y
        int getX();                 // Obtener valor de X
        int getY();                 // Obtener valor de Y

};

void Clase::setX(int valorX){                          // los "::" nos sirven para generar una pertenencia
    x = valorX;
}

// Establecemos el valor de Y
void Clase::setY(int valorY){                          // los "::" nos sirven para generar una pertenencia
    y = valorY;
}


// Obtener valor de X
int Clase::getX(){
    return x;
}

// Obtener valor de Y
int Clase::getY(){
    return y;
}

// Name spaces
using namespace std;

// Main Function
int main() {
    // Creacion de objeto estatico
    Clase obj1(2, 1);                                           // Utilizando el contructor 1.

    cout << "El valor de X es:" << obj1.getX() << endl;         // Con "." accedemos a los atributos publicos de la clase.
    cout << "El valor de Y es:" << obj1.getY() << endl;

    // Creacion de objeto dinamico
    Clase* obj2 = new Clase();

    obj2 -> setX(5);
    obj2 -> setY(8);

    cout << "El valor de Y es:" << obj2 -> getX() << endl;
    cout << "El valor de Y es:" << obj2 -> getY() << endl;

    return 0;
}
