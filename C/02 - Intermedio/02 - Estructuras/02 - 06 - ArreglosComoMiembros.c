/*
** #########################################################################################
**      Archivo: 02 - 06 - ArreglosComoMiembros.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de preprocesador
#include <stdio.h>

// Variables globales
int nL = 0,
    total = 0;
char resp, b[21];

// Estructura(s)
struct inventario{
    char titulo[25];
    char fechaPubl[20];
    char autor[30];
    int num;
    int pedido;
    float precioVenta;
};
typedef struct inventario Inventario;

// Main function
int main(){
    puts("\n\n\t\tINVENTARIO DE LIBROS");
    printf("\n\tDe el numero de libros a ingresar: "); scanf("%i", &nL);

    Inventario libro[nL];

    do
    {
        fflush(stdin);
        printf("\n\tTotal libros: %d \n", total + 1);
        printf("\n\tTitulo: "); gets(libro[total].titulo);
        printf("\n\tFecha de publicacion: "); gets(libro[total].fechaPubl);
        printf("\n\tLibros en existencia: "); scanf("%d", &libro[total].num);
        printf("\n\tEjemplares pedidos: "); scanf("%d", &libro[total].pedido);
        printf("\n\tPrecio de venta: $"); scanf("%d", &libro[total].precioVenta);
        printf("\n\tHay mas libros? (S/N): "); scanf("%c %*c", &resp);
        resp = toupper(resp);                                       // Conversion a mayusculas
        system("cls");

        if (resp = 'S'){
            total++;
            continue;
        }

    } while (resp == 'S');
    return 0;
}