#include <stdio.h>
#include <string.h>


int main(int argc, char **argv) {
    int i;
    
    printf ("With Array indexing using: []\n");
    for (i=1; i<argc; i++){
        printf("Index: %d adress: %p content: %s wordlength: %i\n", i, argv [i], argv [i], strlen(argv[i]));
    }

    printf("With pointer dereferencing: \n");
    for (i=1; i<argc; i++){
        printf("Index: %d adress: %p content: %s wordlength: %i\n", i, *(argv+i), *(argv+i), strlen(*(argv+i)));
    }

    return 0;
}