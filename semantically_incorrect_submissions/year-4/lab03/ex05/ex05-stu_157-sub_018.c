
#include <stdio.h>

int main() {
    char c;
    int in_quotes = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '"') {
            in_quotes = !in_quotes; 
            continue;
        } 
        if (c != '"' && in_quotes) putchar(c); 
        else if (!in_quotes) putchar('\n'); 
    }
    
    return 0;
}
