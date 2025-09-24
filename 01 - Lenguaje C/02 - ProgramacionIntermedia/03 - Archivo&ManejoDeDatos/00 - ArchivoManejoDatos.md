# ARCHIVOS Y MANEJO DE DATOS :card_file_box:

El manejo de archiuvos en C es un proceso que permite crear, abrir, leer, escribir y cerrar operaciones en un archivo. Para ello, C provee de funciones tales cómo `fopen(), fwrite(), fread(), fseek(), fprintf()`, etc. Pero ¿Por qué es necesario manejar archivos en C? Hasta ahora, las operaciones que se realizan con el programa C se realizan en un indicador o terminal que no se almacena en ningún lugar. La salida se elimina cuando se cierra el programa. Pero en la industria del software, la mayoría de los programas se escriben para almacenar la información obtenida del programa. El uso del manejo de archivos es exactamente lo que la situación requiere.

Para entender por qué es importante el manejo de archivos, veamos algunas características del uso de archivos:

- Reutilización: Se puede acceder a los datos almacenados en el archivo, actualizarlos y eliminarlos en cualquier lugar y en cualquier momento, lo que proporciona una alta reutilización.
- Portabilidad: Sin perder ningún dato, los archivos se pueden transferir a otro sistema informático. El riesgo de codificación defectuosa se minimiza con esta característica.
- Eficiencia: Puede requerirse una gran cantidad de entrada para algunos programas. El manejo de archivos le permite acceder fácilmente a una parte de un archivo utilizando pocas instrucciones, lo que ahorra mucho tiempo y reduce la posibilidad de errores.
- Capacidad de almacenamiento: Los archivos le permiten almacenar una gran cantidad de datos sin tener que preocuparse por almacenar todo simultáneamente en un programa.

## <a href="03 - 01 - LEA_Txt&Bin.c">Lectura y Escritura de Archivos (Modo Texto y Binario)</a>

Un archivo puede ser clasificado en dos tipos basado en la forma de almacenar sus datos.

### Archivos de Texto

Un archivo de texto contiene datos en forma ASCII, por lo general es utilizado para almacenar un flujo de caracteres.

- Cada linea de texto en un archivo termina con una nueva línea de caracter `\n`.
- Puede leerse o escribirse por cualquier editor de texto.
- Generalmente se almacena con una extención `.txt`.
- Los archivos de texto pueden ser utilizados para almacenar los códigos fuente.

### Archivos Binarios

Un archivo de texto contiene datos en forma binaria, por lo general es utilizado para almacenar datos de forma similar que los que se guardan en memoria.

- Los archivos binarios solo se pueden crear desde un programa y su contenido solo puede ser leído por un programa.
- Son más seguros porque no son fáciles de leer.
- Generalmente se almacenan con la extensión de archivo `.bin`.

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/02 - Apuntadores (Avanzado)/TAC.png"></div>

### Operaciones con Archivos

Las operaciones con archivos se refieren a las diferentes formas en las cuales un archivo en C puede ser manejad, tales cómo:

- Crear un nuevo archivo. `fopen()` con atributos `"a", "a+", "w" o "w+"`.
- Abrir un archivo existente. `fopen()`.
- Leer un archivo. `fscanf() o fgets()`.
- Escribir un archivo. `frpintf() o fputs()`.
- Mover a un lugar especifico de un archivo. `fseek(), frewind()`.
- Cerrar un archivo. `fclose()`.

#### Funciones para las operaciones con Archivos.

