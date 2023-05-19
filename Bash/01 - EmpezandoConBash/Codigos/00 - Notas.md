# NOTAS :notebook:
Para poder comenzar a trabajar con nuestros archivos shell y sobre todo con el SO linux, es necesario crear nuestro primer archivo, para ello
realizaremos lo siguiente.
En nuestra terminal escribiremos lo siguiente:
```git
$ touch [Nombre del archivo]
$ nano [Nombre del archivo]
```
Lo anterior nos deja crear un archivo con "touch" y con "nano" podemos editar dicho archivo. 

## 01 - HolaMundo.sh :vulcan_salute:
Para poder ejecutar el archivo deseado lo que haremos primero será cambiar los permisos de nuestro archivo o directorio, esto lo realizaremos
con "chmod" (change mod) el cual nos permite controlar quien puede leer, escribir o ejecutar el archivo.
Su sintaxis esta dada por:
```git
$ chmod [opciones] [modo] [archivo]
```
Siendo:
```txt
    [opciones]
        a : Cambia el permiso para todo los usuarios.
        u : Cambia el permiso para el dueño del archivo.
        g : Cambia el permiso para el grupo de dueños del archivo.
        o : Cambia el permiso para todos los demas.
        + : Añade permisos.
        - : Remueve permisos.
        = : Establece permisos.
    [modo]
        r : Permiso de lectura.
        w : Permiso de escritura.
        x : Permiso de ejecución.
```
Y un ejemplo sería:
```git
$ chmod a+ rw
```
Lo anterior nos dice que añade permisos de escritura y lectura a todos los usuarios.
Entonces entendido lo anterior podemos decir que si queremos ejecutar nuestro archivo tenemos que escribir lo soguiente:
```git
$ chmod +x 01-HolaMundo.sh
$ ./01-HolaMundo.sh
```

## 02 - HolaMundoVar.sh :vulcan_salute:
Dentro del lenguaje shell es posible declarar variables tal y como podemos hacerlo en cualquier otro lenguaje (C/C++, PY, etc), para ello podemos
declararlas de dos maneras diferentes:
```sh
# 1er forma
declare -[tipo] nombreVar=[valor]

# 2da forma
nombreVar=[valor]
```
En donde:
```txt
    [tipo]
        -a : Declara una variable de tipo arreglo.
        -A : Declarar una variable de tipo arreglo asociada.
        -f : Declara una variable de tipo función.
        -i : Declara un variable entera.
        -k : Declara una variable tipo keyword.
        -r : Declara una variable de solo lectura.
        -t : Declara una variable compuesta.
        -u : Declara una variable no configurada.
        -x : Declara una variable exportada.
```
Algo importante es que si no especificamos un valor a dichas variables, la variable se inicializara como un "string" vacio, otra cosa
importantisima es que no podemos dejas espacio al momento de declarar el valor de nuestra variable, veamos a que nos referimos:
```sh
# Forma correcta
IPN="ESIME_ZACATENCO"

# Forma incorrecta
IPN = "ESIME_ZACATENCO"
```
Y si deseamos visualizar el valor de nuestras variables podemos de igual manera hacerlo de dos maneras diferentes:
```sh
# 1er forma
echo $nombreVar

# 2da forma
printf "%tipoDato" "$nombreVar"
```

## 03 - HolaMundoUsrInput.sh :vulcan_salute:
Dentro del lenguaje shell es posible ingresar datos de tal manera y como podemos hacerlo en cualquier otro lenguaje (C/C++, PY, etc), para ello 
podemos hacerlo de las siguietes maneras:
```sh
# 1er forma
read -[tipo] nombreVar [prompt]

# 2da forma
read nombreVar

# 2da forma
read -p "[prompt]" nombreVar
```
Lo que se le conoce como "prompt" es el mensaje que se le mostrara al usuario antes de que se le solicite ingresar información, Si no se especifica
el "promt", se urilizará el "prompt" determinado, este "promt" se puede pedir en la misma linea de código gracias a "-p".
Ahora, si deseamos visualizar lo ingresado pero sin afectar después un texto, es necesario utilizar corchetes, veamos como:
```sh
echo "Qué es lo que esta haciendo?"
read accion
echo "Usted esta ${accion}do."
```

## 04 - Comillas.md :exclamation:
Las commillas en bash son importantes debido a que con ellas podremos expandir nuestras cadenas, esto quiere decir que con ellas bash controlara cómo
analizara y expandira las cadenas, no es lo mismo utilizar "[texto]" a utilizar '[texto]', esto debido a que sabemos q gracias a los lenjuages de
programación que las comillas dobles son utilizadas para cadenas de caracteres y las comillas simples para caracteres simples en si.
En bash tenemos dos tipos de encomillado y su diferencia a los lenguajes de programación tal como C/C++ o Matlab es el siguiente:
- Debil: Utiliza las commillas dobles.
- Fuerte : Utiliza comillas simples.
Si deseamos <b>expandir nuestro argumento</b> es necesario utilizar las commillas debiles o <b>comillas dobles</b>.
```sh
IPN="ICE | ESIME Z"
echo "Carrera y escuela: $IPN"
#> Carrera y escuela: ICE | ESIME Z
```
Y si <b>no deseamos expandir nuestro argumento</b> es necesario utilizar las commillas fuertes o <b>comillas simples</b>.
```sh
IPN="ICE | ESIME Z"
echo 'Carrera y escuela: $IPN'
#> Carrera y escuela: $IPN
```
O tambien podemos utilizar "\" dentro de nuestro encomillado doble para evitar expandir el argumento .
```sh
IPN="ICE | ESIME Z"
echo "Carrera y escuela: \$IPN"
#> Carrera y escuela: $IPN
```

# HELP :sos:
En algunos momentos es necesario visualizar información extra, para ello utilizamos lo siguiente:
```sh
help [comando]
```

## 05 - HolaMundoDebugMode.md :exclamation:
El "debug mode" o "modo de depuración" es una caracteristica la cuan nos permite recorrer las secuencias de comandos línea por línea, inspeccionando
los valores de las variables y el estado de la secuencia de comandos a medida que se ejecuta. Esto puede ser útil para depurar secuencias de comandos
que no funcionan como se esperaba.
Para poder activar este modo de depuración, podemos utilizar el siguiente comando:
```sh
set -x
```
"-x" nos permite recorrer la secuencia línea por línea, y si deseamos desactivarlo solo es necesario:
```sh
set +x
```
Una vez que tenemos activado el modo de depuración, podemos avanzar línea por línea utilizando los siguientes comandos:
```sh
next            # Nos permite avanzar el script a la siguiente línea.

step            # Nos permite avanzar el script a la siguiente línea, pero de igual
                # manera ejecuta la linea en cuention.

continue        # Ejecuta el script hasta que llegue a un punto dw quiebre o al
                # final de nuestro script.

break [nLinea]  # Finalza la ejecución en la línea de código indicada y se puede
                # inspeccionar el valor de las variables y el estado del script.

clear [nLinea]  # Elimina el breakpoint en la linea especificada.
```