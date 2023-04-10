%{
** ######################################################################################################
**      Archivo: 03 - Funciones.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En Matlab así como en cualquier otro lenguaje de programación podemos programar funciones las
**          cuales nos ayudaran a resolver problemas de calculo/analisis, dichas funciones se pueden
**          clasificar en dos tipos:
**
**              1.- Funciones anonimas.
**              2.- Funciones de trabajo.
**
**          Para poder generar o crear dichas funciones lo que utilizamos es el operador "@" el cual puede
**          ser utilizado de la siguiente manera:
**
**              nombreFuncion = @funcion
**
**          Estas funciones pueden ser tratadas en un apartado diferente a la ventana de comando, a dicha
**          apartado lo llamaremos "ventana de funciones" y como su nombre lo dice es una ventana la cual
**          nos deja programar funciones desde 0; para acceder a dicha ventana realizamos los siguientes
**          pasos:
**                  Archivo  ->  Nuevo  ->  Script
** ######################################################################################################
%}

    f = @sin;                               % Ejemplo de una funcion de trabajo generada en un espacio local.
    f(pi / 2);                              % Uso de la funcion de trabajo

% --------------------------------- F U N C I O N E S   A N O N I M A S ---------------------------------

%{
    Las funciones anonimas son funciones las cuales existen de manera local; en el mismo espacio de tra_
    bajo. Lo cual quiere dar a entender que no existen en el repertorio de Matlab como una funcion lo
    hace regularmente, esto nos da la libertad de que estas funciones pueden tener el nombre de una
    variable con la cual estemos trabajando en el espacio de trabajo local.

        P E R S O N A L I Z A C I Ó N   D E   F U N C I O N E S   A N O N I M A S

            - F U N C I O N E S   A N O N I M A S   D E   U N A   V A R I A B L E
        
        Es redundante utilizar funciones anonimas con el nombre de una funcion de trabajo de Matlab, para
        que necesitariamos realizar una funcion ya establecida.
        
        Es útil crear funciones anonimas las cuales nos permiten personalizar cosas que de otra manera ne_
        cesitaremos repetir multiples veces o crear funciones separadas para ello. Tomaremos como ejemplo
        de una funcion anonima personalisable que acepta una variable como su entrada, la suma del seno y
        coseno cuadrado de una señal:
%}

    f = @(x) sin(x) + cos(x) .^ 2;

%{
    La funcion anterior ahora acepta un argumento de entrada llamado "x", el cual se especifico utilizando
    parentesis (...) inMediatamente después del operador "@". "f" ahora es una funcion anonima/local de
    "x: f(x)". Se usa pasando un valor de "x" a "f"
%}

    f(pi)

%{
    A la funcion anterior de igual manera se le pueden pasar parametros vectoriales o una variable ya antes
    declarada, siempre y cuando se utilice de forma válida dentro de la funcion "f".
%}

    f(1 : 3)                                % Pasa un vector a "f"

    variableParametro = 5 : 7;
    f(variableParametro)

%{
            - F U N C I O N E S   A N O N I M A S   D E   M Á S   D E   U N A   V A R I A B L E
        
        De misma manera, las funciones anonimas que han sido generadas/creadas pueden aceptar más de una
        variable.
%}

    f = @(x, y, z) x.^ 2 + y.^ 2 - z.^ 2;   % Funcion que acepta tres parametros de entrada
    f(2, 3, 4)

%{
        P A R A M E T R I Z A C I Ó N   D E   F U N C I O N E S   A N O N I M A S

        Variables que ya han sido delcaradas o definidas en el espacio de trabajo pueden ser utilizadas dentro
        de la definicion de nuestra funcion anonima. A esto lo llamamos parametrización.

        Por ejemplo, utilizaremos una constante con valor de 17 dentro de una funcion anonima.
%}

    cnte = 17;
    f = @(x) cnte * x;                      % Funcion que acepta un parametro de entrada
    f(2)                                    % 17 * 2 = 34

%{
    "f(2)" usa la variable "cnte" como un parametro para multiplicar por el valor que proporciona "x". !OJO¡ Si
    editamos el valor de la variable constante y volvemos a llamar a "f(2)" pensando que el valor va a ser dif_
    erente de lo ya antes visualizado, visualizaremos que el valor arrojado es igual al anterior dado, todo
    esto debido a que el valor de la constante es el valor que tendra siempre al momento de ser generado/creado
    en la funcion anonima.
%}

    cnte2 = 2;
    f2 = @(y) cnte2 * y;
    f(2)                                    % 2 * 2 = 4

    cnte2 = 5;
    f(2)                                    % valorInicialCnte2 * 2 = 4

%{
        A R G U M E N T O S   D E   E N T R A D A   !=   V A R I A B L E S   D E   T R A B A J O

        Los agumentos de entrada de una funcion anonima no se refieren a las variables del espacio de trabajo.
%}

    x = 3;                                  % Variable "x" en el espacio de trabajo principal
    f = @(x) x + 1;                         % Aquí "x" se refiere a una variable privada utilizada en la funcion
    f(5)                                    % 5 + 1 = 6
    x                                       % 3

%{
        A L M A C E N A M I E N T O   D E   F U N C I O N E S

        Los agumentos de entrada de una funcion anonima no se refieren a las variables del espacio de trabajo.
%}