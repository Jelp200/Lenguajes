/*
** #########################################################################################
**      Archivo: 22 - 03 - miniPrintf.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

// FUNCIONES
void miniPrintf(char *fmt, ...) {
    va_list ap; /* apunta a cada arg sin nombre en orden */
    char *p, *sval;
    int ival;
    double dval;
    char cval;
    void *pval;
    int width;

    va_start(ap, fmt); /* hace que ap apunte al 1er. arg sin nombre */
    for (p = fmt; *p; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }
        switch (*++p) {
            case 'd':
                ival = va_arg(ap, int);
                printf("%d", ival);
                break;
            case 'f':
                dval = va_arg(ap, double);
                printf("%f", dval);
                break;
            case 's':
                for (sval = va_arg(ap, char *); *sval; sval++)
                    putchar(*sval);
                break;
            case 'c':
                cval = (char) va_arg(ap, int); // char es promovido a int
                putchar(cval);
                break;
            case 'p':
                pval = va_arg(ap, void *);
                printf("%p", pval);
                break;
            case '*':
                // Obtener el ancho del campo y el siguiente especificador
                width = va_arg(ap, int);
                p++;
                if (*p == 'd') {
                    ival = va_arg(ap, int);
                    printf("%*d", width, ival);
                } else if (*p == 's') {
                    sval = va_arg(ap, char *);
                    printf("%*s", width, sval);
                }
                break;
            default:
                putchar(*p);
                break;
        }
    }
    va_end(ap); /* limpia cuando todo está hecho */
}

// FUNCIÓN PRINCIPAL
int main() {
    miniPrintf("Prueba con enteros: %d\n", 123);
    miniPrintf("Prueba con flotantes: %f\n", 123.456);
    miniPrintf("Prueba con cadenas: %s\n", "hola mundo");
    miniPrintf("Prueba con caracteres: %c\n", 'A');
    miniPrintf("Prueba con punteros: %p\n", main);
    miniPrintf("Prueba con ancho: %*d\n", 5, 42);
    miniPrintf("Prueba con ancho y cadena: %*s\n", 10, "alineado");

    return 0;
}
