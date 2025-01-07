
#include <stdio.h>
#include <ctype.h>

int main()
{
    int c;
    int sum = 0, contador = 0;

    while ((c = getchar()) != EOF && c != '\n')
    {
        
        
        contador++;
        sum += (c - '0');
        
    }
    if (sum % 9 == 0)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}