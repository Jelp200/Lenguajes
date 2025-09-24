"""
** #########################################################################################
**      Archivo: 06-Entradas.py
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Notas:
**          Operadores aritmeticos.
**              Suma                ->      +
**              Resta               ->      -
**              Producto            ->      *
**              Cociente            ->      /
**              Modulo              ->      %
**              Exponencial         ->      **
**              Cociente entero     ->      //
**
**          Operadores relacionales.
**              Mayor que           ->          >
**              Menor que           ->          <
**              Identicamente a     ->          ==
**              Mayor igual a       ->          >=
**              Menor igual a       ->          <=
**              Diferente de        ->          !=
**
**          Operadores de asignación.
**              Igual a             ->          =
**              Suma                ->          +=          Es lo mismo a : x = x + n
**              Resta               ->          -=          Es lo mismo a : x = x - n
**              Producto            ->          *=          Es lo mismo a : x = x * n
**              Cociente            ->          /=          Es lo mismo a : x = x / n
**              Mod                 ->          %=          Es lo mismo a : x = x % n
**
**          Operadores booleanos.
**              AND                 ->          and
**              OR                  ->          or
**              NOT                 ->          not
** #########################################################################################
"""

# ++++++++++++++++++++++++++++++++++++++ I M P O R T S ++++++++++++++++++++++++++++++++++++++
import os
# +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

# ||||||||||||||||||||||||||||| V A R I A B L E S  G L O B A L E S |||||||||||||||||||||||||||
n1 = 0; n2 = 0; A = True; B = False
S = 0; R = 0; M = 0; D = 0; P = 0; E = 0; Res = 0
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
    print("\t\t\tOPERADORES")
    print("\t\t1.- Aritmeticos")
    print("\t\t2.- Relacionales")
    print("\t\t3.- Asignación")
    print("\t\t4.- Booleanos")
    print("\t\t5.- Salir")

def Aritmeticos():                      # Operadores aritmetico
    pause()
    cls()
    n1 = int(input("\tDe un el 1er número: ")); n2 = int(input("\tDe un el 2do número: "))

    S = n1 + n2
    R = n1 - n2
    P = n1 * n2
    D = n1 / n2
    Di = n1 // n2
    M = n1 % n2
    E = n1 ** n2

    print(f"\tSuma de {n1} y {n2} es: {S}\n\tResta de {n1} y {n2} es: {R}\n\tProducto de {n1} y {n2} es: {P}")
    print(f"\tCociente de {n1} y {n2} es: {D}\n\tModulo de {n1} y {n2} es: {M}\n\tExponente de {n1} y {n2} es: {E}")
    print(f"\tCociente entero de {n1} y {n2} es: {Di}")

def Relacionales():                     # Operadores relacionales
    pause()
    cls()
    n1 = int(input("\tDe un el 1er número: ")); n2 = int(input("\tDe un el 2do número: "))
    Res = (n1 == n2)
    print(f'\tEl resultado de {n1} == {n2} es: {Res}')

    Res = (n1 != n2)
    print(f'\tEl resultado de {n1} != {n2} es: {Res}')

    Res = (n1 < n2)
    print(f'\tEl resultado de {n1} < {n2} es: {Res}')

    Res = (n1 > n2)
    print(f'\tEl resultado de {n1} > {n2} es: {Res}')

    Res = (n1 <= n2)
    print(f'\tEl resultado de {n1} <= {n2} es: {Res}')

    Res = (n1 >= n2)
    print(f'\tEl resultado de {n1} >= {n2} es: {Res}')

def Booleanos():                        # Operadores booleanos
    pause()
    cls()
    Res = A and B
    print(f'\tA && B = {Res}')

    Res = A or B
    print(f'\tA || B = {Res}')

    Res = not A
    print(f'\t!A = {Res}')

def Asignacion():                       # Operadores de asignación
    pause()
    cls()
    n1 = int(input("\tDe un el 1er número: ")); n2 = int(input("\tDe un el 2do número: "))

    Aux = n1
    Aux += n2
    print(f'\tEl resultado de {n1} += {n2} es: {Aux}')

    Aux = n1
    Aux -= n2
    print(f'\tEl resultado de {n1} -= {n2} es: {Aux}')

    Aux = n1
    Aux *= n2
    print(f'\tEl resultado de {n1} *= {n2} es: {Aux}')

    Aux = n1
    Aux /= n2
    print(f'\tEl resultado de {n1} /= {n2} es: {Aux}')

    Aux = n1
    Aux %= n2
    print(f'\tEl resultado de {n1} %= {n2} es: {Aux}')

def ExOpc(opc):                            # Ejecutamos la opciones
    if opc == 1:
        Aritmeticos()
    elif opc == 2:
        Relacionales()
    elif opc == 3:
        Asignacion()
    elif opc == 4:
        Booleanos()
    elif opc == 5:
        print("\tHasta la proxima...")
    else:
        print("\tOpción no valida...")
# °°°°°°°°°°°°°°°°°°°°°°°°°°°° F U N C I O N  P R I N C I P A L °°°°°°°°°°°°°°°°°°°°°°°°°°°°°
while True:
    Menu()
    opc = int(input("\tDe una opcion: "))

    if opc == 5:
        break

    ExOpc(opc)

# °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°

""" ---------------------------------------- N O T A S ----------------------------------------
Inicializamos las variables con 0 para no tener "basura" dentro de ellas, podemos ver que util_
izamos "print(f)" para poder visualizar los resultados y variables dentro de nuestra función de
salida, ya que sin ella sono veriamos "Suma de {n1} y {n2} es: {S}" en vez de "Suma de [Numero
dado] y [Numero dado] es: [Suma de numeros]".

Utilizamos funciones para poder trabajar con el programa.
"""