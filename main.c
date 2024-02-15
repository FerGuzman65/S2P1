/******************************************************************************

Tamaño en bits auto

*******************************************************************************/
/*Escriba en el main mediante la función indicada el tamaño en bytes,de 2 estructuras tipo Puerta.*/ 
 
#include <stdio.h>
 
 
struct Motor {
    int numeroCilindros;
    float capacidadLitros;
};
 
struct Llanta {
    int diametroPulgadas;
    char tipo[20];
};
 
struct Puerta {
    char tipoApertura[20];
    int electrica;
};
 
struct Auto {
    char marca[20];
    char modelo[20];
    struct Motor motor;
    struct Llanta llantaDelantera;
    struct Llanta llantaTrasera;
    struct Puerta puertaIzquierda;
    struct Puerta puertaDerecha;
};
 
int main() {
printf("Tamaño en bits %d,", sizeof(struct Auto)*8);
printf("Tamaño en bytes %1d,", sizeof(struct Auto));

    
}
