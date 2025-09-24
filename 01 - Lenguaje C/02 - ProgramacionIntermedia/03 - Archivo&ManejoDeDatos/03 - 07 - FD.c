#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024  // Longitud máxima de una línea

void processLine(const char *line) {
    // Simular procesamiento de la línea
    printf("Procesando: %s", line);
}

int main() {
    FILE *inputFile = fopen("stream_data.txt", "r");
    if (!inputFile) {
        perror("Error al abrir el archivo");
        return EXIT_FAILURE;
    }

    char line[MAX_LINE_LENGTH];

    // Leer y procesar línea por línea
    while (fgets(line, MAX_LINE_LENGTH, inputFile)) {
        processLine(line);
    }

    fclose(inputFile);

    printf("Procesamiento de flujos completado.\n");
    return EXIT_SUCCESS;
}