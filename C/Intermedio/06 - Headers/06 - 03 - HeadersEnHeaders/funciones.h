#include <stdio.h>
//! Podemos de igual manera incluir headers del SO para trabajar con ellos con los headers que nosotros declaramos.
#include <math.h>

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

//! Suma raices.
int sRaices(int *p_a, int *p_b){
    int sR;
    sR = sqrt(*p_a) + sqrt(*p_b);
    return sR;
}