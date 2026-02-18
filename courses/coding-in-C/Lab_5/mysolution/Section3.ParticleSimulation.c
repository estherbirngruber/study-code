#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int array [] = {0, 0, 1, 0, 1, 0 , 1, 0, 0, 0};
    int *p1 = array;
    int i;
    
    srand(time(NULL));
    int r = rand();                                             //random number

    for (i=0; i<strlen(*p1); i++){                              //for every index of the array
        printf("%s", *p1);
        if (mod(r,2)==0) {  

        }
    }
    return 0;
}