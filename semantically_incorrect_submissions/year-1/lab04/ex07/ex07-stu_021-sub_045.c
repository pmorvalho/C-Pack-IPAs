#include <stdio.h>

#define MAX 80



int leLinha(char str[]);

void apagaCaracter(char str[], char c);

int main()
{
    char str[MAX], c;
    
    fgets(str, MAX, stdin);
    scanf("%c", &c);
    
    apagaCaracter(str, c);

    printf("%s", str);

    return 0;
}    


void apagaCaracter(char str[], char c)
{
    int i = 0, j = 0;
    char car;

    while(str[i++] != '\0')
    {
        car = str[i];
        if (car != c) 
            str[j++] = car;
    }
    str[j] = '\0';
}