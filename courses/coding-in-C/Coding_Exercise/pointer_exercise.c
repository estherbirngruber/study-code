#include <stdio.h>

int main () {

    int myNumbers[5] = {10,20,30,40,50};
    int (*pArray2) = &myNumbers [1];
    int (*pArrayLast) = &myNumbers [4];
    int difference;

    printf("Inhalt zweite Adresse: %d\n", pArray2);
    printf("Inhalt letzte Adresse: %d\n", pArrayLast);

    difference= pArrayLast - pArray2;
    printf ("Inhalt zweite Adresse minus Inhalt letzte Adresse: %d", difference);

    getchar ();
    return 0;
}