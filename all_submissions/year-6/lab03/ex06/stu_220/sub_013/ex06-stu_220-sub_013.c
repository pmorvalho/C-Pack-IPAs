
#include <stdio.h>

int main()
{
    int c = 0, i = 0;
    int algarismos[100] = {0};

    while ((c = getchar()) >= '0' && c <= '9' && i < 100)
    {
        algarismos[i] = c - '0';
        i++;
    }

    c = 0;

    for (i = 0; i < 100; i++)
        c += algarismos[i];

    printf("%s\n", (c % 9 == 0) ? "yes" : "no");

    return 0;
}