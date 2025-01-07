
#include <stdio.h>



int main()
{
    int num1, num2, num3;

    printf("Insert three diferent numbers.");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    if (num1>num2)
    {
        if (num1>num3)
        {
            printf("%d is the biggest", num1);
        }
        else
        {
            printf("%d is the biggest", num3); 
        }
    }
    else
    {
        if (num2>num3)
        {
            printf("%d is the biggest", num2);
        }
        else
        {
            printf("%d is the biggest", num3); 
        }
    }

    return 0;
}