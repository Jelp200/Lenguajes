/*
** #########################################################################################
**      Archivo: 02 - 07 - AlumnosFunciones.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Descripcion:
**                   Realizar la misma funcion que "Alumnos.c" pero con funciones.
** #########################################################################################
*/

/*
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++     DIRECTIVAS DE PREPROCESADOR     ++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
#include <stdio.h>
#include <string.h>

/*
---------------------------------------------------------------------------------------------
----------------------------            ESTRUCTURA(S)            ----------------------------
---------------------------------------------------------------------------------------------
*/
typedef struct Asignatura{
    char materia[30];
}Asignatura;

typedef struct Alumno{
    Asignatura Asignaturas[5];
}Alumno;

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~     PROTOTIPO(S) DE FUNCION(ES)     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
void cls();
void wit();

void Menu();
void imprimirMaterias(Alumno alumnoImpresion);              //! Funcion con parametros de los datos a visualizar.
void modMaterias(Alumno *alumnoMod, int indice);            //! Funcion con parametros de los datos a modificar.

/*
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
''''''''''''''''''''''''''''        VARIABLE(S) GLOBAL(ES)       ''''''''''''''''''''''''''''
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
*/
int opc, opcAlumno, opcMod;                                 //! Variables del menu.
Alumno Andres, Manuel;                                      //! Usuarios con los que trabajaremos.
Alumno Nuevo;                                               //! Variables de nuevo usuario.
char AlumnoNuevo[30];

/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||            MAIN FUNCTION            ||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
int main(){

    strcpy(Andres.Asignaturas[0].materia, "Algebra");
    strcpy(Andres.Asignaturas[1].materia, "Mecanica clasica");
    strcpy(Andres.Asignaturas[2].materia, "Calculo D e I");
    strcpy(Andres.Asignaturas[3].materia, "Quimica");
    strcpy(Andres.Asignaturas[4].materia, "Programacion basica");

    strcpy(Manuel.Asignaturas[0].materia, "Algebra lineal");
    strcpy(Manuel.Asignaturas[1].materia, "E y M");
    strcpy(Manuel.Asignaturas[2].materia, "Calculo multi variable");
    strcpy(Manuel.Asignaturas[3].materia, "Quimica aplicada");
    strcpy(Manuel.Asignaturas[4].materia, "POO");

    Menu();

    return 0;
}

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~             FUNCION(ES)             ~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
void cls(){
    system("CLS");
}

void wit(){
    puts("\n");
    system("PAUSE");
    system("CLS");
}

void Menu(){
    do{
        puts("\n\t\t\t MATERIAS ALUMNOS");
        puts("\t\t1.- VER MATERIAS.");
        puts("\t\t2.- MODIFICAR MATERIAS.");
        puts("\t\t3.- CREAR ALUMNO.");
        puts("\t\t0.- SALIR.");
        printf("\n\t\tSeleccione una opcion: "); scanf("%i", &opc);

        switch (opc){
        case 1:
            cls();
            puts("\n\t\t\t VER MATERIAS");
            puts("\t\t1.- Andres.");
            puts("\t\t2.- Manuel.");
            printf("\t\t3.- %s.\n", AlumnoNuevo);
            printf("\n\t\tSeleccione una opcion: "); scanf("%i", &opcAlumno);

            switch (opcAlumno){
            case 1:
                puts("\n\t\t\t ANDRES");
                imprimirMaterias(Andres);
                break;
            
            case 2:
                puts("\n\t\t\t MANUEL");
                imprimirMaterias(Manuel);
                break;

            case 3:
                printf("\n\t\t\t %s\n\n", AlumnoNuevo);
                imprimirMaterias(Nuevo);
                break;

            default:
                break;
            }

            break;
        
        case 2:
            cls();
            puts("\n\t\t\t MODIFICAR MATERIAS");
            puts("\t\t1.- Andres.");
            puts("\t\t2.- Manuel.");
            printf("\n\t\tSeleccione una opcion: "); scanf("%i", &opcAlumno);

            switch (opcAlumno){
            case 1:
                cls();
                puts("\n\t\t\t ANDRES");
                imprimirMaterias(Andres);
                printf("\n\t\tSeleccione la materia a modificar: "); scanf("%i", &opcMod);

                switch (opcMod){
                    case 1:
                        modMaterias(&Andres, 0);
                        break;
                    case 2:
                        modMaterias(&Andres, 1);
                        break;
                    case 3:
                        modMaterias(&Andres, 2);
                        break;

                    case 4:
                        modMaterias(&Andres, 3);
                        break;
                    case 5:
                        modMaterias(&Andres, 4);
                        break;
                    
                    default:
                        break;
                    }

                break;
            
            case 2:
                puts("\n\t\t\t MANUEL");
                imprimirMaterias(Manuel);
                printf("\n\t\tSeleccione la materia a modificar: "); scanf("%i", &opcMod);

                switch (opcMod){
                    case 1:
                        modMaterias(&Manuel, 0);
                        break;
                    case 2:
                        modMaterias(&Manuel, 1);
                        break;
                    case 3:
                        modMaterias(&Manuel, 2);
                        break;

                    case 4:
                        modMaterias(&Manuel, 3);
                        break;
                    case 5:
                        modMaterias(&Manuel, 4);
                        break;
                    
                    default:
                        break;
                    }
                break;

            default:
                break;
            }

            break;

        case 3:
            cls();
            puts("\n\t\t\t CREAR ALUMNO");
            printf("\n\t\tEscriba el nombre del alumno: "); scanf("%s", AlumnoNuevo);

            for (int i = 0; i < 5; i++){
                printf("\t\tDe el nombre para la materia %i: ", i + 1); scanf("%s", Nuevo.Asignaturas[i].materia);
            }
            
            printf("\n\t\t%s tiene las siguientes materias\n", AlumnoNuevo);

            for (int i = 0; i < 5; i++){
                printf("\t\t%i.- %s\n", i + 1, Nuevo.Asignaturas[i].materia);
            }
            
            break;

        case 0:
            system("CLS");
            puts("\t\tSaliendo del sistema.");
            break;

        default:
            system("CLS");
            puts("\t\tSeleccione una opcion correcta.");
            break;
        }
    } while (opc != 0);
}

void imprimirMaterias(Alumno alumnoImpresion){
    cls();
    printf("\t\t1.- %s.\n", alumnoImpresion.Asignaturas[0].materia);
    printf("\t\t2.- %s.\n", alumnoImpresion.Asignaturas[1].materia);
    printf("\t\t3.- %s.\n", alumnoImpresion.Asignaturas[2].materia);
    printf("\t\t4.- %s.\n", alumnoImpresion.Asignaturas[3].materia);
    printf("\t\t5.- %s.\n", alumnoImpresion.Asignaturas[4].materia);
}

void modMaterias(Alumno *alumnoMod, int indice){
    cls();
    printf("\n\t\t\t %s", alumnoMod->Asignaturas[indice].materia);
    char MateriaNueva[20];
    printf("\n\t\tEscriba el nombre de la nueva materia: "); scanf("%s", MateriaNueva);
    strcpy(alumnoMod->Asignaturas[indice].materia, MateriaNueva);
}
/*
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!                NOTAS                !!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

En este código utilizamos el paso por referencia y paso por valor los cuales nos ayudaran a
visualizar los datos de la estructura (paso por valor) y modificar la estructura (paso por
referencia) dada su posición en la memoria.
*/