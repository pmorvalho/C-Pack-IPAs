
#include <stdio.h>

void imprimir_lista(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        putchar(s[i]);
        i++;
    }
    putchar('\n');
}

void maior(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] > s2[i]) {
            imprimir_lista(s1);
            return;
        } else if (s2[i] > s1[i]) {
            imprimir_lista(s2);
            return;
        }
        i++;    
    }
}

int main() {
    char s1[101], s2[101];
    scanf("%s", s1);
    scanf("%s", s2);
    maior(s1, s2);
    return 0;
}