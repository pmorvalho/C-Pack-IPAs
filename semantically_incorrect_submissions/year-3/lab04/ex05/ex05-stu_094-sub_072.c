

#include <stdio.h>

#define MAX 80

int leLinha (char s[]) {

    int c, i = 0;

    while ((c = getchar() != EOF || c != '\n')) {
        s[i] = c;
        i++;
        c = getchar();
    }
    return i;
}

int main () {

    char s[MAX];
    int i, j;

    scanf("%s", s);
    i = leLinha(s);

    for (j = 0; j < i; j++)
        putchar(s[j]);
    
    s[j] = '\0';
    return 0;
}