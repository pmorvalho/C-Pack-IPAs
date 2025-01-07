
#include <stdio.h>

int main() {
    char c;
    int in_quotes = 0;
    int special_char = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\\') {
            if ((c = getchar()) == '"') {
                putchar(c);
                continue;
            }
        } else if (c == '"') {
            in_quotes = !in_quotes; 
            continue;
        } 
        if (c != '"' && in_quotes) putchar(c); 
        else if (!in_quotes) putchar('\n'); 
    }
    
    return 0;
}
