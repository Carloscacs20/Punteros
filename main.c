#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    int x;
    double y;
    int *sum=&x;
    double *div=&y;
    int a=20, b=10;
    int *num1=&a, *num2=&b;

    operaciones(sum,div,num1,num2);  // puede tambien poner &a en num1 y &b en num2 para realiar la operacion solo en funciones porque ahi ponen la ubicacion de memoroia
    printf("El valor de la suma es: %d\n",*sum);
    printf("El valor de la division es: %.2lf", *div);
    

    return 0;
}