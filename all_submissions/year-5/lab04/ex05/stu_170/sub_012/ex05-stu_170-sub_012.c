
#include <stdio.h>
#define MAX 80


int lelinha(char s[]);

int main() {

    char s[80];
    lelinha(s);
    printf("%s\n", s);

    return 0;
}


int lelinha(char s[]) {
    int contador = 0;
    do {
        s[contador] = getchar();
    } while (s[contador] != '\n' && s[contador] != EOF && ++contador);
    s[contador] = '\0';
    return contador;
}