#** -------------------------------------------------------------------------------------------------------------
#**	Archivo: 04-Comillas.sh
#**	S0: Kali linux
#**	Herramienta: GNU nano 7.2
#**              Visual Studio Code
#**	Notas:
#**		En este archivo veremos la importancia del uso del encomillado en el bash.
#** -------------------------------------------------------------------------------------------------------------

#! COMILLAS DEBILES O SIMPLES
read -p "De su edad: " edad
echo "Su edad es $edad"

#! COMILLAS FUERTES O DOBLES
read -p "De su sexo: " sexo
echo 'Su sexo es $sexo'

#! USO DEL "\"
read -p "De su nombre: " nombre
echo "Su nombre es: \${nombre}"