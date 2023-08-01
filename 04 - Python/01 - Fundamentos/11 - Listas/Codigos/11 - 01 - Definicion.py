"""
** #########################################################################################
**      Archivo: 11 - 01 - Definicion.py
**      SO: Windows 10
**      Herramienta: Visual Studio Code
** #########################################################################################
"""
# °°°°°°°°°°°°°°°°°°°°°°°°°°°° F U N C I O N  P R I N C I P A L °°°°°°°°°°°°°°°°°°°°°°°°°°°°°
ESIMES = ["ESIMEZ", "ESIMEC", "ESIMEA", "ESIMET"]                       # Definimos la lista

print(ESIMES)                                                           # Imprimimos la lista
print(ESIMES[0])
print(ESIMES[-1])

print(ESIMES[0 : 2])                                                    # Imprimimos los rangos
print(ESIMES[: 3])
print(ESIMES[1 :])

""" ---------------------------------------- N O T A S ----------------------------------------
Podemos observar que cuando imprimimos "ESIMES[-1]" observamos que visualizamos el ultimo ele_
mento de la sita, si cambiamos esto a "-2" tenemos el numero anterior al que visualizamos 1ro,
entonces los elementos negativos recorren la lista de atrás hacia adelante, entonces si tenem_
os "-4" tendremos ESIMEZ osea "ESIMES[0]".

En el segundo bloque de código observamos que en principio imprimimos "ESIMEZ" y "ESIMEC", des_
pues "ESIMEZ" a "ESIMEA" y por ultimo "ESIMEC" a "ESIMET", podemos decir que la primer línea de
este bloque de código imprime los elementos deseados, la segunda imprime desde el principio a
un elemento definido y la tercera comienza desde el elemento indicado hasta el final de la lista.
"""

""" °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° S A L I D A °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
['ESIMEZ', 'ESIMEC', 'ESIMEA', 'ESIMET']
ESIMEZ
ESIMET

['ESIMEZ', 'ESIMEC']
['ESIMEZ', 'ESIMEC', 'ESIMEA']
['ESIMEC', 'ESIMEA', 'ESIMET']
"""