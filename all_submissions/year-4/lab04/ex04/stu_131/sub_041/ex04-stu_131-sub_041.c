
#include <stdio.h>
#define MAX 80

int tamanho(char str[])
{
    int i = 0;
    for (; str[i] != '\0' ; i++)
    {
        ;
    }
    return i;
}

int ePalindromo(char str[])
{
    int i = 0 , j = tamanho(str) - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return 0;
            i++;
            j--;
        }
        return 1;
    }
}

int main()
{
    char str[MAX];
    scanf("%s" , str);
    puts(ePalindromo(str) ? 'yes' : 'no');
    return 0;
}