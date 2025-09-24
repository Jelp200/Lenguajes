%{
** #################################################################################################################
**      Archivo: 04 - Funciones.m
**      SO: Windows 11
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
**
**          Algo muy interesante es que en Matlab las funciones de trabajo al poder generar funciones para después
**          poder ser utilizadas en programas locales u operaciones, pueden ser comparadas con archivos de cabecera,
**          headers o imports, los cuales son utilizados en lenguajes de programación como C/C++, Java o Python.
** #################################################################################################################
%}

    f = @sin;                               % Ejemplo de una funcion de trabajo generada en un espacio local.
    f(pi / 2);                              % Uso de la funcion de trabajo

% -------------------------------------- F U N C I O N E S   A N O N I M A S --------------------------------------

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

        Una función anonima (en especifico; la función de trabajo que apunta a la función anonima) esta almacenada
        como cualquier otro tipo de valor en el espacio de trabajo utilizado. En una variable, en una celda de
        arreglo o incluso en una propiedad. La funcion anonima puede ser tratada como cualquier otro tipo de valor.
        Cuando guardamos una variable , esta tiene un nombre en el espacio de trabajo actual y puede ser actualizada
        y se puede vaciar como cualquier otro tipo de variable con numeros.
%}

% ------------------------------------- F U N C I O N E S   D E   T R A B A J O ------------------------------------

%{
    Hemos visto que las funciones de trabajo pueden ser tratadas como variables, es por ello que pueden ser pasadas
    a funciones que acepten argumentos de entrada, un ejemplo es el siguiente:

    Una funcion es creada en un archivo de Matlab ".m" que acepta una funcion de trabajo y un numero escalar. Despues
    se le llama a la funcion de trabajo que pasa 3 a dicha funcion y por consiguiente agrega un numero escalar al re_
    sultado. Al final el resultado se retorna.

    En principio generaremos una funcion de trabajo con el siguiente nombre "fncTrabajo.m"

    Después utilizamos la función ya antes generada, ejemplo:
%}

    f = @(X) X .^ 2;                        % Función anonima/local
    Y = fncTrabajo(f, 10);                  % Le pasamos "f" y un escalar a nuestra función de trabajo.
    Y                                       % Imprimimos el resultado de la vatiable Y

%{
    El código anterior lo que hace es llamar a nuestra función de trabajo "fncTrabajo(fnc, X)" la cual almacenaremos
    en una variable "Y", a dicha función le pasaremos dos parametros, una función local y un escalar, por lo tanto el
    proceso interno del código es el siguiente.

    f <- @(X) X .^ 2

    Y <- fncTrabajo([{fnc} .^ 2], 10);
         fnc .^ 2 = 3 .^ 2 = 9
    
    Y <- 9 + 10;
         9 + 10 = 19

    Imprimimos 19.

%}