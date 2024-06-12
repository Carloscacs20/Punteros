#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int a=100;
    int *p=&a;
    printf("El valor de a es %d\n",a);
    printf("El contenido del puntero es %d\n",*p);
    printf("---------------------------\n");

    *p=800;
    printf("El valor de a es %d\n",a);
    printf("El contenido del puntero es %d\n",*p);
    printf("La ubicacion en memoria de p es %p",p);
    
    

    return 0;
}