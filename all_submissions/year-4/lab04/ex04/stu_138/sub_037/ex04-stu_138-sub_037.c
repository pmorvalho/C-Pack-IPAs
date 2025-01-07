
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 

int main() {
    char palavra[MAX_SIZE], palavra1[MAX_SIZE];
    int quantidade, i;
    scanf("%s", palavra);
    quantidade = strlen(palavra);

    for (i = quantidade - 1; i >= 0; i--) {
        palavra1[quantidade - 1 - i] = palavra[i];
    }

    if (strcmp(palavra, palavra1) == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}