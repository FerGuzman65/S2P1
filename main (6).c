/******************************************************************************

Punteros Fer G 31 enero 2024

*******************************************************************************/
#include <stdio.h>

int main()
{
//definir variable entera 
int numero=42;
//definir un puteroa entero(asignar la dir de la variable)
    int *puntero= &numero;
    //imprimir valor de la variable a travez del puntero
    printf("valor de la variable : %d ",*puntero);
    //imprimir donde est aguardada en la memoria
    printf(" Valor de la variable: %p",puntero );
    
    //cambiar valor a travez del puntero
    *puntero=99;
    printf("valor de la variable: %d",*puntero);
    printf("valor de la variable: %p",puntero);
    
    
    
    return 0;
}

