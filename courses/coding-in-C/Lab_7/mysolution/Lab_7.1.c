#include <stdio.h>
#include <stdlib.h>

int main () {
    int *pN = malloc(sizeof *pN);

    if (pN == NULL){
        printf("Memory allocation unsuccessful.");
        return 1;
    }

    printf("type an integer: ");
    scanf("%d", pN);

    int *array = calloc(*pN, sizeof *array);
    int i;
    for (i=0; i<*pN; i++){
        array [i] = i*i;
    }

    int *temp = realloc(array, 2*(*pN)*sizeof(*array));
    if (temp != NULL) {
        array = temp;
    }else {
        printf("realloc failed.");
    }

    int n;
    for (n=(*pN); n<2*(*pN); n++){
        array [n] = n*n;
    }
    
    int p = 0;
    while (p<sizeof array){
        printf("Element: %d\n", *array+p);
        p++;
    }
    free (array);
    free (pN);

    return 0;
}