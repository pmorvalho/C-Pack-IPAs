

#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

int main() {
    int i, chars;
    char s[MAX];
    
    chars = leLinha(s);
    for ( i = 0; i < chars; i++)
    {
        printf("%c", s[i]);
    }
    putchar('\n');
    
    return 0;
}

int leLinha(char s[]) {
    int c, i = 0;

    while ( (c = getchar()) != EOF && c != '\n' && i < MAX - 1)
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';

    return i;
}