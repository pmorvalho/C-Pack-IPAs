
#include <stdio.h>
#include <string.h>

#define VECMAX 100

int main()
{
    int soma = 0, i;
    char num[VECMAX];
    size_t x;

    scanf("%s", num);

    x = strlen(num);

    for (i = 0; i < x; i++)
    {
        soma += num[i] - '0';
    }

    if (soma % 9 == 0)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
