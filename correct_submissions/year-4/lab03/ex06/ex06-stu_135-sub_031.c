
#include <stdio.h>

int main()
{
    int soma = 0, num;
    char c;

    while ((c = getchar()) != EOF)
    {
        num = c - '0';
        soma += num;
    }
    return printf("%s\n", (soma % 9 == 0) ? "yes" : "no") == EOF;
}