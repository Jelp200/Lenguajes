# Busqueda :mag:
La busqueda en el lenguaje de programación C se da debido a que al momento de tener una masiva cantidad de datos los cuales
son guardados en listas y deseamos encontrar algun dato dentro de todo ese conjunto, requerimos realizar busquedas, un
punto a destacar es que dichas busquedas son algoritmos los cuales fueron realizados especificamente para esta función.

Los algoritmos de busqueda más utilizados son:
<ul>
    <li><a href="../01 - Ordenamiento y busqueda/01 - 01 - BusquedaSecuencial.c">Busqueda secuencial (Algoritmo más conocido).</a></li>
    <li><a href="../01 - Ordenamiento y busqueda/01 - 02 - BusquedaBinaria.c">Busqueda binaria (Algoritmo más eficaz).</a></li>
</ul>
Ojo, para poder realizar ya sea una busqueda secuencial o binaria, es necesario tener lo elementos ordenados de nuestra lista.

### Busqueda secuencial
La busqueda secuencial o lineal es el algoritmo de busqueda más conocido, pero el menos eficiente, consta en realizar un
recorrido desde el primer elemento hasta encontrar la clave que se busca.
```C
void busSecuencial(){
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int i = 0, dato;
    char band = 'F';

    while ((band == 'F') && (i < 10)){
        if(arreglo[i] == dato){
            band = 'V';
        }
        i++;
    }
}
```
### Busqueda binaria
La busqueda binaria nos permite tener una técnica mejorada de busqueda debido a que en vez de recorrer el arreglo de inicio a
fin, lo que se hace es partir la lista en dos y realizar el mismo proceso con sublistas hasta encontrar la clave requerida por
el usuario o programador, esta busqueda solo consta de dos puntos clave:
<ul>
    <li>Calcular el índice del punto central del arreglo.</li>
    <li>Comparar el valor del punto central con la clave.</li>
</ul>

```C
int busquedaBin(int lista[], int n, int clave){
    int central, bajo, alto;
    int valorCentral;

    bajo = 0;
    alto = n - 1;

    while(bajo <= alto){
        central = (bajo + alto) / 2;
        valorCentral = lista[central];
        if(clave == valorCentral)
            return central;
        else if(clave < valorCentral)
            alto = central + 1;
        else
            bajo = central + 1;
    }
    return -1;
}
```

# Ordenamiento :military_helmet:
El ordenamiento en el lenguaje de programación C, es, como su nombre lo dice, una operación la cual consiste en tener o disponer
de una estructura/conjunto de datos en algún orden en especifico el cual es determinado con respecto a uno de los elementos del
conjunto el cual está siendo analizado.

Los algoritmos de ordenamiento más utilizados son:
<ul>
    <li><a href="../01 - Ordenamiento y busqueda/01 - 03 - MetodoBurbuja.c">Ordenación por burbuja.</a></li>
    <li><a href="../01 - Ordenamiento y busqueda/01 - 04 - MetodoSeleccion.c">Ordenación por selección.</a></li>
    <li><a href="../01 - Ordenamiento y busqueda/01 - 05 - MetodoInsercion.c">Ordenación por inserción.</a></li>
    <li><a href="../01 - Ordenamiento y busqueda/01 - 06 - MetodoQuicksort.c">Ordenación por rapida.</a></li>
</ul>