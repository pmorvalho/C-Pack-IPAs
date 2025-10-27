
#include <stdio.h>
#define MAX 80

void maiusculas(char s[]);
int lelinha(char s[]);

int main() {
    char s[MAX];
    maiusculas(s);
    printf("%s\n", s);
    return 0;
}

void maiusculas(char s[]) {
    int i, len = lelinha(s);
    for (i = 0; i < len; i++) 
        if ('a' <= s[i] && s[i] <= 'z') 
            s[i] -= 'a' - 'A'; 
}



int lelinha(char s[]) {
    int contador = 0;
    do {
        s[contador] = getchar();
    } while (s[contador] != '\n' && s[contador++] != EOF);
    s[contador] = '\0';
    return contador;
}