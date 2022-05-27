#include <stdio.h>

int main()
{
    int num_1, num_2, num_3;
    int maior;

    printf("Digite três números:\n");
    scanf("%d%d%d", &num_1, &num_2, &num_3);

    if (num_1 >= num_2 && num_1 >= num_2)
        maior = num_1;

    else if (num_2 >= num_1 && num_2 >= num_3)
        maior = num_2;

    else
        maior = num_3;

    printf("O número maior é %d.\n", maior);

    return 0;
}