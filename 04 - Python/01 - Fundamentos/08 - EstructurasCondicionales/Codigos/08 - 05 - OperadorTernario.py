"""
** #########################################################################################
**      Archivo: 08 - 05 - IfElseIf.py
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Notas:
**         [Expresión 1] if (Condición) else [Expresión 2]
** #########################################################################################
"""
# °°°°°°°°°°°°°°°°°°°°°°°°°°°° F U N C I O N  P R I N C I P A L °°°°°°°°°°°°°°°°°°°°°°°°°°°°°
n1 = 0; n2 = 0

n1 = int(input("De el primer número: ")); n2 = int(input("De el segundo número: "))

Condicion = (n1 > n2)

print(f'{n1} > {n2}') if Condicion else print(f'{n1} < {n2}')
# °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°

""" °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° S A L I D A °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
De el primer número: [Numero a dar]
De el segundo número: [Numero a dar]

[1er numero dado] >/< [2do numero dado]
"""