/*
** #########################################################################################
**      Archivo: 02 - OperarVarIndirectas.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
**      Notas:
**          Operar variables de manera indirecta.
** #########################################################################################
*/

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++ I N C L U D E S +++++++++++++++++++++++++++++++++++++ 
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#include <stdio.h>

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(){
    // Declaración de variables
    int w = 10, x = 20, y = 30, z = 40;
    int r1, r2, r3;

    // Declaración de apuntadores
    int *p1, *p2, p3, *p4;

    p1 = &w;                // Apuntador p1 apunta a la dirección de memoria de w
    p2 = &x;                // Apuntador p2 apunta a la dirección de memoria de x
    p3 = y;                 // p3 es una variable que contiene el valor de y
    p4 = p1;                // Apuntador p4 apunta a la dirección de memoria de p1

    r1 = *p1 + *p2;         // r1 = 10 + 20 = 30
    r2 = p3 * *p4;          // r2 = 30 * 10 = 300
    r3 = *p2 + p3;          // r3 = 20 + 30 = 50

    //! Podemos observar que la variable 'z' no se utiliza en ningún momento. 

    printf("Los resultados son: %d, %d y %d", r1, r2, r3);

    return 0;
}
