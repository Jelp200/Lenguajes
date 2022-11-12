# Estructuras :construction:
Una estructura se declara de la siguiente manera:
```C
struct nombre_estructura{
    siste_t foo;
    int flex[];
};
```
O tambien:
```C
typedef struct nombre_estructura{
    var1;
    var2;
    varN;
};
```
Tenemos dos tipos de declaraciones habituales.

### 1er forma
```C
struct{
    long int n_tarjeta;
    char tipo_tarjeta;
    char nombre[80];
    float saldo;
} cliente1, cliente2;
```
### 2da forma
```C
struct{
    long int n_tarjeta;
    char tipo_tarjeta;
    char nombre[80];
    float saldo;
};

struct tarjetas cli1, cli2;
```