| Operación de Archivo                           | Declaración                                               | Descripción                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|------------------------------------------------|-----------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **_`fopen()`_** - Abre un archivo                | `FILE *fopen(const char *nombreArchivo, const char *modo);` | La función `fopen()` es utilizada para abrir un archivo y así permitir su escritura, lectura, etc. En C, se declara un apuntador al archivo. `fopen()` crea un archivo si el archivo al cual apunta no existe.<br><br>`FILE *fp;`<br>`fp = fopen("nombreArchivo", "modo");`<br><br>Donde:<br><br>fp: Variable apuntador al archivo con el tipo de dato `FILE`.<br>`nombreArchivo`: Nombre del archivo con la dirección donde se encuentra dicho archivo.<br>`modo`: Se refiere a la operación la cual se realizará en el archivo (r, w, a, r+, w+, a+, etc.). |
| **_`fclose()`_** - Cierra un archivo             | `int fclose(FILE *fp);`                                     | `fclose()` permite cerrar el archivo el cual está siendo apuntado por el apuntador `fp`.<br><br>`fclose(fp);`                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| **_`fgets()`_** - Lee un archivo                 | `char *fgets(char *string, int n, FILE *fp);`               | `fgets()` el utilizada para leer el archivo línea por línea. Esta función puede utilizarse de la siguiente forma:<br><br>`fgets(buffer, size, fp);`<br><br>Donde:<br><br>`buffer`: Buffer donde se podrán los datos.<br>`size`: Tamaño del buffer.<br>`fp`: Apuntador al archivo.                                                                                                                                                                                                                                                                           |
| **_`fprintf()`_** - Escribe dentro de un archivo | `int frpintf(FILE *fp, const char *format, ...);`           | `fprintf()` estribe una cadena de datos dentro de un archivo apuntado por `fp`. Esto de puede realizar de la siguiente forma:<br><br>`fprintf(fp, "Datos");`<br><br>O:<br><br>`fprintf(fp, "texto %d", nombreVariable);`                                                                                                                                                                                                                                                                                                                                  |

### Apuntadores a un Archivo

Un apuntador a un archivo lo que hace es referenciar a una posición particular en el archivo abierto. Es utilizado para realizar todas las operaciones de los archivos tales como leer, escribir, cerrar, etc. La macro FILE sirve para declarar la variable puntero de un archivo. Su sintaxis es:

```C
FILE *nombreApuntadorArchivo;
```

#### Apertura de un Archivo

Para abrir un archivo en C se ha visto que se utiliza la función `fopen()`, siendo su sintaxis:

```C
FILE *fopen(const char *nombreArchivo, const char *modoAcceso);
```

Siendo sus parametros:

- nombreArchivo: Nombre del archivo presente en el mismo directorio en el cual esta el código fuente. De otra forma, se requiere la dirección completa.
- modoAcceso: Especifica que tipo de operación se realizara al archivo.

Y sus valores de retorno:

- Si el archivo tiene una apertura correcta, retorna un apuntador de archivo a el.
- Si el archivo no tiene una apertura correcta, retorna un valor `NULL`.

#### Modos de Apertura de Archivos

Los modos de apertura permiten especificar los tipos de operaciones las cuales se realizarán en el archivo abierto. Son pasados como argumentos a la función `fopen()`. Algunos modos de apertura o acceso son:

