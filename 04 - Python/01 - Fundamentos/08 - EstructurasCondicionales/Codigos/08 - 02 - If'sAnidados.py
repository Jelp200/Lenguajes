"""
** #########################################################################################
**      Archivo: 08 - 02 - If'sAnidados.py
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**         if(condición 1):
**              Código en PY
**              if(condición 2):
**                  Código en PY
**                  if(condición 3):
**                      ...
**                      if's
**                      ...
** #########################################################################################
"""
# °°°°°°°°°°°°°°°°°°°°°°°°°°°° F U N C I O N  P R I N C I P A L °°°°°°°°°°°°°°°°°°°°°°°°°°°°°
n = 0

n = int(input("De un numero: "))

if(n > 0):
    print("\tDio un numero mayor a 0")
    n = int(input("De un nuevo numero: "))
    if(n >= 0):
        print(f'\tDio un numero mayor a 0 y es: {n}')
print("Fin del programa...")
# °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°

""" ---------------------------------------- N O T A S ----------------------------------------
Se ingresa un numero y se evalua, si se cumple esta condición se ingresa a la condicional y
después se evalua con otra condicional, si se cumple se ingresa a la segunda condicional, y si
no se termina el programa.
"""

""" °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° S A L I D A °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
De un numero: [Numero a dar]
// [Numero a dar] > 0? , si es así:
        Dio un numero mayor a 0
De un nuevo numero: [Numero a dar]
// [Numero a dar] >= 0? , si es así:
        Dio un numero mayor a 0 y es: [Numero dado]
Fin del programa...
// Si no es así (sin utilizar else):
Fin del programa
"""