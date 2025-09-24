#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 65536  // Buffer de 64 KB

int main() {
    FILE *inputFile = fopen("large_input_file.dat", "rb");
    FILE *outputFile = fopen("output_file.dat", "wb");

    if (!inputFile || !outputFile) {
        perror("Error al abrir el archivo");
        return EXIT_FAILURE;
    }

    // Asignar un buffer grande
    char *buffer = malloc(BUFFER_SIZE);
    if (!buffer) {
        perror("Error al asignar memoria");
        fclose(inputFile);
        fclose(outputFile);
        return EXIT_FAILURE;
    }

    // Configurar buffering para el archivo de salida
    setvbuf(outputFile, buffer, _IOFBF, BUFFER_SIZE);

    size_t bytesRead;
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, inputFile)) > 0) {
        fwrite(buffer, 1, bytesRead, outputFile);
    }

    free(buffer);
    fclose(inputFile);
    fclose(outputFile);

    printf("Buffering completado.\n");
    return EXIT_SUCCESS;
}