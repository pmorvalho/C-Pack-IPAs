
#include <stdio.h>

int main() {
    int count = 1;
    int maior, num;
    scanf("%d", &maior);
    while (count < 3) {
        scanf("%d", &num);
        if (num > maior) {
            maior = num;
        }
        count++;
    }
    printf("%d\n", maior);

    return 0;
}