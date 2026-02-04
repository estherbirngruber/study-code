#include <stdio.h>

int main () {
    int i; //numbers / rows
    char c; //letters / coloumns
    
    for ( c='A'; c<='H'; c++){
        printf("   %c", c);
    }
    printf("\n");
    for (i=8; i>0; i--){
        printf("%d", i);   //Zahlen links
        for (c='A'; c<='H'; c++){
            if (i%2==0){
                if (c%2!=0){
                    printf("|###");
                }
                else {
                    printf("|   ");
                }
            }
            else {
                if (c%2==0){
                    printf("|###");
                }
                else {
                    printf("|   ");
                }
            }
            //printf("");
        }
        printf("|%d \n", i);  // zahlen rechts 
    }
    
    
    getchar ();
}