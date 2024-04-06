#!/bin/bash
#** #########################################################################################
#**      Archivo: 05-HolaMundoVar.sh
#**      Sistema O: Kali linux
#**      Herramienta: VSC
#**                   GNU nano 7.2
#**      Descripción:
#**          En este archivo veremos el como declarar variables y llamarlas.
#** #########################################################################################
#*

#* DECLARAMOS NUESTRAS VARIABLES
msj1="Jelp200"
msj2="Electronica"
edad=23

#* MANDAMOS A LLAMAR A LAS VARIABLES
echo "Usuario: $msj1"
echo "Especialidad: ${msj2}"
printf "Edad: %i" "$edad"

# **************************************** N O T A S ****************************************
# En bash podemos utilizar tanto "echo" como "printf" para visualizar elementos en pantalla
# las diferencias radican en:
#   - ECHO:
#       > Imprime su argumento en la salida estándar, seguido de una nueva línea.
#       > Interpreta ciertas secuencias de escape, como '\n' para nueva línea o '\t' para
#         tabulación, cuando se utiliza con la opción '-e'.
#       > Es más común y está disponible en prácticamente todas las implementaciones de shell.
#       > No proporciona un control tan detallado sobre el formato de salida y es más adecuado
#         para imprimir texto simple.
#   - PRINTF:
#       > Nos permite un control más preciso sobre el formato de salida, utilizando
#         especificadores de formato similares a los de printf en C.
#       > Siempre interpreta secuencias de escape sin necesidad de activar una opción
#         especifica0
#       > Es menos común en scripts de shell más simples, pero está disponible en la
#         mayoría de las implementaciones de Bash y en sistemas Unix.
#       > Proporciona un control más detallado sobre el formato de salida, lo que permite
#         al usuario especificar la longitud del campo, la alineación, la precisión, etc.
#
# En general, echo es más eficiente que printf para imprimir texto simple, ya que printf
# implica una mayor sobrecarga de procesamiento debido a su flexibilidad de formato adicional.
# *******************************************************************************************