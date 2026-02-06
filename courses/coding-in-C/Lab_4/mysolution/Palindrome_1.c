#include <stdio.h>

int main () {
    char sentence [30] = "Curly Bird catches the worm";
    char *pSentence = sentence;

    printf("%c", sentence);
    printf("%c", pSentence);
    getchar ();
    return 0;
}