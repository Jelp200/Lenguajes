# Cadenas :chains:
Declaramos las cadenas de la siguiente manera
```C
char cadenaForma_1[20];
char cadenaForma_2[] = "ESIME_Z";
char cadenaForma_3[longitud];
```
Para poder manejar cadenas tenemos:
### Scanf.
```C
scanf("%s", &Variable);
```
### Gets.
```C
gets(Variable);
```
### Feof.
```C
 char Variable[20];

    do{
        scanf("%s", Variable);
        if(!feof(stdin)){
            printf("\n%s", Variable);
        }
    } while (!feof(stdin));
```