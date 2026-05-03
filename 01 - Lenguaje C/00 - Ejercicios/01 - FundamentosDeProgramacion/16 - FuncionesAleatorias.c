/*
** #########################################################################################
**      Archivo: 16 - FuncionesAleatorias.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Compilador: gcc (MinGW-W64) 15.2.0
**      Ejercicios:
**          1. Escribe un programa que genere un número aleatorio entre 1 y 100.
**          2. Escribe un programa que simule el lanzamiento de un dado.
**          3. Escribe un programa que genere 10 números aleatorios y los imprima.
**          4. Escribe un programa que adivine un número aleatorio generado por la computadora.
**          5. Escribe un programa que genere una contraseña aleatoria de 8 caracteres.
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// PROTOTIPOS DE FUNCIONES
int generarNumeroAleatorio(int min, int max);
void simularLanzamientoDado();
void generarDiezNumerosAleatorios();
void adivinarNumeroAleatorio();
void generarContrasenaAleatoria();

// FUNCIÓN PRINCIPAL
int main(){
    // Inicializar la semilla para números aleatorios
    srand(time(NULL));

    generarNumeroAleatorio(1, 100);
    simularLanzamientoDado();
    generarDiezNumerosAleatorios();
    adivinarNumeroAleatorio();
    generarContrasenaAleatoria();
    
    return 0;
}

// DEFINICIÓN DE FUNCIONES
int generarNumeroAleatorio(int min, int max){ return rand() % (max - min + 1) + min; }

void simularLanzamientoDado(){ printf("El dado ha caído en: %d\n", generarNumeroAleatorio(1, 6)); }

void generarDiezNumerosAleatorios(){
    printf("Números aleatorios generados:\n");
    for (int i = 0; i < 10; i++) printf("%d ", generarNumeroAleatorio(1, 100));
    printf("\n");
}

void adivinarNumeroAleatorio(){
    int numeroSecreto = generarNumeroAleatorio(1, 100);
    int intento = 0;
    printf("Adivina el número entre 1 y 100: ");
    while (intento != numeroSecreto){
        scanf("%d", &intento);
        if (intento < numeroSecreto) printf("Demasiado bajo. Intenta de nuevo: ");
        else if (intento > numeroSecreto) printf("Demasiado alto. Intenta de nuevo: ");
        else printf("¡Correcto! El número secreto era %d.\n", numeroSecreto);
    }
}

void generarContrasenaAleatoria(){
    char contrasena[9]; // 8 caracteres + null terminator
    const char caracteres[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < 8; i++) contrasena[i] = caracteres[generarNumeroAleatorio(0, sizeof(caracteres) - 2)];
    contrasena[8] = '\0'; // Null terminator
    printf("Contraseña aleatoria generada: %s\n", contrasena);
}
