/*
** #########################################################################################
**      Archivo: 02 - 05 - EstructurasAnidadas.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Estructuras
struct infoDir{
    char direccion[40];
    char DoM[30];
    char estado[20];
};
typedef struct infoDir infoDir;

struct empleado{
    char nombre[30];
    infoDir dirEmpleado;               // Llamamos a la estructura a utilizar.
    double salario;
};
typedef struct empleado empleado;


// Main Function
int main(){

    int nE;

    // Definimos el numero de empleados que ingresaremos.
    printf("\n\tDe el numero de empleados a registar: "); scanf("%i", &nE);

    empleado empleados[nE];

    // Bucle para ingresar empleados.
    for (int i = 0; i < nE; i++){
        
        getchar();                  // Limpiabos el bufer del teclado
        system("cls");

        printf("\t%i) Escribe su Nombre: ", i + 1); fgets(empleados[i].nombre, sizeof(empleados[i].nombre), stdin);
        printf("\t%i) Escribe su Direccion: ", i + 1); fgets(empleados[i].dirEmpleado.direccion, sizeof(empleados[i].dirEmpleado.direccion), stdin);
        printf("\t%i) Escribe el nombre de tu Delegacion o Municipio: ", i + 1); fgets(empleados[i].dirEmpleado.DoM, sizeof(empleados[i].dirEmpleado.DoM), stdin);
        printf("\t%i) Escribe tu Estado: ", i + 1); fgets(empleados[i].dirEmpleado.estado, sizeof(empleados[i].dirEmpleado.estado), stdin);
        printf("\t%i) Escribe tu Salario: $", i + 1); scanf("\t%lf",&empleados[i].salario);
        printf("\n");
    }

    system("cls");

    // Visualizar empleados.
    for (int i = 0; i < nE; i++){
        printf("\n\n\tDatos del empleado numero %i.\n ", i + 1);
        printf("\n\tNombre: %s ",empleados[i].nombre);
        printf("\n\tDireccion: %s ",empleados[i].dirEmpleado.direccion);
        printf("\n\tDelegacion o municipio: %s ",empleados[i].dirEmpleado.DoM);
        printf("\n\tEstado: %s ",empleados[i].dirEmpleado.estado);
        printf("\n\tSalario: $%.2lf",empleados[i].salario);
        printf("\n\n");
    }
    return 0;
}