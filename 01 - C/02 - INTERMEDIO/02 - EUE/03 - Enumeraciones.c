/*
** #########################################################################################
**      Archivo: 03 - Enumeraciones.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

//DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// DEFINICIÓN DE LA ENUMERACIÓN
enum Moneda {
    DOLAR,
    EURO,
    LIBRA,
    YEN
};

// FUNCION PRINCIPAL
int main() {
    // Declaración de variables
    enum Moneda moneda_origen, moneda_destino;
    float cantidad, resultado;

    // Ingreso de la cantidad y las monedas
    printf("Ingrese la cantidad de dinero: ");
    scanf("%f", &cantidad);

    int opcion_origen, opcion_destino;
    printf("Seleccione la moneda de origen (1: Dolar, 2: Euro, 3: Libra, 4: Yen): ");
    scanf("%d", &opcion_origen);
    moneda_origen = opcion_origen - 1;

    printf("Seleccione la moneda de destino (1: Dolar, 2: Euro, 3: Libra, 4: Yen): ");
    scanf("%d", &opcion_destino);
    moneda_destino = opcion_destino - 1;

    // Conversión de monedas
    switch (moneda_origen) {
        case DOLAR:
            switch (moneda_destino) {
                case DOLAR:
                    resultado = cantidad;
                    break;
                case EURO:
                    resultado = cantidad * 0.82;
                    break;
                case LIBRA:
                    resultado = cantidad * 0.73;
                    break;
                case YEN:
                    resultado = cantidad * 109.42;
                    break;
            }
            break;
        case EURO:
            // Casos restantes para las demás monedas
            // ...
            break;
        case LIBRA:
            // Casos restantes para las demás monedas
            // ...
            break;
        case YEN:
            // Casos restantes para las demás monedas
            // ...
            break;
    }

    // Impresión del resultado
    printf("Resultado de la conversión: %.2f\n", resultado);

    return 0;
}