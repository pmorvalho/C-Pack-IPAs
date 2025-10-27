


#include <stdio.h>
#define MAX 80

int leLinha(char s[MAX]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) 
        putchar(s[i]);
    putchar('\n');
    return 0;
}


int main() {
    char s[MAX];
    int c, i = 0;
    while (((c = getchar()) != '\n') && (c != EOF)) {
            s[i] = c;
            i++;
    }
    s[i] = '\0';
    leLinha(s);
    return 0;
}