| Modos de Apertura | Descripción |
|---|---|
| **_`r`_**    | Busca el archivo. Si el archivo se abre con éxito, `fopen()` lo carga en memoria y establece un puntero que apunta al primer carácter. Si el archivo no se puede abrir, `fopen()` devuelve `NULL`. |
| **_`rb`_**   | Abre para lectura en modo binario. Si el archivo no existe, `fopen()` devuelve `NULL`. |
| **_`w`_**    | Abre para escritura en modo texto. Si el archivo existe, su contenido se sobrescribe. Si el archivo no existe, se crea uno nuevo. Devuelve `NULL` si no se puede abrir el archivo. |
| **_`wb`_**   | Abre para escritura en modo binario. Si el archivo existe, su contenido se sobrescribe. Si el archivo no existe, se crea uno nuevo. |
| **_`a`_**    | Busca el archivo. Si el archivo se abre con éxito, `fopen()` lo carga en memoria y establece un puntero que apunta al último carácter. Solo se abre en modo de añadir. Si el archivo no existe, se crea uno nuevo. Devuelve `NULL` si no se puede abrir el archivo. |
| **_`ab`_**   | Abre para añadir en modo binario. Los datos se añaden al final del archivo. Si el archivo no existe, se crea uno nuevo. |
| **_`r+`_**   | Busca el archivo. Si el archivo se abre con éxito, `fopen()` lo carga en memoria y establece un puntero que apunta al primer carácter. Devuelve `NULL` si no se puede abrir el archivo. |
| **_`rb+`_**  | Abre para lectura y escritura en modo binario. Si el archivo no existe, `fopen()` devuelve `NULL`. |
| **_`w+_**   | Busca el archivo. Si el archivo existe, su contenido se sobrescribe. Si el archivo no existe, se crea uno nuevo. Devuelve `NULL` si no se puede abrir el archivo. |
| **_`wb+`_**  | Abre para lectura y escritura en modo binario. Si el archivo existe, su contenido se sobrescribe. Si el archivo no existe, se crea uno nuevo. |
| **_`a+`_**   | Busca el archivo. Si el archivo se abre con éxito, `fopen()` lo carga en memoria y establece un puntero que apunta al último carácter. Abre el archivo en modo de lectura y añadir. Si el archivo no existe, se crea uno nuevo. Devuelve `NULL` si no se puede abrir el archivo. |
| **_`ab+`_**  | Abre para lectura y añadir en modo binario. Si el archivo no existe, se crea uno nuevo. |

Como se indicó anteriormente, si desea realizar operaciones en un archivo binario, debe agregar `b` al final. Por ejemplo, en lugar de `w`, debe usar `wb`, en lugar de `a+`, debe usar `a+b`.

A continuación, el siguiente ejemplo abre un archivo con C.

```C
int main(){
    // Variable tipo apuntador archivo que almacena el valor retornado por fopen().
    FILE *fp;

    // Apertura del archivo en modo lectura.
    fopen("nombreArchivo.txt", "r");

    // Verificación si el archivo ha sido abierto exitosamente.
    if (fp == NULL){
        printf("El archivo no existe. El programa puede que exista.");
        exit(0);
    }

    return 0;
}
```

El archivo no se abre debido a que no existe en el directorio fuente. Pero `fopen()` es capaz de crear un archivo el cual no existe.

### Crear un Archivo en C

La función `fopen()` como se dijo con anterioridad, no solo abre un archivo, sino, tambien puede crear un archivo si este no existe. Para ello, es necesario utilizar los siguientes modos de apertura que permiten la creación de un archivo: `w, w+, wb, wb+, a, a+, ab` y `ab+`. Por ejemplo:

```C
FILE *fp;
fp = fopen("nombreArchivo.txt", "w");
```

A continuación, el siguiente ejemplo crea un archivo con C.

```C
int main(){
    // Variable tipo apuntador archivo que almacena el valor retornado por fopen().
    FILE *fp;

    // Apertura del archivo en modo escritura para texto.
    fopen("nombreArchivo.txt", "w");

    // Verificación si el archivo ha sido abierto exitosamente.
    if (fp == NULL){
        printf("El archivo no existe. El programa puede que exista.");
        exit(0);
    } else
        printf("El archivo ha sido creado :)");

    return 0;
}
```

### Lectura Desde un Archivo

Para poder abrir un archivo en C para su correspondiente lectura se utilizan las funciones `fscanf()` o `fgets()`. Ambas funciones permiten realizar la misma operación que `scanf()` y `gets()`, pero con un parametro adicional. También existen otras funciones que pueden ser utilizadas para leer desde un archivo. Estas funciones son:

| Función    | Descripción    |
|---|---|
| **_`fscanf()`_**   | Usa una cadena formateada y una lista de argumentos variables para tomar entrada desde un archivo.    |
| **_`fgets()`_**   | Lee una línea completa desde el archivo.    |
| **_`fgetc()`_**   | Lee un solo carácter desde el archivo.    |
| **_`fgetw()`_**   | Lee un número desde un archivo.    |
| **_`fread()`_**   | Lee la cantidad especificada de bytes de datos desde un archivo binario.    |

Esto depende si se desea leer el archivo línea por línea o caracter por caracter.

Por ejemplo:

```C
FILE *fp;
fp = fopen("nombreArchivo.txt", "r");
fscanf(fp, "%s %s %s %d", str1, str2, str3, &numero);
char c = fgetc(fp);
```

La función `getc()` y otras funciones de lectura de archivos devuelven `EOF` (End Of the File) cuando alcanzan el final del archivo durante la lectura. `EOF` indica el final del archivo y su valor está definido por la implementación.

###### **_Nota 1._** Puede visualizarse que cuando se termina de leer una línea en particular, el apuntador archivo automaticamente se mueve al final del último caracter leído.

### Escritura de un Archivo

Para poder escribir un archivo en C para su correspondiente se utilizan las funciones `fprintf()` o `fputs()`. Existen otras funciones que pueden ser utilizadas para escribir un archivo. Estas funciones son:

| Función    | Descripción    |
|---|---|
| **_`fprintf()`_**   | Similar a `printf()`, esta funcion utiliza un formato de argumentos de cadenas y variables para imprimir una salida en el archivo.    |
| **_`fputs()`_**   | Imprime toda una líena en el archivo y pone una nueva línea al final del archivo.    |
| **_`fputc()`_**   | Imprime un caracter simple en el archivo.    |
| **_`fputw()`_**   | Imprime un número en el archivo.    |
| **_`fwrite()`_**   | Escribe una cantidad especifica de Bytes en un archivo binario.    |

Por ejemplo:

```C
FILE *fp;
fp = fopen("nombreArchivo.txt", "w");
frpintf(fp, "%s %s %s %d", "ESIME", "Zacatenco", "IPN", 2025);
fputc("a", fp);
```

### Cierre de un Archivo

Para poder cerrar un archivo en C la función `fclose()` permite realizar dicha acción. Después de realizar las operaciones deseadas, es necesario y casi imperativo cerrar el archivo con el cual se esta trabajando para así liberar la memoria. La sitaxis para cerrar un archivo es:

```C
fclose(nombreApuntadorArchivo);
```

Por ejemplo:

```C
FILE *fp;
fp = fopen("nombreArchivo.txt", "w");

