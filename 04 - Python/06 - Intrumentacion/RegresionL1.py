import numpy as np
from scipy import stats

# Datos de ejemplo
Y = np.array([0.28, 0.32, 0.34, 0.42, 0.574, 0.64, 1.04, 1.28, 3.92, 4.56, 5.04])
X = np.array([357, 390, 417, 509, 581, 694, 921, 1038, 1278, 1653, 2429])

# Realizar la regresión lineal
slope, intercept, r_value, p_value, std_err = stats.linregress(X, Y)

# Imprimir los resultados
print("Pendiente (m):", slope)
print("Intercepto (b):", intercept)
print("Coeficiente de correlación (r):", r_value)
print("Valor p:", p_value)
print("Error estándar:", std_err)
