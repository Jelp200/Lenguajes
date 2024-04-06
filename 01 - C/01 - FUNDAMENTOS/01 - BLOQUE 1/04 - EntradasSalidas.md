# ENTRADAS Y SALIDAS EN C :croissant:
Ahora bien, para poder visualizar los datos que hemos pedido o que pediremos para nuestro programa utilizaremos dos funciones básicas que la libreria
<b>"stdio.h"</b> nos proporciona, estas son:

### Entradas.
```C
scanf("%tipoDeDato", &Variable);
```
### Salidas.
```C
puts("Cadena de caracteres");
printf("Texto $tipoDeDato", Variable);
```
### Visualización de los tipos de datos.
Para poder visualizar nuestros tipos de datos es necesario conocer la siguiente tabla:
<div>
    <img src="../../../IMGS/01 - C/01 - FUNDAMENTOS/01 - BLOQUE 1/VisualizarDatos.png">
</div>

Veamos un ejemplo para comprender esto:
```C
/*
** #########################################################################################
**      Archivo: 04-EntradaSalida.md
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Veremos como visualizar datos en C.
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// VARIALES GLOBALES
char string[50];
int n;


// FUNCIÓN PRINCIPAL
int main(void){
    puts("\n\t\t\tSALIDAS EN CONSOLA");
    printf("\t\tSalida con \'printf\'");
    puts("\t\tSalida con \'puts\'");

    system("PAUSE");
    system("cls");

    puts("\n\t\t\tENTRADAS EN CONSOLA");
    printf("\t\tEntrada com \'gets\', de una cadena de texto: "); gets(string);
    printf("\t\tLo ingresado es: %s", string);
    printf("\n\n\t\tEntrada con \'scanf\', de una numero: "); scanf("%i", &n);
    printf("\t\tLo ingresado es: %i", n);
    return 0;
}
```
