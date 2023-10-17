
#include <stdio.h>
#include <string.h>

#define VECMAX 100

int main()
{
    int soma = 0, i;
    char num[VECMAX];

    scanf("%s", num);

    for (i = 0; (unsigned)i < strlen(num); i++)
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
