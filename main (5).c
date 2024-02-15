/******************************************************************************

Punteros Fer G 31 enero 2024

*******************************************************************************/
#include <stdio.h>

int main()
{
//definir variable entera 
float pi=3.1416;

//definir un puteroa entero(asignar la dir de la variable)
    float *puntero= &pi;
    


    //imprimir valor de la variable a travez del puntero
    printf("valor de la variable : %f ",*puntero);
    //imprimir donde est aguardada en la memoria
    printf(" Valor de la variable: %p", puntero );
      printf(" Valor de la variable: %p", pi );
          printf(" Valor de la variable: %f", pi );

    

    
    
    
    return 0;
}
