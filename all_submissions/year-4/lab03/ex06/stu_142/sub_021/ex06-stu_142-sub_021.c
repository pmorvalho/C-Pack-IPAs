
#include <stdio.h>

int main()
{
    int final = 99, c;
    int sum;
    for (int i = 0; i < final; i++)
    {
        c = getchar();
        sum += c;
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