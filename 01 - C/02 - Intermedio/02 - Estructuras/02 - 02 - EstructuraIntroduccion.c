/*
** #########################################################################################
**      Archivo: 02 - 02 - EstructuraIntroduccion.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Funcion(es)
void wit(){
    puts("\n\n");
    system("PAUSE");
    system("CLS");
}

// Estructura(s)
struct alumnos{
    int semestre;
    char alumno[50];
    char carrera[4];
    int boleta;
    int anho;
};

struct personas{
    int edad;
    char nombre[20];
};

struct alumnos alumno1 = {8, "Jose Juan", "ICE", 2020201680, 2019},
               alumno2 = {9, "Ernesto Contreras", "ICE", 2021101570, 2020};

struct personas persona1, persona2;

// Main Function
int main(){

    puts("\n\t\tMIEMBROS INICIALIZADOS");
    printf("\nNombre alumno 1: %s", alumno1.alumno);
    printf("\nCarrera:: %s", alumno1.carrera);
    printf("\nSemestre: %i", alumno1.semestre);
    printf("\nBoleta: %i", alumno1.boleta);
    printf("\nAnho de ingreso: %i", alumno1.anho);

    printf("\n\n\nNombre alumno 2: %s", alumno2.alumno);
    printf("\nCarrera:: %s", alumno2.carrera);
    printf("\nSemestre: %i", alumno2.semestre);
    printf("\nBoleta: %i", alumno2.boleta);
    printf("\nAnho de ingreso: %i", alumno2.anho);

    wit();

    puts("\n\t\tMIEMBROS EDITABLES");
    printf("\nEscriba un nombre: "); gets(persona1.nombre);
    printf("\nEscriba la edad: "); scanf("%i", &persona1.edad);

    fflush(stdin);

    printf("\nEscriba un nombre: "); gets(persona2.nombre);
    printf("\nEscriba la edad: "); scanf("%i", &persona2.edad);

    wit();

    puts("\n\t\tMIEMBROS EDITABLES");
    printf("\nSu nombre es: %s\n",persona1.nombre);
    printf("La edad es: %i\n",persona1.edad);

    printf("\nSu nombre es: %s\n",persona2.nombre);
    printf("La edad es: %i\n",persona2.edad);
    
    return 0;
}