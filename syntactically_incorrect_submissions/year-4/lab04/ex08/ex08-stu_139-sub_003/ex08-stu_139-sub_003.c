

#include <stdio.h>
#include <string.h>

int main()
{

    char n1[100], n2[100];
    scanf("%s", n1);
    scanf("%s", n2);

    for (int i = 0; i < strlen(n1); i++)
    {
        if (n1[i] > n2[i])
        {
            printf("%s\n", n1);
            return 0;
        }
        else if (n2[i] > n1[i])
        {
            printf("%s\n", n2);
            return 0;
        }
    }

    printf("%s\n", n1);
}