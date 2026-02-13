#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    // TODO: complete the output statements
    printf("x = %d\n", x);
    printf("x via p = %d\n", *p);
    printf("x via pp = %d\n", *pp);
    **pp = 42;
    printf("x = %d\n", x);
    getchar ();

    return 0;
}



//4.    x ist ein integer
//      p ist die Adresse von x
//      *p ist der Pointer auf x
//      pp ist die Adresse von Pointer p
//      *pp ist die Adresse von Pointer p
//      **pp ist der pointer auf den Pointer p und gibt somit den Wert von x aus 