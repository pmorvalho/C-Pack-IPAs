

#include <stdio.h>

int main()
{
    int Number = 0, DigitsN = 0, sum = 0;

    if (scanf("%d", &Number) != 1)
    {
        return 2;
    }

    while (Number != 0)
    {
        sum += Number % 10;   
        Number = Number / 10; 
        DigitsN++;
    }

    printf("%d\n%d\n", DigitsN, sum); 

    return 0;
}