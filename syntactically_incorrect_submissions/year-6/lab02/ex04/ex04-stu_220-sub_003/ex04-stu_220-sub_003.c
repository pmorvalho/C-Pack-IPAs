
#include <stdio.h>

int main()
{
    int aux = 0;
    int numbers[3] = {};
    scanf("%d %d %d", &numbers[0], &numbers[1], &numbers[2]);

    if (numbers[0] > numbers[2])
        aux = numbers[0], numbers[0] = numbers[2], numbers[2] = aux;

    if (numbers[0] > numbers[1])
        aux = numbers[0], numbers[0] = numbers[1], numbers[1] = aux;

    if (numbers[1] > numbers[2])
        aux = numbers[1], numbers[1] = numbers[2], numbers[2] = aux;

    printf("%d %d %d\n", numbers[0], numbers[1], numbers[2]);

    return 0;
}