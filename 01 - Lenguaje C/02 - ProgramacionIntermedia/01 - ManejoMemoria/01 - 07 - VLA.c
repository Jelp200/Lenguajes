/*
** #########################################################################################
**      Archivo: 01 - 07 - VLA.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Descripcion:
**          Ejemplo con arreglos multidimensionales de tamaño variable (VLA)
** #########################################################################################
*/

#include <stdio.h>
#include <stdlib.h>

double sumTodo(size_t n, size_t m, double A[n][m]) {
    double ret = 0.0;
    for (size_t i = 0; i < n; ++i)
        for (size_t j = 0; j < m; ++j)
            ret += A[i][j];
    return ret;
}

int main(int argc, char *argv[]) {
    size_t n = (argc > 1) ? (size_t)atoi(argv[1]) : 3;
    size_t m = (argc > 2) ? (size_t)atoi(argv[2]) : 4;
    if (n == 0) n = 3;
    if (m == 0) m = 4;

    /* Reservar memoria contigua suficiente para una matriz n x m usando la expresion VLA en sizeof */
    double (*matriz)[m] = malloc(sizeof(double[n][m]));
    if (!matriz) {
        perror("malloc");
        return 1;
    }

    /* Inicializar la matriz con algunos valores */
    for (size_t i = 0; i < n; ++i)
        for (size_t j = 0; j < m; ++j)
            matriz[i][j] = (double)(i * m + j + 1);

    double res = sumTodo(n, m, matriz);
    printf("La suma total de la matriz %zux%zu es: %g\n", n, m, res);

    free(matriz);
    return 0;
}
