#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("Section1.txt", "r");

    char c[100];
    fgets(c, 100, file);
    printf("%s",c);
    getchar();
    fclose(file);

}

