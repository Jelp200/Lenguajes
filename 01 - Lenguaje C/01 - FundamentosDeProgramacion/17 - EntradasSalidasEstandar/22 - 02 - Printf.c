/*
** #########################################################################################
**      Archivo: 22 - 02 - Printf.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <ctype.h>

// DEFINES
#define MAX_LINE_LENGTH 80

// PROTOTIPOS DE FUNCIONES
void print_octal(char c);
void print_hex(char c);

// FUNCIÓN PRINCIPAL
int main() {
    int c;
    int line_length = 0;

    while ((c = getchar()) != EOF) {
        if (iscntrl(c) || c == 127) {  // Caracter no gráfico
            print_octal(c); // Imprimir en octal
        } else {
            putchar(c); // Imprimir caracteres gráficos normales
        }

        // Separar líneas largas de texto
        if (c == '\n' || ++line_length >= MAX_LINE_LENGTH) {
            putchar('\n');
            line_length = 0;
        }
    }

    return 0;
}

// FUNCIONES
void print_octal(char c) {
    printf("\\%03o", c);
}

void print_hex(char c) {
    printf("\\x%02x", c);
}