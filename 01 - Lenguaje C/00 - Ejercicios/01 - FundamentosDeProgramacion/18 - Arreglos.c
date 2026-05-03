/*
** #########################################################################################
**      Archivo: 18 - Arreglos.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Compilador: gcc (MinGW-W64) 15.2.0
**      Ejercicios:
**          1. Escribe un programa que copie una cadena en otra variable.
**          2. Escribe un programa que concatene dos cadenas.
**          3. Escribe un programa que compare dos cadenas y muestre si son iguales.
**          4. Escribe un programa que calcule la longitud de una cadena.
**          5. Escribe un programa que invierta una cadena.
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <string.h>

// PROTOTIPOS DE FUNCIONES
void copiarCadena(char *destino, const char *origen);
void concatenarCadenas(char *destino, const char *cadena1, const char *cadena2);
int compararCadenas(const char *cadena1, const char *cadena2);
int longitudCadena(const char *cadena);
void invertirCadena(char *cadena);

// FUNCIÓN PRINCIPAL
int main(){
    char cadena1[100], cadena2[100], resultado[200];
    // Ejercicio 1: Copiar una cadena
    printf("Ingrese una cadena para copiar: "); fgets(cadena1, sizeof(cadena1), stdin);
    copiarCadena(resultado, cadena1);
    printf("Cadena copiada: %s\n", resultado);

    // Ejercicio 2: Concatenar dos cadenas
    printf("Ingrese la primera cadena para concatenar: "); fgets(cadena1, sizeof(cadena1), stdin);
    printf("Ingrese la segunda cadena para concatenar: "); fgets(cadena2, sizeof(cadena2), stdin);
    concatenarCadenas(resultado, cadena1, cadena2);
    printf("Cadenas concatenadas: %s\n", resultado);

    // Ejercicio 3: Comparar dos cadenas
    printf("Ingrese la primera cadena para comparar: "); fgets(cadena1, sizeof(cadena1), stdin);
    printf("Ingrese la segunda cadena para comparar: "); fgets(cadena2, sizeof(cadena2), stdin);
    if (compararCadenas(cadena1, cadena2) == 0) printf("Las cadenas son iguales.\n");
    else printf("Las cadenas son diferentes.\n");

    // Ejercicio 4: Calcular la longitud de una cadena
    printf("Ingrese una cadena para calcular su longitud: "); fgets(cadena1, sizeof(cadena1), stdin);
    printf("La longitud de la cadena es: %d\n", longitudCadena(cadena1));

    // Ejercicio 5: Invertir una cadena
    printf("Ingrese una cadena para invertir: "); fgets(cadena1, sizeof(cadena1), stdin);
    invertirCadena(cadena1);
    printf("Cadena invertida: %s\n", cadena1);

    return 0;
}

// DEFINICIÓN DE FUNCIONES
void copiarCadena(char *destino, const char *origen){ strcpy(destino, origen); }

void concatenarCadenas(char *destino, const char *cadena1, const char *cadena2){ strcpy(destino, cadena1); strcat(destino, cadena2); }

int compararCadenas(const char *cadena1, const char *cadena2){ return strcmp(cadena1, cadena2); }

int longitudCadena(const char *cadena){ return strlen(cadena); }

void invertirCadena(char *cadena){
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud / 2; i++){
        char temp = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temp;
    }
}