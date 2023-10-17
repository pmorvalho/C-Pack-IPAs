
#include <stdio.h>

int main()
{
    int num1, i;
    float num2, soma, media;

    scanf("%d", &num1);

    for (i = 0; i < num1; i++)
    {
        scanf("%f", &num2);
        soma += num2;
    }

    media = soma / num1;

    printf("%.2f", media);

    return 0;
}
