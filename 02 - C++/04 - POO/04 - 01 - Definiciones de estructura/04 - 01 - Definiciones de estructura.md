# Definiciones de estructura
El foco de atención en C++ ya hemos dicho que se encuentra en las clases, en lugar de las fucniones como lo es en C. Los <i>sustantivos</i> que se

Las estructuras son <i>tipos de datos adicionales</i>, se pueden construir utilizando elementos de otros tipos, inclusive con otras **_estructuras_**.
Su estructura en código C es la siguiente:
```C
struct nombreEstructura{
    /*
    ...
    Miembros de la estructura
    ...
    */
}; // Fin de la estructura
```
Realicemos un pequeño ejemplo en el cual implementemos una estructura llamada tiempo.
```C
struct Tiempo{
    int hora;                       // 0 - 23 "Formato 24 hrs"
    int minuto;                     // 0 - 59
    int segundo;                    // 0 - 59
}; // Fin de la estructura tiempo
```
Expliquemos a continuación de lo que va la estructura anterior; **_struct_** introduce la definicion de la estructura en el IDLE, **_Tiempo_** es la <i>etiqueta 
de la estructura<i> que da nombre a la definición de la estructura. Los nombres declarados entre las llaves son los <i>miembros de la estructura</i>. Los
miembros deben tener nombres únicos, pero si tenemos dos o más estructuras diferentes, dichas estructuras pueden contener miembros con el mismo
nombre sin conflicto alguno. Por último, cada definición de estructura debera terminar con un punto y coma.

Los miembros de una estructura se pueden declarar de cualquier tipo, y una estructura puede contener miembros de muchos tipos diferentes. Una
estructura no puede contener una instacia se si misma, por ejemplo:
```C
struct Tiempo{
    int Tiempo;
};
```
La estructura anterior es erronea debido a que no podemos delcarar un miembro tipo **_Tiempo_** en la definición de la estructura **_Tiempo_**. Sin embargo, se
puede incluir un apuntador hacia otra estructura **_Tiempo_**. A una estructura que contienen un miembro que es un apuntador hacía el mismo tipo de estructura
se le denomina <i>estructura autorreferencial</i>.

La primer definición de la estructura tiempo no reserva espacio en memoria; en vez de ello, la definición crea un nuevo tipo de dato que se utiliza
para declarar variables. La variables de estructura se declaran como cualquier otro tipo de variables, veamos.
```C
// [Etiqueta estructura] [Nombre Variable] = [Valores acorde al dato que se quiere];
Tiempo objTiempo;
Tiempo arregloTiempo[10];               // Objeto de clase Tiempo
Tiempo *ptrTiempo = &objTiempo;         // Apuntador hacia un objeto Tiempo
Tiempo &refTiempo = objTiempo;          // Referencia hacia un objeto Tiempo
```