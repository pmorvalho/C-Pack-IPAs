#include <stdio.h>

#define MAX 80

int pedir_string(char string[], int size);
int eh_palindromo(char string[], int size);

int main()
{
    int tamanho_palavra;
    char palavra[MAX];

    tamanho_palavra = pedir_string(palavra, MAX);

    if (eh_palindromo(palavra, tamanho_palavra - 1))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}

int pedir_string(char string[], int size)
{
    int i = 0;
    char c;

    while (i < (size - 2) && ((c = getchar()) != '\n'))
    {
        string[i] = c;
        ++i;
    }
    string[i] = '\0';

    return i;
}

int eh_palindromo(char string[], int word_size)
{
    int i = 0;

    while (i <= word_size)
    {
        if (string[i] != string[word_size])
        {
            return 0;
        }
        ++i;
        --word_size;
    }
    return 1;
}
