# FUNDAMENTOS HTML :runner:
## El rol de HTML :rocket:
Gracias a HTML es que podemos visualizar paginas web sin ningún problema, esto debido a que HTML es un lenguaje (no de programación) el cual funge como
esqueleto de nuestras paginas web, es por ello que HTML es HyperText Markup Language.

HTML al ser un lenguaje de etiquetas es muy facil de aprender, por ejemplo, una etiqueta de declara de la siguiente manera:
```html
<!-- <tipoEtiqueta> </tipoEtiqueta> -->
```

Tenemos las siguientes etiquetas basicas con sus respectivos significados:
```html
<p> <!-- = Párrafos -->
<nav> <!-- = Navegaciones -->
<header> <!-- = Encabezado del sitio o elemento -->
<main> <!-- = Contenido principal -->
<footer> <!-- = Pie de página o elemento -->
```

## Estructura báscia de HTML :construction:
La <a href="./01 - Estructura básica/index.html">estructura básica</a> de un documento HTML esta dada por:
```html
<html> <!-- Declaramos el documento HTML -->
    <head> <!-- Información y metadatos de nuestra página web -->
        <title>ESIME Z - IPN</title> <!-- Titulo de nuestra página web -->
    </head>
    <body> <!-- Cuerpo de la página web -->
        <!-- Contenido de la página web -->
        <p>Contenido</p>
    </body>
</html>
```
<b>NOTA.</b> Podemos generar la estructura básica en html escribiendo lo siguiente: <b><i>html:5</b></i>

## Headings :headstone:
Hemos dicho que dentro de HTML tenemos varías etiquetas, entre ellas estan las etiquetas de encabezado las cuales como su nombre lo dice, son etiquetas
para encabezados o titulos, estos headings se declaran de la siguiente manera:
```html
<h1>Titulo principal de la página</h1> <!-- Tambien puede subdividir secciones de la página -->
<h2>Encabezado secundario</h2>
<h3>Titulos dentro de secciones</h3>
<h4>Subtitulos dentro de secciones/h4> <!-- h4, h5 y h6 tienen el mismo uso -->
<h5> </h5>
<h6> </h6>
```
Estos headings le indican al navegador que lo que va dentro de ellos es lo más importante del sitio web, pueden ser logotipos o el nombre de sitio web.
La importancia de estos headings van en cascada, siendo el <b><i>h1</b></i> el más importante, despues el <b><i>h2</b></i>, y así sucesivamente.
<b>NOTA.</b> Una regla es que solo podemos utilizar el <b><i>h1</b></i> una vez por archivo.

## Estructura del contenido :clasical_building:
El estructurar nuestro contenido en HTML significa etiquetar cada parte de nuestra página web en el lugar donde corresponde, algo importante a recalcar
es que dentro de esta estreuctura de páginas web tenemos tres secciones en común para todos los sitios web, el header, footer y la sección de navegación,
lo único que cambia es la parte del contenido.
HTML nos proporciona una serie de etiquetas para poder estructurar nuestro contenido, estas etiquetas son:
```html
<header> <!-- = Encabezado del sitio o elemento -->
<nav> <!-- = Navegaciones -->
<main> <!-- = Contenido principal -->
<section> <!-- = Sección dentro del contenido principal (Puede utilizarse multiples veces) -->
<article> <!-- = Notcias o entradas de información -->
<aside> <!-- = Barra lateral -->
<div> <!-- = Contenedor de contenido generico -->
<footer> <!-- = Pie de página o elemento -->
```
Esto puede verse el nuestra página web de la siguiente manera:
<img src="./imgs/Estructura.png" alt="Estructura del contenido">