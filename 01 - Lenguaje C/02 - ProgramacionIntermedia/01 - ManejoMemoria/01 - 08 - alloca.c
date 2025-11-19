/*
** #########################################################################################
**      Archivo: 01 - 08 - alloca.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Descripcion:
**          Ejemplo sencillo que muestra el uso de alloca() (memoria en la pila)
** #########################################################################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if defined(_MSC_VER)
#include <malloc.h> /* _alloca */
#define alloca _alloca
#else
#include <alloca.h>
#endif

void demo_alloca(void) {
    int n = 8;
    int *arr = (int*)alloca(n * sizeof *arr);

    for (int i = 0; i < n; ++i) arr[i] = i * i;

    printf("Dentro de demo_alloca():\n");
    for (int i = 0; i < n; ++i) printf("arr[%d]=%d ", i, arr[i]);
    printf("\nDirección de arr: %p\n", (void*)arr);

    /* La memoria asignada con alloca se liberará automáticamente al salir de la función */
}

int main(void) {
    printf("Demostración de alloca()\n");
    demo_alloca();
    printf("Después de demo_alloca(): la memoria de pila ya no es válida para accederla.\n");
    return 0;
}
