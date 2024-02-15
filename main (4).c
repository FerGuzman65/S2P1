/******************************************************************************

FORMULARIO

*******************************************************************************/
#include <stdio.h>

int main()
{
  int Numero =42;
  int *ptrNumero= &Numero;
  
  //imprimir el contenido de la variable
  printf("contenido de la variable'numero': %d\n", Numero);
  
  //imprimir la direccion de la variable
  printf("Direccion de la variable'numero':%p\n", &Numero);
 
  //imprimir el contenido del puntero
  printf("Contenido del puntero'ptrNumero':%p\n", ptrNumero);

  //Imprimir el valor de la variable a la que apunta el puntero
  printf("Valor al que apunta'ptrNumero:'%d\n", *ptrNumero);

  //Imprimir la direccion del puntero
  printf("Direccion del puntero'ptrNumero:':%p\n", &ptrNumero);
    return 0;
}

