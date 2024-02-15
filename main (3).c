/******************************************************************************

fab 2 2024
*******************************************************************************/
#include <stdio.h>


// funcion que intercambia los valores de dos variables usando punteros
void intercambiar(int *a, int *b, int *c)
{int temp=*a;
*a=*b;
*b=temp;

}
int main()
{
int num1 =5;
int num2 =10;
int num3[5] = {1,2,3,4,5};

int *ptr=num3;

printf("Antes del intercambio:num1= %d, num2 = %d",num1, num2);


//llamada a la funcion de intercambio con punteros
intercambiar(&num1, &num2, &num3[0]);

printf("Despues del intercambio:num1 =%d num2= %d",num1, num2);

    return 0;
}
