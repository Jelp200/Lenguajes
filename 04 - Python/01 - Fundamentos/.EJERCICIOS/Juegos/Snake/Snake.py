"""
** #########################################################################################
**      Archivo: Snake.py
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
"""

# ++++++++++++++++++++++++++++++++++++++ I M P O R T S ++++++++++++++++++++++++++++++++++++++
import pygame
import time
import random
# +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

ancho = 800                                                 # Dimensiones de pantalla
alto = 600

blanco = (255, 255, 255)                                    # Colores (R, G, B)
negro = (0, 0, 0)
rojo = (213, 50, 80)
verde = (0, 255, 0)

tamanio_bloque = 20                                         # Serpiente: Tamaño y velocidad
velocidad = 15

pygame.init()                                               # Iniciar "pygame"

pantalla = pygame.display.set_mode((ancho, alto))           # Creacion de pantalla
pygame.display.set_caption('Snake')

reloj = pygame.time.Clock()                                 # Control de la velocidad

# ------------------------------------- F U N C I O N E S ------------------------------------
def mensaje(msg, color, tamaño):                            # Mensaje en pantalla
    fuente = pygame.font.SysFont(None, tamaño)
    texto = fuente.render(msg, True, color)
    pantalla.blit(texto, [ancho / 6, alto / 3])

def juego():                                                # Juego
    game_over = False
    game_close = False

    # Posición inicial de la serpiente
    x_serpiente = ancho / 2
    y_serpiente = alto / 2

    # Cambio en la posición
    cambio_x = 0
    cambio_y = 0

    # Lista para almacenar el cuerpo de la serpiente
    cuerpo = []
    largo_cuerpo = 1

    # Posición aleatoria de la comida
    comida_x = round(random.randrange(0, ancho - tamanio_bloque) / 20.0) * 20.0
    comida_y = round(random.randrange(0, alto - tamanio_bloque) / 20.0) * 20.0

    while not game_over:
        while game_close:
            pantalla.fill(blanco)
            mensaje("Q - Salir | C - Jugar de nuevo", rojo, 30)
            pygame.display.update()

            for evento in pygame.event.get():
                if evento.type == pygame.KEYDOWN:
                    if evento.key == pygame.K_q:
                        game_over = True
                        game_close = False
                    if evento.key == pygame.K_c:
                        juego()

        for evento in pygame.event.get():
            if evento.type == pygame.QUIT:
                game_over = True
            if evento.type == pygame.KEYDOWN:
                if evento.key == pygame.K_LEFT:
                    cambio_x = -tamanio_bloque
                    cambio_y = 0
                elif evento.key == pygame.K_RIGHT:
                    cambio_x = tamanio_bloque
                    cambio_y = 0
                elif evento.key == pygame.K_UP:
                    cambio_y = -tamanio_bloque
                    cambio_x = 0
                elif evento.key == pygame.K_DOWN:
                    cambio_y = tamanio_bloque
                    cambio_x = 0

        if x_serpiente >= ancho or x_serpiente < 0 or y_serpiente >= alto or y_serpiente < 0:
            game_close = True

        x_serpiente += cambio_x
        y_serpiente += cambio_y
        pantalla.fill(blanco)
        pygame.draw.rect(pantalla, verde, [comida_x, comida_y, tamanio_bloque, tamanio_bloque])
        cuerpo.append([x_serpiente, y_serpiente])
        if len(cuerpo) > largo_cuerpo:
            del cuerpo[0]

        for segmento in cuerpo[:-1]:
            if segmento == [x_serpiente, y_serpiente]:
                game_close = True

        for segmento in cuerpo:
            pygame.draw.rect(pantalla, negro, [segmento[0], segmento[1], tamanio_bloque, tamanio_bloque])

        pygame.display.update()

        if x_serpiente == comida_x and y_serpiente == comida_y:
            comida_x = round(random.randrange(0, ancho - tamanio_bloque) / 20.0) * 20.0
            comida_y = round(random.randrange(0, alto - tamanio_bloque) / 20.0) * 20.0
            largo_cuerpo += 1

        reloj.tick(velocidad)

    pygame.quit()

# °°°°°°°°°°°°°°°°°°°°°°°°°°°° F U N C I O N  P R I N C I P A L °°°°°°°°°°°°°°°°°°°°°°°°°°°°°
juego()
# °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°