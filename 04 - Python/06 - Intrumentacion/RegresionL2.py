import numpy as np
import matplotlib.pyplot as plt
from scipy import stats

# Datos de ejemplo
Y = np.array([0.28, 0.32, 0.34, 0.42, 0.574, 0.64, 1.04, 1.28, 3.92, 4.56, 5.04])
X = np.array([357, 390, 417, 509, 581, 694, 921, 1038, 1278, 1653, 2429])

# Realizar la regresión lineal
slope, intercept, r_value, p_value, std_err = stats.linregress(X, Y)

# Crear la línea de regresión lineal
line = slope * X + intercept

# Configurar la figura y los ejes
plt.figure(figsize=(8, 6))
plt.scatter(X, Y, label='Datos')
plt.plot(X, line, color='red', label='Regresión lineal')

# Agregar etiquetas y leyenda
plt.xlabel('Voltaje [v]')
plt.ylabel('Lux [lm/m^2]')
plt.title('Regresión lineal')
plt.legend()

# Mostrar el gráfico
plt.grid(True)
plt.show()
