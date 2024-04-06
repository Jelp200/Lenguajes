# EJECUTAR UN ARCHIVO Y CAMBIAR PERMISOS :shield:
Para poder ejecutar el archivo deseado lo que haremos primero será cambiar los permisos de nuestro archivo o directorio, esto lo realizaremos
con "chmod" (change mod) el cual nos permite controlar quien puede leer, escribir o ejecutar el archivo.
Su sintaxis esta dada por:
```zsh
chmod [opciones] [modo] [archivo]
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
```zsh
chmod +x 04-HolaMundo.sh
./04-HolaMundo.sh
```