/* Operaciones realizadas con el archivo */

fclose(fp);
```

### Escritura y Lectura de un Archivo Binario

- Apertura de un archivo binario. Para poder abrir un archivo binario se utilizan los siguientes modos de apertura: `rb, rb+, ab, ab+, wb` y `wb+` en la función `fopen()`, al igual que la extención `.bin` al final del nombre del archivo.

```C
FILE *fp;
fp = fopen("nombreArchivo.bin", "rb");
```

- Escritura de un archivo binario. Para poder escribir en un archivo binario se utiliza la función `fwrite()`. La sintaxis de esta función es la siguiente:

```C
size_t fwrite(const void *ptr, size_t tamano, size_t nNiembros, FILE *nombreApuntador);
```

En donde:

| Parámetros            | Descripción                                              |
|-----------------------|----------------------------------------------------------|
| **_ptr_**             | Apuntador al bloque de memoria el cual se va a escribir. |
| **_tamano_**          | Tamaño de cada elemento a escribit en Bytes.             |
| **_nMiembros_**       | Número de elementos.                                     |
| **_nombreApuntador_** | Nombre del apuntador archivo para el flujo de salida.    |

Por ejemplo, el siguiente programa permite escribir a un archivo binario utilizando `fwrite()`:

```C
struct tresNumeros { int n1, n2, n3; };

