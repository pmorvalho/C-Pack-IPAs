#include <stdio.h>
int isdigit(int c)
{
    return (c>= 1 && c<= 9);
}

int main()
{
    char c;
    int acumulado=0;
    int temp;
    while((c=getchar()) != EOF)
    {
        if (isdigit(c))
        {
            temp = c - '0';
            acumulado = acumulado + temp;
        }
    }
    if ((acumulado%9)==0) printf("yes");
    else printf("no");
    return 0;
}