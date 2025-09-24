/*
** #########################################################################################
**      Archivo: 11 - 01 - breakContinue.md
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    int n = 0;
    puts("USO DEL CONTINUE");
    printf("Escriba un num. a ignorar: "); scanf("%i", &n);
    for(int i = 0;i <= 20; i++){
        if(i == n)
            continue;
        printf("%i\n", i);
    }
    
    puts("USO DEL BREAK");
    printf("Escriba un num. a ignorar: "); scanf("%i", &n);
    for(int i = 0;i < 100; i++){
        if(i == n)
            break;
        printf("%i\n", i);
    }
    return 0;
}

/*
    Compilando tendremos el siguiente resultado en la consola:
    Uso del CONTINUE
    Escriba el número a ignorar: [num dado]
    0
    1
    2
    3
    5
    ...
    20
    Uso del BREAK
    0
    …
    5
    [num dado]
*/
