# CONFIGURACIÓN :gear:
Es necesario configurar la STM32F103C8T6 desde lo más básico. Como ya se pudieron dar cuenta en el archivo donde se explipa todo tenemos una configuración
detallada, pero ¿Por qué esa configuración? Para ello es necesario explicar lo que es CMIS y DEVICE.

### CMIS
El "Cortex Microcontroller Software Interface Standard" (CMIS) es importante debido a que nos provee de una interfaz estandarizada para las herramientas de
desarrollo de software para acceder así a las caracteristicas del nucleo, en nuestro caso un procesador Cortex-M. Al momento de marcar la casilla "core" en
dicha configuración nos aseguramos que los archivos y funciones del core son incluidas en el proyecto y así permitiéndonos utilizar eficazmente las 
características del uControlador.

### DEVICE
Al momento de entrar a la parte de dispositivo es necesario marcar la casilla "startup" debido a que esto nos asegura que los archivos de de inicializacion
de nuestro uControlador son incluidos en el proyecto.

### OTRAS CONFIGURACIONES
Para poder tener un rendimiento optimo de nuestro código es necesario configurar otras pequeñas cosas, la primera es el lenguaje a utilizar, en nuestro caso
sera "c99", esto debido a que nos incorpora muchas más cosas para realizar una mejor códificación.
<div>
    <img src="/08 - uControladores/08 - 01 - BLUEPILL/01 - 00 - Extras/C/c99.PNG">
</div>
Una vez realizada esta parte es necesario realizar varios cambios en la parte de "Debug", en principio configuraremos el reloj del nucelo, de 10MHz a 8MHz,
esto debido a que nuestra hoja de datos así lo marca.
<div>
    <img src="/08 - uControladores/08 - 01 - BLUEPILL/01 - 00 - Extras/C/D1.PNG">
</div>
Y por ultimo marcaremos la casilla de "Reset and Run" debido que al momento de cargar el código no tendremos que estar presionando el botón de reset cada vez
que deseamos visualizar el resultado.
<div>
    <img src="/08 - uControladores/08 - 01 - BLUEPILL/01 - 00 - Extras/C/D2.PNG">
</div>

Una vez teniendo todo lo anterior podemos comenzar a programar.