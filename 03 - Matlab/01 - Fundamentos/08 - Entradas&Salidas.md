# ENTRADAS Y SALIDAS :mailbox:

!PENDIENTE¡

En Matlab al igual que otro lenguaje de programación, está diseñado para leer y escribir en una gran cantidad de formatos. Las librerias incorporadas
por defecto pueden apoyar una gran variedad de texto, imagen, video, audio, datos y más formatos.

Antes de incorporar Matlab a nuestro archivo, es necesario preguntarnos que es lo que deseamos hacer con dichos datos y cómo esperamos que la PC
organice los datos. Digamos que tenemos un archivo txt/svg en el siguiente formato:
```txt
Fruta, TotalUnidades, UnidadesRestantesDespuesDeLaVenta, PrecioDeVentaPorUnidad
Manzana, 200, 67, $3
Platano, 300, 172, $2
Piña, 50, 12, $22
```
Podemos observar que la primer columna es cadenas, miestras que la segunda como la tercer columna son numericas, y la tercer columna es de tipo moneda.
Nosotros deseamos saber cuanta ganancia hemos generado en el día utilizando Matlab, en principio cargaremos el archivo tipo txt/svg. Después de haber
verificado el linkm podremos observar los datos tipo numero y cadena del archivo txt son manejados por "textscan", así que podríamos intenrar lo sig.
```Matlab
Fruta, TotalUnidades, UnidadesRestantesDespuesDeLaVenta, PrecioDeVentaPorUnidad
IdArchivo = fopen('dir/ejemplo.txt');                       % Cargamos el archivo desde dir
C = textscan(IdArchivo, '%s %f %f %s', '');
```