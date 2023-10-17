

#include <stdio.h>

int main() {
    int c, backslash = 0, aspas = 1; 

    while ((c = getchar()) != EOF) {
        if (c == '\\' && !backslash) 
            backslash = 1; 
        
        else if (c == '\\' && backslash) {
            putchar(c);
            backslash = 0;
        }
        
        else if (c == '"' && backslash) {
            putchar(c); 
            backslash = 0;
        }
        
        else if (c == ' ' && aspas) 
            putchar('\n');
        
        else if (c == '"' && !backslash) 
            aspas ^= 1;

        else
            putchar(c);
    }

    putchar('\n');

    return 0;
}
