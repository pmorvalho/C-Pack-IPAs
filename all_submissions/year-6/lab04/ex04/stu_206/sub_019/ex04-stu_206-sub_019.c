

#include <stdio.h>
#include <string.h>

#define MAX 80

int main() {
    char s[MAX];
    int i, j, tamanho;
    int palindromo = 1;
    if (scanf("%s", s) != 1) return 0;
    tamanho = strlen(s);
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            palindromo = 0;
            break;
        }
    }
    if (palindromo == 1) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}