int main() {
    int n;

    //* Variable estructura
    struct tresNumeros num;

    FILE *fp;

    //* Si el apuntador al archivo es NULL el programa se cerrara.
    if((fp = fopen("C://programa.bin", "wb")) == NULL) {
        printf("Error al abrir el archivo.");
        exit(1);
    }

    int flag = 0;
    // Sino, se retornara un apuntador al archivo.
    for(n = 1; n < 5; ++n) {
        num.n1 = n;
        num.n2 = n * 5;
        num.n3 = n * 5 + 1;

        flag = fwrite(&num, sizeof(struct tresNumeros), 1, fp);
    }

    //* Verificación si los datos se escribieron correctamente.
    if(!flag) 
        printf("Operación de escritura fallida.");
    else
        printf("Operación de escritura correcta.");

    fclose(fp);

    return 0;
}
```

- Lectura de un archivo binario. Para poder leer un archivo binario se utiliza la función `fread()`. La sintaxis de esta función es la siguiente:

```C
size_t fread(void *ptr, size_t tamano, size_t nNiembros, FILE *nombreApuntador);
```

En donde:

| Parámetros            | Descripción                                              |
|-----------------------|----------------------------------------------------------|
| **_ptr_**             | Apuntador al bloque de memoria el cual se va a escribir. |
| **_tamano_**          | Tamaño de cada elemento a escribit en Bytes.             |
| **_nMiembros_**       | Número de elementos.                                     |
| **_nombreApuntador_** | Nombre del apuntador archivo para el flujo de salida.    |

Por ejemplo, el siguiente programa permite leer un archivo binario utilizando `fread()`:

```C
struct tresNumeros { int n1, n2, n3; };

