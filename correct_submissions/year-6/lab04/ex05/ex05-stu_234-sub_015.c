

#include <stdio.h>
#include <string.h>
#define MAXCHAR 1000

int leLinha(char s[]) {
    int tamanho = strlen(s);
    return tamanho;
}

int main() {
    int c, i=0;
    char s[MAXCHAR];
    while (((c=getchar())!= EOF) && (c!= '\n')) {
        putchar(c);
        s[i++]=c;
    }
    printf("\n");
    leLinha(s);
    return 0;
}

