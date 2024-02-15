/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define MAX_ESTUDIANTES 3
#define MAX_LONGITUD_NOMBRE 50

struct Estudiante
{
    int numero_registro;
    char nombre[MAX_LONGITUD_NOMBRE];
    char carrera[MAX_LONGITUD_NOMBRE];
    int edad;
};

int main()
{
    struct Estudiante estudiantes[MAX_ESTUDIANTES];

    for (int i = 0; i < MAX_ESTUDIANTES; i++)
    {
        printf("Estudiante #%d\n", i + 1);

        printf("Ingrese su numero de registro: \n");
        scanf("%d", &estudiantes[i].numero_registro);

        printf("Ingrese su nombre: \n");
        scanf(" %[^\n]s", estudiantes[i].nombre);

        printf("Ingrese su carrera: \n");
        scanf("%s", estudiantes[i].carrera);

        printf("Ingrese su edad: \n");
        scanf("%d", &estudiantes[i].edad);
        printf("\n");
    }
   
    int *ptrEstudiante = &estudiante;
   
    for (ptrEstudiante)

    return 0;
}


