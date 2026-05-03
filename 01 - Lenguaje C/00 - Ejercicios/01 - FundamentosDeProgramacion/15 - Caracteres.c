/*
** #########################################################################################
**      Archivo: 15 - Caracteres.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Compilador: gcc (MinGW-W64) 15.2.0
**      Ejercicios:
**          1. Escribe un programa que determine si un carácter es una letra.
**          2. Escribe un programa que determine si un carácter es un dígito.
**          3. Escribe un programa que convierta una letra minúscula a mayúscula.
**          4. Escribe un programa que cuente cuántas letras mayúsculas hay en una cadena.
**          5. Escribe un programa que verifique si un carácter es un espacio en blanco.
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <ctype.h>

// PROTOTIPOS DE FUNCIONES
int esLetra(char c);
int esDigito(char c);
char convertirAMayuscula(char c);
int contarMayusculas(const char *cadena);
int esEspacioBlanco(char c);

// FUNCIÓN PRINCIPAL
int main(){
    char c;
    printf("Ingrese un carácter: "); scanf(" %c", &c);

    if (esLetra(c)) printf("%c es una letra.\n", c);
    else printf("%c no es una letra.\n", c);

    if (esDigito(c)) printf("%c es un dígito.\n", c);
    else printf("%c no es un dígito.\n", c);

    printf("El carácter %c en mayúscula es %c.\n", c, convertirAMayuscula(c));

    char cadena[] = "Hola Mundo";
    printf("La cadena \"%s\" tiene %d letras mayúsculas.\n", cadena, contarMayusculas(cadena));

    if (esEspacioBlanco(c)) printf("%c es un espacio en blanco.\n", c);
    else printf("%c no es un espacio en blanco.\n", c);

    return 0;
}

// DEFINICIÓN DE FUNCIONES
int esLetra(char c){ return isalpha(c); }

int esDigito(char c){ return isdigit(c); }

char convertirAMayuscula(char c){ return toupper(c); }

int contarMayusculas(const char *cadena){
    int contador = 0;
    while (*cadena){
        if (isupper(*cadena)) contador++;
        cadena++;
    }
    return contador;
}

int esEspacioBlanco(char c){ return isspace(c); }
