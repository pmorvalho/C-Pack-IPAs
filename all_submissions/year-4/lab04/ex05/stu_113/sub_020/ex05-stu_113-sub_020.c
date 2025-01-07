
#include <stdio.h>

int leLinha(char s[]);

int main () {
    char s[80];
    int j = 0, i = leLinha(s);
    while (j < i) putchar(s[j++]); 
    putchar('\n');
    return 0;
}

int leLinha(char s[]) {
    int i = 0;
    char current = getchar();
    while (current != EOF && current != '\n') {
        s[i++] = current; current = getchar();
    }
    return i;
}
