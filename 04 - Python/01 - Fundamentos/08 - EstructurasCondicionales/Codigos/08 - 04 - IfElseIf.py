"""
** #########################################################################################
**      Archivo: 08 - 04 - IfElseIf.py
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**         if(condición):
**              ...
**              Código si se cumple la condición
**              ...
**          elif(condición):
**              ...
**              Código si no se cumple la condición
**              ...
**          else:
**              ...

** #########################################################################################
"""
# °°°°°°°°°°°°°°°°°°°°°°°°°°°° F U N C I O N  P R I N C I P A L °°°°°°°°°°°°°°°°°°°°°°°°°°°°°
pswrd = 12345; pswrdUsr = 0; usr1 = 12345; usr2 = 123456; usrUsr = 0

usrUsr = int(input("Usuario: "))

if(usrUsr == usr1):
    pswrdUsr = int(input("Contraseña: "))
    if(pswrdUsr == pswrd):
        print(f'\nBienvenido al sistema {usrUsr}')
elif(usrUsr == usr2):
    pswrdUsr = int(input("Contraseña: "))
    if(pswrdUsr == pswrd):
        print(f'\nBienvenido al sistema {usrUsr}')
else:
    print("De el usuario correcto...")
# °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
