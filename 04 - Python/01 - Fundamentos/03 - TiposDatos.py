"""
** #########################################################################################
**      Archivo: 03-TiposDatos.py
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Notas:
**          En este archivo veremos los tipos de datos en Python.
** #########################################################################################
"""

# Numericos (int, float, complex)
# Tipo diccionario (dictionary)
# Boleanos (0, 1)
# De inicio (set)
# De tipo secuenciales (Strings, tupple, list)

# Funcion principal.

x = 13; print(str(x)); print(type(x))
x = 05.1613; print(str(x)); print(type(x))
x = 'K'; print(x + "\n" + str(type(x)))
x = True; print(str(x) + "\n" + str(type(x)))
x = False; print(str(x) + "\n" + str(type(x)))

""" ---------------------------------------- N O T A S ---------------------------------------- 
Es necesario acotar que para poder visualizar nuestros resultados ya sean variables de tipo
numericas o boleanas necesitamos utilizar la función "str(variabke)", esto para poder converir
la variable en cuaestio a una cadena de caracteres, esto no aplica a datos de tipo dicccionario
o de tipo secuenciales/string.

De igual manera podemos observar que podemos concatenar/juntar variables y funciones en una sola
linea de código, esto lo hacemos para poder visualizar el dato que deseamos y su tipo de dato.

Type nos ayuda a saber que tipo de dato estamos manejando.
"""

""" °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° S A L I D A °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
Su salida será la siguiente:

13
<class 'int'>

5.1613
<class 'float'>

K
<class 'str'>

True
<class 'bool'>

False
<class 'bool'>
"""