int main() {
    int n;

    //* Variable estructura
    struct tresNumeros num;

    FILE *fp;

    //* Si el apuntador al archivo es NULL el programa se cerrara.
    if((fp = fopen("C://programa.bin", "rb")) == NULL) {
        printf("Error al abrir el archivo.");
        exit(1);
    }

    // Sino, se retornara un apuntador al archivo.
    for(n = 1; n < 5; ++n) {
        fread(&num, sizeof(struct tresNumeros), 1, fp);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3););
    }

    fclose(fp);

    return 0;
}
```

### `fseek()` en C

Si se tienen multiples registros dentro de un archivo y se necesita acceder a un registro en particular que se encuentre en una posición especifica, entonces es necesario recorrer todos los registros anteriores para obtener el registro deseado. Hacer esto desperdiciará mucha memoria y tiempo operativo. Para reducir el consumo de memoria y el tiempo operativo, es posible utilizar `fseek()` que proporciona una forma más fácil de llegar a los datos requeridos. La función `fseek()` en C busca el cursor en el registro dado en el archivo. . La sintaxis de esta función es la siguiente:

```C
int fseek(FILE *nombreApuntador, long int offset, int pos);
```

### `rewind()` en C

La función `rewind()` se utiliza para llevar el puntero del archivo al principio del archivo. Se puede utilizar en lugar de `fseek()` cuando se desea que el puntero del archivo esté al principio.

```C
int fseek(nombreApuntador);
```

### Más funciones para operar archivos en C

| Funciones    | Descripción    |
|---|---|
| **_`fopen()`_**    | Se utiliza para crear o abrir un archivo.    |
| **_`fclose()`_**    | Se utiliza para cerrar un archivo.    |
| **_`fgets()`_**    | Se utiliza para leer un archivo.    |
| **_`fprintf()`_**    | Se utiliza para escribir bloques de datos en un archivo.    |
| **_`fscanf()`_**    | Se utiliza para leer bloques de datos desde un archivo.    |
| **_`getc()`_**    | Se utiliza para leer un solo carácter de un archivo.    |
| **_`putc()`_**    | Se utiliza para escribir un solo carácter en un archivo.    |
| **_`fseek()`_**    | Se utiliza para establecer la posición de un puntero de archivo en una ubicación específica.    |
| **_`ftell(`)_**    | Se utiliza para devolver la posición actual de un puntero de archivo.    |
| **_`rewind()`_**    | Se utiliza para establecer el puntero de archivo al inicio del archivo.    |
| **_`putw()`_**    | Se utiliza para escribir un entero en un archivo.    |
| **_`getw()`_**    | Se utiliza para leer un entero desde un archivo.    |

### Manejo de Errores

Las operaciones vistas con anterioridad pueden fallar por multiples razones, entre ellas:

- **Archivo no existente** (Al intentar abrirlo en modo lectura).
- **Permisos insuficientes** (Escritura de un archivo en modo lectura).
- **Espacio en disco insuficiente.**
- **Errores de E/S** (Fallos físicos en el dispositivo de almacenamiento).

Para poder manejar estos errores, C proporciona:

- **Valores de retorno** de funciones como `NULL` en `fopen()` o `EOF` en `fgetc()`.
- **variables globales** como `errno` (número de error) y funciones como `perror()` o `sterror` para obtener descripciones legibles.

#### Funciones clave para el manejo de errores.

| Funciones    | Descripción    |
|---|---|
| **_`perror()`_**    | Imprime un mensaje de error descriptivo basado en el valor de `errno`.    |
| **_`feof()`_**    | Verifica si se alcanzó el final del archivo (`EOF`).    |
| **_`ferror()`_**    | Verifica si ocurrió un error durante una operación de archivo.    |
| **_`strerror()`_**    | Devuelve una cadena descriptiva del error almacenado en errno.    |

#### Mejores practicas para el manejo de errores

- **Siempre verificar el retorno de `fopen()`:**

```C
FILE *archivo = fopen("ruta", "modo");
if (archivo == NULL) {
    // Manejar error
}
```

- **Cerrar archivos incluso si hay errores:**

```C
FILE *archivo = fopen(...);
if (archivo == NULL) { ... }

// Operaciones...
if (error) {
    fclose(archivo); // ¡Importante!
    return 1;
}
```

- **Usar `perror()` o `strerror()` para mensajes claros:**

```C
perror("Error crítico");
// O
printf("Error: %s\n", strerror(errno));
```

- **Limpiar `errno` antes de operaciones críticas (usando `errno = 0`).**

## <a href="03 - 02 - PGVD_Unix-Like.c">Procesamiento de Grandes Volúmenes de Datos.</a>

Existen varios desafios al procesar archivos grandes:

- **Consumo de memoria:** Cargar todo el archivo en memoria no es viable.
- **Eficiencia de E/S:** Lecturas/Escrituras secuenciales o aleatorias deben optimizarse.
- **Manejo de errores:** Fallos en disco lleno, archivos corruptos o permisos.
- **Rendimiento:** Minimizar el tiempo de procesamiento.

Las estrategias clave para realizar el procesamiento de estos grandes volúmenes de datos son:

### <a href="03 - 04 - PB.c">Procesamiento por bloques: Leer/Escribir datos fragmentados.</a>

El procesamiento por bloques es una técnica en la que los datos se leen o escriben en fragmentos (bloques) en lugar de hacerlo de una sola vez. Esto es especialmente útil cuando se trabaja con grandes volúmenes de datos que no caben en la memoria principal (RAM) de una sola vez.

- **Lectura por bloques:** En lugar de leer un archivo completo en memoria, se lee un bloque de datos de un tamaño específico (por ejemplo, 4 KB, 8 KB, etc.). Esto permite manejar archivos grandes sin consumir toda la memoria disponible.

```C
FILE *file = fopen("archivoGrande.dat", "rb");

if (file) {
    char buffer[4096]; // Buffer de 4 KB
    size_t bytesRead;
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), file)) > 0) {
        // Procesar el bloque de datos en buffer
    }
    fclose(file);
}
```

- **Escritura por bloques:** Similar a la lectura, la escritura se realiza en bloques. Esto es útil para escribir grandes cantidades de datos en un archivo sin necesidad de tener todo el contenido en memoria al mismo tiempo.

```C
FILE *file = fopen("archivoSalida.dat", "wb");

