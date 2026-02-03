#include <stdio.h>

int main () {
    int i;
    char c;
   
    for (i=8; i>0; i--){
        for (c='A'; c<='H'; c++){
            printf("%c%d  ", c, i);
        }
        printf ("\n\n");
    }
    
    getchar();
}