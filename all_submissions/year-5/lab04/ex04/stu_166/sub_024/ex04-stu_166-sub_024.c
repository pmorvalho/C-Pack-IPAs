

#include <stdio.h>
#include <string.h>

#define MAX 80

int main () {
    char s[MAX];
    int tamanho, i = 0, palindromo = 1;

    scanf("%s", s);
    tamanho = strlen(s);

    while (i < tamanho) {
        if (s[i] != s[tamanho - i - 1])
            palindromo  = 0;
        i++;
    }
    if (palindromo)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}