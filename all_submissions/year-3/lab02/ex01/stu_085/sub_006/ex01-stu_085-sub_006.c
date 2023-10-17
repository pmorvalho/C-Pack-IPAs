
#include <stdio.h>


int main()
{
    int num1;
    int num2;
    int num3;
    scanf("%d %d %d",&num1, &num2, &num3);
    if (num1>num2 && num1>num3)
    {
        printf("%d\n", num1);
    }
    if (num2>num1 && num2>num3)
    {
        printf("%d\n", num2);
    }
    if (num3>num2 && num1<num3)
    {
        printf("%d\n", num3);
    }

    return 0;
} 
