#include <stdio.h>

//! Suma.
int suma(int *p_a, int *p_b){
    int S;
    S = (*p_a) + (*p_b);
    return S;
}

//! Resta.
int resta(int *p_a, int *p_b){
    int R;
    R = (*p_a) - (*p_b);
    return R;
}

//! Producto.
int producto(int *p_a, int *p_b){
    int P;
    P = (*p_a) * (*p_b);
    return P;
}

//! Cociente.
int cociente(int *p_a, int *p_b){
    int C;
    C = (*p_a) / (*p_b);
    return C;
}