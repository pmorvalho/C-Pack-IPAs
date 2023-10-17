

#include <stdio.h>
#include <string.h>

#define MAX 80

int main() {
    int i, comprimento, meio;
    char palavra[MAX];
    scanf("%s", palavra);
    comprimento = strlen(palavra);
    meio = comprimento / 2; 
    for (i = 0; i < meio; i++) {
        if (palavra[i] != palavra[comprimento -1 - i]) {
            printf("no\n");
            break;
        }
    }
    if (i == meio || comprimento == 0)
        printf("yes\n");
    return 0;
}