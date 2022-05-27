#include <stdio.h>

int main()
{
    char c;
    int sum;
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            sum += c - '0';
    }
    printf("%s\n", sum % 9 == 0 ? "yes" : "no");
    return 0;
}