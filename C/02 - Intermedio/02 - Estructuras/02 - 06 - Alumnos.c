/*
** #########################################################################################
**      Archivo: 02 - 06 - Alumnos.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Descripcion:
**                   Perminitr a un usuario visualizar y modificar la información de dos alumnos
**                   y sus respectivas materias (5).
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>
#include <string.h>

// Estructura(s).
typedef struct Asignatura{
    char materia[30];
}Asignatura;

typedef struct Alumno{
    Asignatura Asignaturas[5];
}Alumno;

// Funcion main.
int main(){

    int opc, opcAlumno, opcMod;

    Alumno Nuevo;
    char AlumnoNuevo[30];

    Alumno Andres, Manuel;
    
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

    do{
        puts("\n\t\t\t MATERIAS ALUMNOS");
        puts("\t\t1.- VER MATERIAS.");
        puts("\t\t2.- MODIFICAR MATERIAS.");
        puts("\t\t3.- CREAR ALUMNO.");
        puts("\t\t0.- SALIR.");
        printf("\n\t\tSeleccione una opcion: "); scanf("%i", &opc);

        switch (opc){
        case 1:
            system("CLS");
            puts("\n\t\t\t VER MATERIAS");
            puts("\t\t1.- Andres.");
            puts("\t\t2.- Manuel.");
            printf("\t\t3.- %s.\n", AlumnoNuevo);
            printf("\n\t\tSeleccione una opcion: "); scanf("%i", &opcAlumno);

            switch (opcAlumno){
            case 1:
                system("CLS");
                puts("\n\t\t\t ANDRES");
                printf("\t\t1.- %s.\n", Andres.Asignaturas[0].materia);
                printf("\t\t2.- %s.\n", Andres.Asignaturas[1].materia);
                printf("\t\t3.- %s.\n", Andres.Asignaturas[2].materia);
                printf("\t\t4.- %s.\n", Andres.Asignaturas[3].materia);
                printf("\t\t5.- %s.\n", Andres.Asignaturas[4].materia);
                break;
            
            case 2:
                system("CLS");
                puts("\n\t\t\t MANUEL");
                printf("\t\t1.- %s.\n", Manuel.Asignaturas[0].materia);
                printf("\t\t2.- %s.\n", Manuel.Asignaturas[1].materia);
                printf("\t\t3.- %s.\n", Manuel.Asignaturas[2].materia);
                printf("\t\t4.- %s.\n", Manuel.Asignaturas[3].materia);
                printf("\t\t5.- %s.\n", Manuel.Asignaturas[4].materia);
                break;

            case 3:
                system("CLS");
                printf("\n\t\t\t %s\n\n", AlumnoNuevo);

                for (int i = 0; i < 5; i++){
                printf("\t\t%i.- %s\n", i + 1, Nuevo.Asignaturas[i].materia);
                }

                break;

            default:
                break;
            }

            break;
        
        case 2:
            system("CLS");
            puts("\n\t\t\t MODIFICAR MATERIAS");
            puts("\t\t1.- Andres.");
            puts("\t\t2.- Manuel.");
            printf("\n\t\tSeleccione una opcion: "); scanf("%i", &opcAlumno);

            switch (opcAlumno){
            case 1:
                system("CLS");
                puts("\n\t\t\t ANDRES");
                printf("\t\t1.- %s.\n", Andres.Asignaturas[0].materia);
                printf("\t\t2.- %s.\n", Andres.Asignaturas[1].materia);
                printf("\t\t3.- %s.\n", Andres.Asignaturas[2].materia);
                printf("\t\t4.- %s.\n", Andres.Asignaturas[3].materia);
                printf("\t\t5.- %s.\n", Andres.Asignaturas[4].materia);
                printf("\n\t\tSeleccione la materia a modificar: "); scanf("%i", &opcMod);

                switch (opcMod){
                    case 1:
                        system("CLS");
                        printf("\n\t\t\t %s", Andres.Asignaturas[0].materia);

                        char Materia0[20];
                        printf("\n\t\tEscriba el nombre de la nueva materia: "); scanf("%s", Materia0);

                        strcpy(Andres.Asignaturas[0].materia, Materia0);
                        break;
                    case 2:
                        system("CLS");
                        printf("\n\t\t\t %s", Andres.Asignaturas[1].materia);

                        char Materia1[20];
                        printf("\n\t\tEscriba el nombre de la nueva materia: "); scanf("%s", Materia1);

                        strcpy(Andres.Asignaturas[1].materia, Materia1);
                        break;
                    case 3:
                        system("CLS");
                        printf("\n\t\t\t %s", Andres.Asignaturas[2].materia);

                        char Materia2[20];
                        printf("\n\t\tEscriba el nombre de la nueva materia: "); scanf("%s", Materia2);

                        strcpy(Andres.Asignaturas[2].materia, Materia2);
                        break;

                    case 4:
                        system("CLS");
                        printf("\n\t\t\t %s", Andres.Asignaturas[3].materia);

                        char Materia3[20];
                        printf("\n\t\tEscriba el nombre de la nueva materia: "); scanf("%s", Materia3);

                        strcpy(Andres.Asignaturas[3].materia, Materia3);
                        break;
                    case 5:
                        system("CLS");
                        printf("\n\t\t\t %s", Andres.Asignaturas[4].materia);

                        char Materia4[20];
                        printf("\n\t\tEscriba el nombre de la nueva materia: "); scanf("%s", Materia4);

                        strcpy(Andres.Asignaturas[4].materia, Materia4);
                        break;
                    
                    default:
                        break;
                    }

                break;
            
            case 2:
                puts("\n\t\t\t MANUEL");
                printf("\t\t1.- %s.\n", Manuel.Asignaturas[0].materia);
                printf("\t\t2.- %s.\n", Manuel.Asignaturas[1].materia);
                printf("\t\t3.- %s.\n", Manuel.Asignaturas[2].materia);
                printf("\t\t4.- %s.\n", Manuel.Asignaturas[3].materia);
                printf("\t\t5.- %s.\n", Manuel.Asignaturas[4].materia);
                printf("\n\t\tSeleccione la materia a modificar: "); scanf("%i", &opcMod);

                switch (opcMod){
                    case 1:
                        system("CLS");
                        printf("\n\t\t\t %s", Manuel.Asignaturas[0].materia);

                        char Materia0[20];
                        printf("\n\t\tEscriba el nombre de la nueva materia: "); scanf("%s", Materia0);

                        strcpy(Manuel.Asignaturas[0].materia, Materia0);
                        break;
                    case 2:
                        system("CLS");
                        printf("\n\t\t\t %s", Manuel.Asignaturas[1].materia);

                        char Materia1[20];
                        printf("\n\t\tEscriba el nombre de la nueva materia: "); scanf("%s", Materia1);

                        strcpy(Manuel.Asignaturas[1].materia, Materia1);
                        break;
                    case 3:
                        system("CLS");
                        printf("\n\t\t\t %s", Manuel.Asignaturas[2].materia);

                        char Materia2[20];
                        printf("\n\t\tEscriba el nombre de la nueva materia: "); scanf("%s", Materia2);

                        strcpy(Manuel.Asignaturas[2].materia, Materia2);
                        break;

                    case 4:
                        system("CLS");
                        printf("\n\t\t\t %s", Manuel.Asignaturas[3].materia);

                        char Materia3[20];
                        printf("\n\t\tEscriba el nombre de la nueva materia: "); scanf("%s", Materia3);

                        strcpy(Manuel.Asignaturas[3].materia, Materia3);
                        break;
                    case 5:
                        system("CLS");
                        printf("\n\t\t\t %s", Manuel.Asignaturas[4].materia);

                        char Materia4[20];
                        printf("\n\t\tEscriba el nombre de la nueva materia: "); scanf("%s", Materia4);

                        strcpy(Manuel.Asignaturas[4].materia, Materia4);
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
            system("CLS");
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
    
    return 0;
}