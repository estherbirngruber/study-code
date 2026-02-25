#include <stdio.h>
#include "string_utils.h"

int custom_len(const char *text){
    int length = 0;
    while (*text != '\0'){
        length++;
        text++;
    }
    return int length;
}

void read_line_dynamic(custom_len){
    char *text =malloc (100);
    printf("type text: ");
    fgets(text, 100, stdin;)

}