
#include <stdio.h>

int main()
{
    int n, div, num;
    scanf("%d", &n);
    div = n;
    num = 0;
    while (div > 0)
    {
        if (n % div == 0)
        {
            num++;
        }
        div--;
    }
    printf("%d\n", num);
    return 0;
}