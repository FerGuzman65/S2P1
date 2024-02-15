/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenarArreglo(int arreglo[], int tamano) {
    printf("Ingrese los valores:\n");
    for (int i = 0; i < tamano; i++) {
        printf("Posición %d: ", i);
        scanf("%d", &arreglo[i]);
    }
}

void imprimirArreglo(int arreglo[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

void ordenarBurbuja(int arreglo[], int tamano) {
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

void aleatorio(int arreglo[], int tamano) {
    srand(time(NULL)); // Inicializar la semilla del generador de números aleatorios
    for (int i = 0; i < tamano; i++) {
        arreglo[i] = rand() % 100; // Generar números aleatorios entre 0 y 99
    }
}

int main()
{
    int tamano;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamano);

    int arreglo[tamano];

    // Utilizar la función aleatorio para llenar el arreglo con números aleatorios
    aleatorio(arreglo, tamano);

    printf("Arreglo original: ");
    imprimirArreglo(arreglo, tamano);

    // Medir el tiempo de ejecución
    clock_t inicio = clock();

    // Ordenar el arreglo utilizando el algoritmo de burbuja
    ordenarBurbuja(arreglo, tamano);

    // Detener el temporizador
    clock_t fin = clock();
    double tiempoEjecucion = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución: %f segundos\n", tiempoEjecucion);

    printf("Arreglo ordenado (burbuja): ");
    imprimirArreglo(arreglo, tamano);

    return 0;
}



