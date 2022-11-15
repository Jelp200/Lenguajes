/*
** #########################################################################################
**      Archivo: 02 - 04 - EstructurasAnidadas.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Estructuras
struct infoDireccion{
    char direccion[40];
    char DoM[30];
    char estado[20];
};

struct empleado{
    char nombre[30];
    struct infoDireccion dirEmpleado;               // Llamamos a la estructura a utilizar.
    double salario;
}empleados[0];


// Main Function
int main(){

    int nE;

    // Definimos el numero de empleados que ingresaremos.
    printf("\n\tDe el numero de empleados a registar: "); scanf("%i", &nE);

    empleados[0] = empleados[nE];

    // Bucle para ingresar empleados.
    for (int i = 0; i < nE; i++){
        
        fflush(stdin);
        system("cls");

        printf("\t%i) Escribe su Nombre: ", i + 1); gets(empleados[i].nombre);
        printf("\t%i) Escribe su Direccion: ", i + 1); gets(empleados[i].dirEmpleado.direccion);
        printf("\t%i) Escribe el nombre de tu Delegacion o Municipio: ", i + 1); gets(empleados[i].dirEmpleado.DoM);
        printf("\t%i) Escribe tu Estado: ", i + 1); gets(empleados[i].dirEmpleado.estado);
        printf("\t%i) Escribe tu Salario: $", i + 1); scanf("\t%lf",&empleados[i].salario);
        printf("\n");
    }

    system("cls");

    // Visualizar empleados.
    for (int i = 0; i < nE; i++){
        printf("\n\n\tDatos del empleado numero %i: ", i + 1);
        printf("\n\tNombre %s ",empleados[i].nombre);
        printf("\n\tDireccion: %s ",empleados[i].dirEmpleado.direccion);
        printf("\n\tDelegacion o municipio: %s ",empleados[i].dirEmpleado.DoM);
        printf("\n\Estado: %s ",empleados[i].dirEmpleado.estado);
        printf("\n\tSalario: $%.2lf",empleados[i].salario);
        printf("\n");
    }
    return 0;
}