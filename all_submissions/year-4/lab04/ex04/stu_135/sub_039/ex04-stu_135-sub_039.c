
#include <stdio.h>

#define MAX 80

int main()
{
    char palavra[MAX];
    int tam = 0, i, meio;

    scanf("%s", palavra);

    for (i = 0; i < MAX; i++) {
        if (palavra[i] == '\0'){
            tam = i;
            break;
        }
    }

    meio = tam / 2;
    for (i = 0; i < meio; i++) {
        if (palavra[i] != palavra[tam - i - 1])
            return printf("no\n") == EOF;
    }

    return printf("yes\n") == EOF;
}