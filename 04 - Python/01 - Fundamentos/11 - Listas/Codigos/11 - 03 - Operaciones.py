"""
** #########################################################################################
**      Archivo: 11 - 02 - CambioDeValores.py
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**          Podemos operar a nuestras listas de la siguiente manera:
**              - Iteración
**              - Tamaño de la lista "len(lista)"
**              - Añadir elementos"lista.append(elemeto)"
**              - Añadir elementos en un índice "lista.insert(indice ,elemento)"
**              - Remover elemento "lista.remove(elemento)"
**              - Remover último elemento "lista.pop()"
**              - Remover un elemento en un indice en especifico
**              - Eliminar todos los elementos de una lista "lista.clear()"
**              - Eliminar la lista
** #########################################################################################
"""

# ++++++++++++++++++++++++++++++++++++++ I M P O R T S ++++++++++++++++++++++++++++++++++++++
import os
# +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

# ||||||||||||||||||||||||||||| V A R I A B L E S  G L O B A L E S |||||||||||||||||||||||||||
IPN = ["ESIME", "ENCB", "ESCA", "ESIT", "ESIA"]
# ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

# ------------------------------------- F U N C I O N E S ------------------------------------
def cls():                              # Limpiar pantalla
    if os.name == 'nt':         # Windows
        os.system('cls')
    else:                       # Linux
        os.system('clear')

def pause():                            # Pausar programa
    input("\t\tPresione enter para continuar...")

def Menu():                             # Mostrar menú de opciones
    pause()
    cls()
    print("\t\t\tOPERACIONES EN LISTA")
    print("\t\t1.- Ver lista.")
    print("\t\t2.- Iteración.")
    print("\t\t3.- Tamaño.")
    print("\t\t4.- Añadir elementos.")
    print("\t\t5.- Añadir elementos en un índice.")
    print("\t\t6.- Remover un elemento.")
    print("\t\t7.- Remover último elemento.")
    print("\t\t8.- Remover un elemento en un índice en especifico.")
    print("\t\t9.- Eliminar todos los elementos de una lista.")
    print("\t\t10.- Eliminar lista.")
    print("\t\t11.- Salir.")

def Lista():
    print(IPN)

def Iteracion():
    for escuelas in IPN:
        print(escuelas)
    else:
        print("No hay más elementos en la lista...")

def Tamanho():
    print(len(IPN))

def anhadirE():
    IPN.append("ESCOM")
    print(IPN)

def anahadirEenI():
    IPN.insert(2, "UPIITA")
    print(IPN)

def eliminarE():
    IPN.remove("ESIT")
    print(IPN)

def ultimoE():
    IPN.pop()
    print(IPN)

def eliminarEenI():
    del IPN[0]
    print(IPN)

def eliminarEdeLista():
    IPN.clear()
    print(IPN)

def eliminarLista():
    del IPN
    print(IPN)

def ExOpc(opc):                            # Ejecutamos la opciones
    if opc == 1:
        Lista()
    elif opc == 2:
        Iteracion()
    elif opc == 3:
        Tamanho()
    elif opc == 4:
        anhadirE()
    elif opc == 5:
        anahadirEenI()
    elif opc == 6:
        eliminarE()
    elif opc == 7:
        ultimoE()
    elif opc == 8:
        eliminarEenI()
    elif opc == 9:
        eliminarEdeLista()
    elif opc == 10:
        eliminarLista()
    elif opc == 11:
        print("\tHasta la proxima...")
    else:
        print("\tOpción no valida...")

# °°°°°°°°°°°°°°°°°°°°°°°°°°°° F U N C I O N  P R I N C I P A L °°°°°°°°°°°°°°°°°°°°°°°°°°°°°
while True:
    Menu()
    opc = int(input("\tDe una opcion: "))

    if opc == 11:
        break

    ExOpc(opc)

""" ---------------------------------------- N O T A S ----------------------------------------
Lo que hacemos es indicar en que elemento deseamos cambiar el valor por el indicado.
"""

""" °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° S A L I D A °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
['ESIMEZ', 'ESIMEC', 'ESIMEA', 'ESCOM']
"""