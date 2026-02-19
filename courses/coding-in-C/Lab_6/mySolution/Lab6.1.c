#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("Section1.txt", "w");

    int x = 14;
    char c = 'S';
    float f = 12.13;

    fprintf(file," %d %c %.2f", x,c,f);
    fclose(file);
}

