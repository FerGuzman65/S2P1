/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhereA in world.

*******************************************************************************/
#include <stdio.h>

void intercambiar(int *a, int *b, int *c ) {
    int temp = *a;
    *a = *b;
    *b = temp;
}



int main()
{
   
    int num1 = 5;
    int num2 = 10;
   
    int num3[5] = {1, 2, 3, 4, 5};
   
   
   
   
   
    printf("Antes de intercambiar : num1 = %d, num2 = %d\n", num1, num2);
   
    intercambiar(&num1, &num2, &num3[0]);
   
    printf("Despues del intecambio: num1 = %d, num2 = %d", num1, num2);
   

    return 0;
}

