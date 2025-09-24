#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
    const char *filename = "large_input_file.dat";
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return EXIT_FAILURE;
    }

    // Obtener el tamaño del archivo
    off_t fileSize = lseek(fd, 0, SEEK_END);
    if (fileSize == -1) {
        perror("Error al obtener el tamaño del archivo");
        close(fd);
        return EXIT_FAILURE;
    }

    // Mapear el archivo en memoria
    void *mapped = mmap(NULL, fileSize, PROT_READ, MAP_PRIVATE, fd, 0);
    if (mapped == MAP_FAILED) {
        perror("Error al mapear el archivo");
        close(fd);
        return EXIT_FAILURE;
    }

    // Acceder a los datos mapeados
    printf("Primeros 100 bytes del archivo:\n");
    for (int i = 0; i < 100 && i < fileSize; i++) {
        printf("%c", ((char *)mapped)[i]);
    }
    printf("\n");

    // Liberar el mapeo
    munmap(mapped, fileSize);
    close(fd);

    printf("Memoria mapeada completada.\n");
    return EXIT_SUCCESS;
}