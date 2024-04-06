# OPERADORES EN C :croissant:
Los operadores en C son aquellos los cuales nos permiten como su nombre nos dice operar variables y funciones entre si, tenemos diferentes tipos de
operadores, estos son:

### Operadores aritmeticos
```txt
|  SIMBOLO  |  SIGNIFICADO   |           USO           |
|     +     | Adición        | Suma                    |
|     -     | Sustracción    | Resta                   |
|     *     | Producto       | Multiplicación          |
|     /     | Cociente       | División                |
|     %     | Módulo         | Resisudo de la división |
|    + +    | Incremento     | Suma                    |
|    - -    | Decremento     | Resta                   |
```

### Operadores de asignación
```txt
|  SIMBOLO  |  SIGNIFICADO   |           USO           |
|     =     | Igual          | Significado             |
|    + =    | Adición        | Suma y asignación       |
|    - =    | Sustracción    | Resta y asignación      |
|    * =    | Producto       | Multiplic. y asignación |
|    / =    | Cociente       | División y asignación   |
|    % =    | Módulo         | Moúlo y asignación      |
```

### Operadores lógicos
```txt
|  SIMBOLO  |  SIGNIFICADO   |    USO    |
|     !     |     NOT        | Inversión |
|    & &    |     AND        | Producto  |
|    | |    |     OR         | Suma      |
```

Veamos un ejemplo para comprender esto:
```C
/*
** #########################################################################################
**      Archivo: 05 - Operadores.md
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Uso de operadores en C.
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(void){
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
```