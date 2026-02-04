#include <stdio.h>

int main () {
    int i; //numbers / rows
    char c; //letters / coloumns
    
    for ( c='A'; c<='H'; c++){
        printf("   %c", c);
    }
    printf("\n");
    for (i=8; i>0; i--){
        printf(" ");
        for (c='A'; c<='H'; c++){
            printf("+---");
        }
        printf("+");
        printf("\n");
        printf("%d", i);   //Zahlen links
        for (c='A'; c<='H'; c++){       
            if (i%2==0){                //für gerade zahlen 
                if (c%2!=0){            //bei jedem "ungeraden" Buchstaben
                    printf("|###");     //schwarze Felder 
                }
                else {
                    printf("|   ");     //ansonsten leere Felder
                }
            }
            else {                      //für ungerade Zahlen
                if (c%2==0){            //an jedem "geraden" Buchstaben
                    printf("|###");     //schwarze Felder
                }
                else {
                    printf("|   ");     //ansonsten leere Felder
                }
            }
        }
        printf("|%d \n", i);  // zahlen rechts 
    }
    printf(" ");
        for (c='A'; c<='H'; c++){
            printf("+---");
        }
        printf("+\n");
    for ( c='A'; c<='H'; c++){
        printf("   %c", c);
    }
    getchar ();
}