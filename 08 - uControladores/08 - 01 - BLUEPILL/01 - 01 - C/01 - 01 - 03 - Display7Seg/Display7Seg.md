# DISPLAY DE 7 SEGMENTOS :tv:
Es posible utilizar un display de siete segmentos junto con nuestra BluePill, para ello es necesario conocer que los displays de 7 segmentos se componen de
LEDs los cuales estan conectados de dos formas.

### Cátodo común :heavy_minus_sign:
En la configuración de cátodo común todos los LEDs que componen los siete segmentos del display comparten el mismo cátodo, y puede visualizarse de la siguiente manera:
<div>
    <img src="/IMGS/uControladores/D7Scc.png">
</div>

### Ánodo común :heavy_plus_sign:
En la configuración de ánodo común todos los LEDs que componen los siete segmentos del display comparten el mismo ánodo, y puede visualizarse de la siguiente manera:
<div>
    <img src="/IMGS/uControladores/D7Sac.png">
</div>

### Conexiones :electric_plug:
Ya sea que tengamos un display de siete segmentos de cátodo o ánodo común sus conexiones o pines serán los siguientes:
<div>
    <img src="/IMGS/uControladores/D7Spin.png">
</div>

### Funcionamiento
El funcionamiento del display de 7 segmetos va de la mano con lo que queramos mostrar en el, por ejemplo si deseamos mostrar un 1 es necesario tener encendido el
segmento "b" y "c", por lo cual tendremos un 1 lógico en dichos segmentos, entonces para poder mostrar todos los números es necesario hacer lo siguiente:
<div>
    <img src="/IMGS/uControladores/D7Stbl.JPG">
</div>

Conociendo todo lo anterior ya es posible realizar nuestro primer programa con el display de 7 segmentos y visualizar numeros.