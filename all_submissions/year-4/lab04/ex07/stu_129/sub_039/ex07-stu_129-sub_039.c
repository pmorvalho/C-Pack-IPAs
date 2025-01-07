
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 80

void apagaCaracter(char s[], char c)
{
    char aux[MAX];
    int i, j = 0;
    fgets(s, MAX, stdin);
    scanf("%c", &c);
    for(i = 0; s[i] != '\0' && i < (int) strlen(s); i++){
        if(s[i] != c) {
            aux[j] = s[i];
            j++;
        }
    }
    aux[j] = '\0';
    strcpy(s, aux);
}

int main()
{
    char c = '\0', s[MAX];
    apagaCaracter(s, c);
    printf("%s", s);
    return 0;
}