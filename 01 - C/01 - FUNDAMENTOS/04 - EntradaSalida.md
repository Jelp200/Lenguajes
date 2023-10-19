# ENTRADAS Y SALIDAS EN C :croissant:
Ahora bien, para poder visualizar los datos que hemos pedido o que pediremos para nuestro programa utilizaremos dos funciones básicas que la libreria
<b>"stdio.h"</b> nos proporciona, estas son:
###Entradas.
```C
scanf("%tipoDeDato", &Variable);
```
###Salidas.
```C
puts("Cadena de caracteres");
printf("Texto $tipoDeDato", Variable);
```
###Visualización de los tipos de datos.
Para poder visualizar nuestros tipos de datos es necesario conocer la siguiente tabla:
```txt
|       TIPO DE DATO        | DESCRIPCIÓN |
| int                |  %i  | Permite visualizar datos de tipo entero                                 |
| float              |  %f  | Permite visualizar datos de tipo flotante                               |
| char               |  %c  | Permite visualizar datos de tipo caracter                               |
| char string[]      |  %s  | Permite visualizar datos de tipo cadena de caracteres                   |
|             %d            | Perminte convertir a entero decimal                                     |
|             %o            | Dato entero se convierte a octal                                        |
|             %x            | Dato entero se convierte a hexadecimal                                  |
|             %u            | Dato entero se convierte a entero sin signo                             |
|             %e            | Dato tipo flotante (Notación cientifica de la forma {-}n.mmmmmE{+/-}dd) |
|             %g            | Dato tipo flotante                                                      |
|             %lf           | Dato considerado tipo double                                            |
```
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
