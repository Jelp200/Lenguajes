"""
** #########################################################################################
**      Archivo: 06-Entradas.py
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Notas:
**          En este archivo veremos como poder ingresar datos dados por el usuario.
** #########################################################################################
"""

# Funcion principal

result = input("De un mensaje: ")

print(result)
print("El resultado es: ", result)
print("Fin del programa.")

n1 = int(input("De el primer numero: "))
n2 = int(input("De el segundo numero: "))
S = n1 + n2

print("El resultado es: ", S)

# Calificación del día
dia = int(input("¿Cómo ha ido tu día? (1 ~ 10): "))
print(dia)

""" ---------------------------------------- N O T A S ----------------------------------------

"""

""" °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° S A L I D A °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
Su salida será la siguiente:

De un mensaje: [Mensaje a dar]
[Mensaje dado]
El resultado es: [Mensaje dado]
Fin del programa.

De el primer numero: [Numero a dar]
De el segundo numero: [Numero a dar]
El resultado es: [Suma de los numeros dados]

¿Como ha ido tu dia? (1 ~ 10): [Numero a dar]
[Numero dado]
"""