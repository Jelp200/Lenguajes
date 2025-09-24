#include <stdio.h>
#include <stdlib.h>

#define BLOCK_SIZE 4096  // Tamaño del bloque: 4 KB

int main() {
    FILE *inputFile = fopen("large_input_file.dat", "rb");
    FILE *outputFile = fopen("output_file.dat", "wb");

    if (!inputFile || !outputFile) {
        perror("Error al abrir el archivo");
        return EXIT_FAILURE;
    }

    char buffer[BLOCK_SIZE];
    size_t bytesRead;

    // Leer y escribir en bloques
    while ((bytesRead = fread(buffer, 1, BLOCK_SIZE, inputFile)) > 0) {
        fwrite(buffer, 1, bytesRead, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Procesamiento por bloques completado.\n");
    return EXIT_SUCCESS;
}