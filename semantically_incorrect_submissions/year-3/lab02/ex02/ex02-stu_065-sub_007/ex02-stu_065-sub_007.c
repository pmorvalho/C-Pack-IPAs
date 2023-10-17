

#include <stdio.h>

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    if (num1 < num2)
    {
        printf("%d\n%d", num1, num2);
        return 0;
    }
     
    else 
    {
        printf("%d\n%d", num2, num1);
        return 0;
    } 
    
}

