# ESTRUCTURA GENERALD DE UN PROGRAMA EN SH :shield:
La estructura básica de un programa o script en shell que estaremos manejando será la siguiente:

### 1. Encabezado.
En esta parte del programa nosotros tendremos la oportunidad de describir nuestro programa, el nombre del archivo, el sistema operativo, las herramientas
utilizadas y demás cosas que nosotros creamos necesarias para que cualquier otro programador/ingeniero sepa de lo que va nuestro código o programa.
```zsh
#!/bin/bash
#** #########################################################################################
#**      Archivo: [Nombre del archivo].sh
#**      SO: [SO que se utiliza]
#**      Herramienta: [Herramientas que se utilizaron]
#**      Descripción:
#**          Pequeña descripción del programa.
#** #########################################################################################
#*
```

### 2. Variables.
En esta parte es posible declarar variables para almacenar valores que se utilizarán en el script.
```zsh
nombre = "Jorge"
edad = 23
```

### 3. Comandos y lógica de programación.
Aquí es donde se escriben los comandos que realizarán las acciones deseadas. Puede incluir operaciones aritméticas, llamadas a comandos del sistema,
estructuras de control como if, for, while, etc.
```zsh
echo "Hola, $nombre. Tu edad es $edad años."
if [ $edad -gt 18 ]; then
    echo "Eres mayor de edad."
else
    echo "Eres menor de edad."
fi
```

### 4. Funciones.
Se pueden definir funciones para agrupar bloques de código y hacer el script más modular y mantenible.
```zsh
function saludar() {
    echo "Hola, $1"
}

saludar "Jorge"
```