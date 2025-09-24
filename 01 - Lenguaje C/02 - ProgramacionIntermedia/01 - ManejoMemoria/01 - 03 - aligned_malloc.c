/*
** #########################################################################################
**      Archivo: 01 - 03 - aligned_malloc.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Descripcion:
**          Asignar memoria alineada.
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>

// FUNCIÓN PRINCIPAL
int main() {
    //* Declaración de variables
    size_t alignment = 16;                  // Alineación a 16 bytes.
    size_t size = 16;                       // Memoria total en bytes.

    //* Asignar memoria alineada.
    void *ptr = aligned_malloc(alignment, size);

    //* Verificar si se asignó correctamente la memoria.
    if (ptr == NULL) {
        printf("Error al asignar memoria alineada.\n");
        return 1;
    }

    //* Mostrar dirección de memoria asignada.
    printf("Dirección de memoria asignada en: %p\n", ptr);

    //* Liberar memoria.
    free(ptr);
    
    return 0;
}