if (file) {
    char buffer[4096]; // Buffer de 4 KB
    // Llenar el buffer con datos
    fwrite(buffer, 1, sizeof(buffer), file);
    fclose(file);
}
```

### <a href="03 - 05 - Buffering.c">Buffering: Usar buffers grandes para reducir llamadas al sistema.</a>

El buffering es una técnica que consiste en utilizar un área de memoria (buffer) para almacenar temporalmente datos antes de que sean procesados o escritos. Esto reduce el número de llamadas al sistema, lo que puede mejorar el rendimiento, especialmente en operaciones de entrada/salida (I/O).

- **Buffering en lectura:** Al leer datos de un archivo, un buffer grande puede reducir el número de llamadas al sistema `read`, ya que se leen grandes cantidades de datos de una sola vez.

```C
FILE *file = fopen("archivoGrande.dat", "rb");

if (file) {
    char buffer[65536]; // Buffer de 64 KB
    setvbuf(file, buffer, _IOFBF, sizeof(buffer)); // Asignar un buffer grande
    // Leer datos del archivo
    fclose(file);
}
```

- **Buffering en escritura:** De manera similar, al escribir datos, un buffer grande reduce el número de llamadas al sistema `write`.

```C
FILE *file = fopen("archivoSalida.dat", "wb");

if (file) {
    char buffer[65536]; // Buffer de 64 KB
    setvbuf(file, buffer, _IOFBF, sizeof(buffer)); // Asignar un buffer grande
    // Escribir datos en el archivo
    fclose(file);
}
```

## <a href="03 - 06 - MP.c">Memoria mapeada: Mapear archivos directamente a memoria.</a>

La memoria mapeada es una técnica avanzada que permite mapear un archivo directamente en la memoria del proceso. Esto significa que el archivo se trata como si fuera una región de memoria, lo que puede simplificar el acceso a los datos y mejorar el rendimiento en ciertos casos.

- **Mapeo de archivos:** En sistemas Unix-like, se puede usar la función `mmap` para mapear un archivo en memoria.

```C
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>

int fd = open("archivoGrande.dat", O_RDONLY);
if (fd != -1) {
    off_t fileSize = lseek(fd, 0, SEEK_END);
    void *mapped = mmap(NULL, fileSize, PROT_READ, MAP_PRIVATE, fd, 0);
    if (mapped != MAP_FAILED) {
        // Acceder a los datos del archivo como si fueran memoria
        munmap(mapped, fileSize); // Liberar el mapeo
    }
    close(fd);
}
```

- Ventajas: El acceso a los datos es más rápido porque no se realizan llamadas al sistema para leer o escribir en el archivo. Además, el sistema operativo maneja la carga y descarga de datos en memoria de manera eficiente.

- Desventajas: El uso de memoria mapeada puede consumir mucha memoria si el archivo es muy grande, y no es portable a todos los sistemas.

## <a href="">Flujos de datos: Procesar datos mientras se leen, sin almacenarlos completos.</a>

El procesamiento de flujos de datos implica procesar los datos a medida que se leen, sin necesidad de almacenar todo el conjunto de datos en memoria. Esto es útil cuando se trabaja con flujos continuos de datos o cuando el volumen de datos es demasiado grande para ser almacenado en memoria.

- **Procesamiento en tiempo real:** Los datos se procesan a medida que llegan, lo que permite manejar flujos de datos en tiempo real, como transmisiones de video, audio o datos de sensores.

```C
FILE *file = fopen("flujoDatos.dat", "rb");

if (file) {
    char buffer[1024]; // Buffer de 1 KB
    size_t bytesRead;
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), file)) > 0) {
        // Procesar los datos en buffer inmediatamente
    }
    fclose(file);
}
```

- Ventajas: Reduce la necesidad de memoria, ya que no es necesario almacenar todos los datos antes de procesarlos. Además, permite un procesamiento más rápido, ya que los datos se procesan a medida que llegan.

- Desventajas: El procesamiento debe ser lo suficientemente rápido para manejar la tasa de llegada de los datos, de lo contrario, podría haber pérdida de datos o retrasos.

Regresar al menú de intermedio <a href="../00 - Intermedio.md">Click aquí</a>.
