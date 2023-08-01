/*
** #########################################################################################
**      Archivo: 02 - 05 - Alumnos.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Descripcion:
**                   Visualizar la información de un alumno y realizar modificaciones a
**                   dicha información con estructuras y apuntadores.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <string.h>

// Estructuras
struct Direccion{
    char calle[30];
    short int numero;
    char colonia[30];
    int CP;
};

struct Alumno{
    int boleta;
    char nombre[30];
    char apellido[30];
    float promedio;
    struct Direccion direccion;               // Llamamos a la estructura a utilizar.
};


// Main Function
int main(){

    struct Alumno Alumno1;                    // Creamos un nuevo alumno.

    // Accedemos a los valores de "struct Direccion".
    Alumno1.boleta = 2021301670;
    strcpy(Alumno1.nombre, "Andres");
    strcpy(Alumno1.apellido, "Lopez");
    Alumno1.promedio = 8.9;

    // Accedemos a los valores de "struct Alumno".
    strcpy(Alumno1.direccion.colonia, "Iztacalco");           // "direccion" es la variable declarada para "struct Direccion"
    Alumno1.direccion.numero = 10;
    strcpy(Alumno1.direccion.calle, "Granjas de lo alto");
    Alumno1.direccion.CP = 58610;

    // Visualizamos la informacion aagregada.
    printf("\t\tNombre: %s\n", Alumno1.nombre);
    printf("\t\tApellido: %s\n", Alumno1.apellido);
    printf("\t\tN. Boleta: %i\n", Alumno1.boleta);
    printf("\t\tPromedio: %.2f\n", Alumno1.promedio);
    printf("\t\tCalle: %s\n", Alumno1.direccion.calle);
    printf("\t\tNumero: %d\n", Alumno1.direccion.numero);
    printf("\t\tColonia: %s\n", Alumno1.direccion.colonia);
    printf("\t\tCP: %i\n", Alumno1.direccion.CP);

    // Modificamos los datos base con un apuntador.
    struct Alumno* apAlumno;
    apAlumno = &Alumno1;

    strcpy(apAlumno->direccion.calle, "Guerrero");
    apAlumno->direccion.CP = 12369;
    strcpy(apAlumno->direccion.colonia, "Marichuy");
    apAlumno->direccion.numero = 54;

    wit();

    // Visualizamos la nueva informacion aagregada.
    printf("\t\tNombre: %s\n", Alumno1.nombre);
    printf("\t\tApellido: %s\n", Alumno1.apellido);
    printf("\t\tN. Boleta: %i\n", Alumno1.boleta);
    printf("\t\tPromedio: %.2f\n", Alumno1.promedio);
    printf("\t\tCalle: %s\n", Alumno1.direccion.calle);
    printf("\t\tNumero: %d\n", Alumno1.direccion.numero);
    printf("\t\tColonia: %s\n", Alumno1.direccion.colonia);
    printf("\t\tCP: %i\n", Alumno1.direccion.CP);

    return 0;
}

void wit(){
    puts("\n");
    system("PAUSE");
    system("CLS");
}