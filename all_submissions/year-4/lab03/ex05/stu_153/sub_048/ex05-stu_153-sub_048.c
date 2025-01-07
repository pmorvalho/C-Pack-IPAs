
#include <stdio.h>

int main() {

    int escape_char, aspas = 0;
    char c;
    while ((c = getchar()) != EOF) {

        if (c == '\\' && escape_char == 0) {
            escape_char = 1;
            continue;
        } 
        if (c == '\\' && escape_char == 1) {
            escape_char = 0;
            putchar(c);
            continue;
        } 
        if (c == '"' && escape_char == 1) {
            putchar(c);
            continue;
        }
        if (c == '"' && aspas==0) {
            aspas = 1;
          
            continue;
        }
        if (c == '"' && aspas==1) {
            aspas = 0;
         
            continue;
        }
        if (c == ' ' && aspas == 0) {
            putchar('\n');
            continue;
        }
        if (c == ' ' && aspas == 1) {
            putchar(c);
            continue;
        }
        putchar(c);   
    }

    return 0;
}