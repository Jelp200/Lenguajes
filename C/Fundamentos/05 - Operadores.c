/*
** #########################################################################################
**      Archivo: 05-Operadores.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Operadores aritmeticos.
**              Suma                ->      +
**              Resta               ->      -
**              Producto            ->      *
**              Cociente            ->      /
**              Modulo              ->      %
**
**          Operadores relacionales.
**              Mayor que           ->          >
**              Menor que           ->          <
**              Identicamente a     ->          ==
**              Mayor igual a       ->          >=
**              Menor igual a       ->          <=
**
**          Operadores de asignación.
**              Igual a             ->          =
**              Suma                ->          +=          Es lo mismo a : x = x + n
**              Resta               ->          -=          Es lo mismo a : x = x - n
**              Producto            ->          *=          Es lo mismo a : x = x * n
**              Cociente            ->          /=          Es lo mismo a : x = x / n
**              Mod                 ->          %=          Es lo mismo a : x = x % n
**
**          Operadores booleanos.
**              AND                 ->          &&
**              OR                  ->          ||
**              NOT                 ->          !
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    short int n1, n2, S = 0, R = 0, M = 0, Mod = 0;
    float D = 0;

    printf("De el primer numero: "); scanf("%hi", &n1);
    printf("De el segundo numero: "); scanf("%hi", &n2);

    S =  n1 + n2;
    R =  n1 - n2;
    M =  n1 * n2;

    if (n2 != 0){
        D = n1 / n2;
        Mod = n1 % n2;
    }else printf("\n\nDe un numero diferente de 0...");

    printf("S = %hi", S);
    printf("\nR = %hi", R);
    printf("\nM = %hi", M);
    printf("\nD = %.4f", D);
    printf("\nMod = %hi", Mod);

    return 0;
}