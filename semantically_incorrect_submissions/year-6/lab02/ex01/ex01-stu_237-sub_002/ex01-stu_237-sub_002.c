
#include <stdio.h>

#define QUANTIDADE 3

int main() {
    int value;
    int maior;
    int i;

    scanf("%d", &maior);

    i = 1;
    while (i < QUANTIDADE) {
        scanf("%d", &value);
        if (value > maior) {
            value = maior;
        }
        i++;
    } 

    printf("%d", maior);

    return 0;
}