
#include <stdio.h>
#include <string.h>

int maior_ou_igual(char num1[], char num2[])
{
    if(strlen(num1) > strlen(num2))
    {
        return 1;
    }
    else if(strlen(num2) > strlen(num1))
    {
        return 0;
    }
    else
    {
        for(int i = 0; i < (int) strlen(num1); i++)
        {
            if(num1[i] > num2[i])
                return 1;
            else if(num2[i] > num1[i])
                return 0;
        }
    }
    return 1;
}

int main()
{
    char num1[100], num2[100];
    scanf("%s%s", num1, num2);
    if(maior_ou_igual(num1, num2))
        printf("%s\n", num1);
    else
        printf("%s\n", num2);
    return 0;
}