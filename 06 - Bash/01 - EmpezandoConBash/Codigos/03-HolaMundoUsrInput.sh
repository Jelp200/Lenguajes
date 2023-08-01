#** -------------------------------------------------------------------------------------------------------------
#**	Archivo: 03-HolaMundoUsrInput.sh
#**	S0: Kali linux
#**	Herramienta: GNU nano 7.2
#**              Visual Studio Code
#**	Notas:
#**		En este archivo pediremos al usuario que ingrese su nombre y escuela de dos maneras diferentes.
#** -------------------------------------------------------------------------------------------------------------

#! 1ER FORMA
echo "Quien eres?"
read nombre
echo "Hola, $nombre"

#! 2DA FORMA
read -p "Ingresa su escuela $nombre: " escuela

#! VISUALIZACION
printf "Tu nombre es %s y tu escuela es %s" "$nombre" "$escuela"