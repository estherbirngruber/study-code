#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int l;
    int isPalindrome = 1;

    printf("This program checks whether a word is a palindrome or not\n\n");
    printf("Type in a word: ");
    scanf("%99s", word);

    l = strlen(word);

    char *start = word;           // points to first character
    char *end = word + l - 1;     // points to last character

    while (start < end) {
        if (*start != *end) {
            isPalindrome = 0;     // mismatch found
            break;
        }
        start++;   // move forward
        end--;     // move backward
    }

    if (isPalindrome)
        printf("\nThis word is a palindrome.\n");
    else
        printf("\nThis word is not a palindrome.\n");

    getchar(); // wait for Enter
    getchar();
    return 0;
}
