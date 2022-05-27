#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

void maiusculas(char s[]);

int main() {

    char s[MAX];
    
    maiusculas(s);

    
    
    return 0;
}

void maiusculas(char s[]) {
    int i;
    char c;
    int size = leLinha(s);
    for (i = 0; i< size; i++) {
        c = s[i];
        
        if ('a' <= c && c <= 'z') {
            s[i] = c - 'a' + 'A';
        }
        putchar(s[i]);
        
    }
    putchar('\n');
}

int leLinha(char s[])
{
    int i = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n' && i < MAX - 1)

        
        s[i++] = c;
    s[i] = '\0';

    return i;
}