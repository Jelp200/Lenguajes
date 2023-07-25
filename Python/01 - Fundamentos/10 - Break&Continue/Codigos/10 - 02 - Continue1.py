"""
** #########################################################################################
**      Archivo: 10 - 02 - Continue2.py
**      SO: Windows 10
**      Herramienta: Visual Studio Code
** #########################################################################################
"""
# °°°°°°°°°°°°°°°°°°°°°°°°°°°° F U N C I O N  P R I N C I P A L °°°°°°°°°°°°°°°°°°°°°°°°°°°°°
for i in range(6):
    if i % 2 == 0:
        print(f"Valor: {i}")
        continue

""" ---------------------------------------- N O T A S ----------------------------------------
Lo que hace el programa es evaliar una secuencia de numeros con la función "range()" la cual
crea una lista de la siguiente manera:
    
    range(inicio, fin, pasos)
"""

""" °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° S A L I D A °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
Valor: 0
Valor: 2
Valor: 4
"""