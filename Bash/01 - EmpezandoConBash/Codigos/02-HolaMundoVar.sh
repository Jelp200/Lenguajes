#** -------------------------------------------------------------------------------------------------------------
#**	Archivo: 02-ESIMEZVar.sh
#**	S0: Kali linux
#**	Herramienta: GNU nano 7.2
#**
#**	Notas:
#**		En este archivo visualizaremos un "Hola mundo" con variables establecidas, para poder ejecutar el archivo
#**     hacemos lo siguiente:
#**
#**			chmod +x 02-ESIMEZ.sh
#**			./02-ESIMEZ.sh
#** -------------------------------------------------------------------------------------------------------------

#! Variable(s)
# [nombreVar]=valor
variable="Zacatenco"                            # !OJO¡ Es importante no dejar espacios en la asignación de las
                                                # variables que utilicemos.

#! Visualizacion
printf "ESIME %s" "$variable"                   # Utilizamos "printf para imprimir los datos de manera correcta"