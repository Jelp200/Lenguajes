"""
** #########################################################################################
**      Archivo: Matrix.py
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
"""
# ++++++++++++++++++++++++++++++++++++++ I M P O R T S ++++++++++++++++++++++++++++++++++++++
import random
import time
# +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

caracteres = "IPNESIMEICEZACATENCOICE"                 # Caracteres

# ------------------------------------- F U N C I O N E S ------------------------------------
def generar_caracter():                             # Función para generar un carácter aleatorio
    return random.choice(caracteres)

def generar_codigo(longitud):                       # Función para generar una cadena de código aleatoria
    codigo = ""
    for _ in range(longitud):
        codigo += generar_caracter()
    return codigo

def matrix():                                       # Función principal del programa
    ancho_terminal, alto_terminal = 100, 40

    # Configurar la terminal
    try:
        from ctypes import windll
        kernel32 = windll.kernel32
        kernel32.SetConsoleMode(kernel32.GetStdHandle(-11), 7)
    except ImportError:
        pass

    # Bucle principal
    while True:
        # Generar una cadena de código para cada columna
        columnas = []
        for _ in range(ancho_terminal):
            codigo = generar_codigo(random.randint(5, alto_terminal))
            columnas.append(codigo)

        # Imprimir las columnas en la terminal
        for i in range(alto_terminal):
            for j in range(ancho_terminal):
                if i < len(columnas[j]):
                    print(columnas[j][i], end="")
                else:
                    print(" ", end="")
            print()

        # Pausa entre cada iteración
        time.sleep(0.1)

        # Limpiar la terminal
        if hasattr(windll, "kernel32"):
            kernel32 = windll.kernel32
            kernel32.SetConsoleMode(kernel32.GetStdHandle(-11), 1)
            kernel32.SetConsoleCursorPosition(kernel32.GetStdHandle(-11), 0)

        else:
            print("\033c", end="")  # Linux

# °°°°°°°°°°°°°°°°°°°°°°°°°°°° F U N C I O N  P R I N C I P A L °°°°°°°°°°°°°°°°°°°°°°°°°°°°°
if __name__ == "__main__":
    matrix()
# °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°