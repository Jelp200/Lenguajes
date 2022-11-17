# Archivos :open_file_folder:
En el lenguaje C podemos trabajar con archivos, ya sea para modificar, crear o guardar cualquier tipo de dato ya sea musica, bases de datos simples, etc. Los tipos de archivos los cuales vamos a manejar son:
### 1. Archivos de texto.
Podemos guardar cualquier texto ingresado, lo malo es que que el texto que ingresemos solo podra ser texto plano, nada de subrayado, negritas u otro tipo de arreglo al texto.
### 2. Archivos binarios.
Podremos guardar texto, ya sea plano o  con arreglos, deigual manera podremos guardar otros tipos de datos tales como música, fotos y muchos otros tipos de datos, ya que el guardado, modificacion o creación de estos datos se haran en lenguaje maquina y esto nos dara muchas ventajas tales como tener archivos multiplataforma.
Dentro de el manejo de archivos tenemos funciones las cuales nos ayudaran a poder hacer manejo de dichos archivos, estas son: 
```txt
              F U N C I O N              S I G N I F I C A D O
╔══════════════════════════════════════╗
║                fopen()               ║    <-      Abre un archivo.
╠══════════════════════════════════════╣
║               fclose()               ║    <-      Cierra un archivo.
╠══════════════════════════════════════╣
║                fgets()               ║    <-      Lee una cadena de un archivo.
╠══════════════════════════════════════╣
║                fputs()               ║    <-      Escribe una cadena en un archivo.
╠══════════════════════════════════════╣
║                fseek()               ║    <-      Busca un byte (palabra) en especifico de un archivo.
╠══════════════════════════════════════╣
║              fprintf()               ║    <-      Escribe una salida con formto en el archivo.
╠══════════════════════════════════════╣
║               fscanf()               ║    <-      Entrada con formato desde el archivo.
╠══════════════════════════════════════╣
║                 feof()               ║    <-      Devuelve TRUE si se llega al final de un archivo.
╠══════════════════════════════════════╣
║               ferror()               ║    <-      Devuelve TRUE si se produce un error.
╠══════════════════════════════════════╣
║               rewind()               ║    <-      Coloca el localizador de pisición del archivo al principio de este.
╠══════════════════════════════════════╣
║               remove()               ║    <-      Borra un archivo.
╠══════════════════════════════════════╣
║               fflush()               ║    <-      Vacía un archivo.
╚══════════════════════════════════════╝
```
El uso de estas funciones dependera de que se quiera hacer, pero se puede declarar el uso de la siguiente manera:
```C
FILE* Archivo;

char Direccion[] = "C:\\Usuarios\\Jelp200\\VSC\\Ejemplo";

Archivo = fopen(Direccion, "parametros");

// ...
// Código en C
// ...

```
Podemos ver que la función resirve la dirección donde deveria estar el archivo y un parametro, pero ¿Qué es un parametro? Veamos:
```txt

  P A R A M E T R O                                     S I G N I F I C A D O
╔═══════════════════╗
║         r         ║    <-      Lectura (El archivo debe existir).
╠═══════════════════╣
║         w         ║    <-      Escrituta (Si el archivo no existe se crea, si existe se sobre escribe).
╠═══════════════════╣
║         a         ║    <-      Escritura al final del documento (Si no existe se crea/añade).
╠═══════════════════╣
║         wb        ║    <-      Cierra un archivo binario (Escritura).
╠═══════════════════╣
║         rb        ║    <-      Binario (Solo lectura).
╠═══════════════════╣
║         ab        ║    <-      Abre un archivo binario (Si no existe se crea/añade).
╠═══════════════════╣
║         r+        ║    <-      Lectura y escritua (El archivo debe existir).
╠═══════════════════╣
║         w+        ║    <-      Crea un archivo para escritua (Si existe se sobre escribe).
╠═══════════════════╣
║         a+        ║    <-      Añade o crea un archivo de texto (Lectura o escritura).
╠═══════════════════╣
║         rb+       ║    <-      Binario (Para actualización) "lectura y escritura".
╚═══════════════════╝
```
Entonces teniendo en conjunto ya una función con su respectivo parametro tenemos:
```C
FILE* Archivo = fopen("Ejemplo.txt", "a");

if(Archivo == NULL){
    puts("\n\tError al crear/acceder al archivo.");
}else{
    char letra;

    while ((letra = getchar()) != '\n'){
        fputc(letra, Archivo);
    }
}

fclose(Archivo);

/*
fopen(Nombre_archivo, Parametro)
putc(Caracter, Apuntador_al_archivo)
fclose(Apuntador_al_archivo)
*/
```