#!/bin/bash
#** #########################################################################################
#**      Archivo: 04-HolaMundo.sh
#**      Sistema O: Kali linux
#**      Herramienta: VSC
#**                   GNU nano 7.2
#**      Descripción:
#**          En este archivo realizaremos nuestro primer comando en el shell.
#** #########################################################################################
#*

#* VISUALISAMOS EN CONSOLA NUESTRA CADENA CON "echo"
echo "Hola Mundo"

#* VISUALIZAMOS UNA NUEVA CADENA SIN SALTO DE LINEA
echo -n "ESIME ZACATENCO | ELECTRONICA"

#* VISUALIZAMOS UNA NUEVA CADENA CON SECUENCIAS DE ESCAPE
echo -e "\n\n\tESIME ZACATENCO | ELECTRONICA\n\t2024"

# **************************************** N O T A S ****************************************
# - "echo" es un comando el cual nos permite imprimir un  texto en la salida estandar.
# - OPCIONES COMUNES:
#   > "-n" Evita que 'echo' imprima una nueva línea al final del texto. Es útil cuando se
#     desea imprimir múltiples líneas sin que haya un salto de línea entre ellas.
#   > "-e" Habilita la interpretación de secuencias de escape dentro del texto, como '\n' para
#     nueva línea o '\t' para tabulación.
#   > "-E" Desactiva la interpretación de secuencias de escape. Esto es útil cuando se desea
#     imprimir texto que contiene caracteres de escape sin que sean interpretados.
#   > "--help"
#   > "--version"
# *******************************************************************************************