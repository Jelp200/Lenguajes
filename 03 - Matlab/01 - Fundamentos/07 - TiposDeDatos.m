%{
** #################################################################################################################
**      Archivo: 07 - TiposDeDatos.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          Dentro de Matlab encontramos diferentes tipos de datos con los cuales podemos trabajar, a estos tipos de
**          datos tambien podemos llamarlos clases. Cada una de estas clases tiene la forma de una matriz o arreglo.
**          A excepcion de las funciones de trabajo, está matriz o arreglo tiene un minimo de tamaño de 0 * 0 y puede
**          crecer hasta convertirse en una matriz o arreglo de n-D de cualquier tamaño. Una funcion de trabajo siem_
**          pre es escalar 1 * 1.
**
**          !OJO¡ En Matlab no es necesario declarar el tipo de dato con el cual vamos a trabajar, debido a que al
**          momento de definir una nueva variable en Matlab se crea automaticamente y asigna de manera adecuada un
**          espacio de memoria.
** #################################################################################################################
%}

    a = 123;
    b = [1 2 3];
    c = ['123'];

    whos                                        % Verificamos que las variables se hayan creado.

%{
    !OJO¡ Si la variable existe, Matlab remplaza los valores almacenados con los nuevos valores y los alma_
    cena en un nuevo espacio si es necesario.
%}

% -------------------------------------- T I P O S   D E   D A T O S   B A S E -------------------------------------

%{
    Los tipos de clase base o tipos de datos fundamentales son:
        - Numericos
        - Logicos
        - Tipo caracter
        - Tipo celda
        - Tipo estructura
        - Tipo tabla
    
        Comencemos viendo:

        T I P O S   D E   D A T O S   N U M E R I C O S

            - N U M E R O S   D E   P U N T O   F L O T A N T E
        
        Los datos tipo punto flotante son los datos por default que utiliza Matlab, podemos encontrar datos punto
        flotante de doble precisión o precisión simple, siendo los primeros los utilizados por default, pero podemos
        utilizar cualquiera de los dos de la siguiente manera.
%}

    DP = 1.23;
    SP = single(DP);                            % "single(var)" nos sirve para declarar el numero como precision simple

%{
            - N U M E R O S   E N T E R O S
        
        Dentro de los numeros enteros podemos trabajar con 4 clases entras con signo y 4 clases enteras sin signo.
        Las clases de tipo signo nos permiten trabajar con datos positivos y negativos, pero no podemos representar
        un rango de números tan amplio como los tipos sin signo debido a que se usa un bit para designar el signo del
        número en cuestión.

            int8(n)                               -> Entero de 8bits/1byte con signo
            uint8(n)                              -> Entero de 8bits/1byte sin signo
            int16(n)                              -> Entero de 16bits/2bytes con signo
            uint16(n)                             -> Entero de 16bits/2bytes sin signo
            int32(n)                              -> Entero de 32bits/4bytes con signo
            uint32(n)                             -> Entero de 32bits/4bytes sin signo
            int64(n)                              -> Entero de 64bits/8bytes con signo
            uint64(n)                             -> Entero de 64bits/8bytes sin signo

        Matlab maneja almacenamiento de 1, 2, 4 y 8 byte de tipos de clases enteras. Podemos guardar memoria y acortar
        el tiempo de ejecución para nuestros programas si utilizamos el tipo de entero más pequeño el cual se acomode
        a nuestras necesidades, por ejemplo, no necesitamos un "int32" si deseamos almacenar el valor de 100. 
%}

    I32 = int32(100);
    I8 = int8(100);

    whos

%{
    Nota: Para poder almacenar un dato como entero, es necesario convertir de un dato double/flotante al entero deseado.
    Si el numero entero a convertir tiene una parte decimal o fraccionara, Matlab redondea al entero más cercano, pero
    si es exactamente la mitad Matlab elige aquel el cual su valor absoluto es mayor.

        T I P O S   D E   D A T O   C A R A C T E R

    Al igual que en otros lenguajes de programación tales como C o C++, los datos tipo caracter son declarados de la
    misma forma que en estos, la unica diferencia a estos dos lenguajes ya antes mencionados, es que la clase caracter
    en Matlab puede almacenar varios caracteres o una cadena de caracteres, a diferencia de C o C++ que si hacemos lo
    mismo nos entregara el ultimo caracter de la cadena.

    !OJO¡ Podemos de igual manera trabajar con datos tipo "string", lo "malo" es que dicho tipo de tado nos generara
    una variable que almacena 150bytes, por lo tanto no es muy recomendable utilizar este tipo de dato.
%}

    C = 'C';
    S = "C";

    whos

%{
        T I P O S   D E   D A T O   L O G I C O S

    Estos tipos de datos toman valores de 0 o 1, lo cual representan un estado V o F, alto o bajo. En si este tipo de
    datos son utilizados para condiciones de relacion y acceso a arreglos, dichos tipos de datos solo tienen 1byte de
    almacenamiento.
%}

    V = logical(1);
    F = logical(0);

    whos

%{
        T I P O S   D E   D A T O S   E S T R U C T U R A D O S

    Es un tipo de dato que agrupa variables de diferentes tipos de clases utilizando contenedores de datos llamados
    campos. Cada campo puede contener cualquier tipo de clase. Para poder acceder a los datos en una estructura es
    necesario utilizar la notación tipo punto de la siguiente forma:

        nombreDeLaEstructura.(nombreDelCampo)
%}

    campo1 = 'Primero';
    campo2 = 'Segundo';

    valor1 = [1 2 3 4 5];
    valor2 = 'ESIME_Z';

    S = struct(campo1, valor1, campo2, valor2); % Generamos una estructura con "struct", pasamos los campos y valores

    S.(campo1)                                  % Primer forma de ingreso a los datos
    S.('Primero')                               % Segunda forma de ingreso a los datos

%{
        T I P O S   D E   D A T O S   T A B L A

    Las variables de tipo tabla pueden ser de diferentes tipo y tamaño, pero todas las variables almacenadas deben tener
    el mismo numero de filas, para ello hacemos lo siguiente:

        nombreVariableTabla = table(Tabla_1, Tabla_2, Tabla_n);
%}

    Edad = [22 23 17];
    Estatura = [192 167 160];
    Nombre = {'Jose' 'Karolina' 'Ximena'};

    T = table(Nombre, Edad, Estatura);

%{
        T I P O S   D E   D A T O S   C E L D A

    Ya hemos visto con anterioridad que las matrices celda nos permiten almacenar cualquier tipo de dato dentro de ellas,
    pasa lo mismo con las clases celda.

        nombreVariableCelda = {Celda_1, Celda_2, Celda_n};
    
    O tambien:

        nombreVariableCelda = cell(nCeldas);
%}

    Clda_1 = {[7 8 9], 68, 'IPN'};

    Clda_2 = cell(3);

%{
    Nota: Existen más tipos de datos en Matlab, por ahora hemos tocado los más básicos para poder comenzar a entender de
    una manera fácil este lenguaje de programación.
%}