
#include <stdio.h>
#include <string.h>

int palindromo(char string[])
{
    int comprimento = strlen(string);
    if(comprimento == 1) {
        return 1;
    }
    else if(comprimento == 2 && string[0] == string[1])
    {
        return 1;
    }
    else if(comprimento > 2 && string[0] == string[comprimento - 1])
    {
        int novo_comprimento = comprimento - 2;
        char nova_string[novo_comprimento + 1];

        for(int i = 0; i < novo_comprimento; i++)
        {
            nova_string[i] = string[i + 1];
        }
        nova_string[novo_comprimento] = '\0';
        return palindromo(nova_string);
    }
    else
    {
        return 0;
    }
}

int main()
{
    char string[100];
    scanf("%s", string);
    if(palindromo(string))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}