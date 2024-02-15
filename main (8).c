/******************************************************************************

Punteros Fer G 31 enero 2024

*******************************************************************************/
#include <stdio.h>

int main()
{
//definir variable entera 
int numero=10;
int numero2=30;
//definir un puteroa entero(asignar la dir de la variable)
    int *puntero= &numero;
    int *puntero2= &numero2;
    int resultado;

    //imprimir valor de la variable a travez del puntero
    printf("valor de la variable : %d ",*puntero);
    //imprimir donde est aguardada en la memoria
    printf(" Valor de la variable: %p",puntero );
    
    //cambiar valor a travez del puntero
    printf("valor de la variable: %d",*puntero2);
    printf("valor de la variable: %p",puntero2);
    
 resultado= *puntero2 + *puntero; 
 printf("suma, %d,", resultado);
    *puntero=30;
    
    printf("nuevo valor %d y %d", numero, numero2);
    
    
    
    return 0;
}
