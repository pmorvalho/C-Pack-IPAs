
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 80

void apagaCaracter(char s[], char c)
{
    char aux[MAX];
    int i, j = 0;
    aux[0] = '\0';
    fgets(s, MAX, stdin);
    scanf("%c", &c);
    for(i = 0; s[i] != '\n' && s[i] != '\0' && i < (int) strlen(s); i++){
        if(s[i] != c) {
            aux[j] = s[i];
            j++;
        }
    }
    for(i = 0; aux[i] != '\0' && i < (int) strlen(aux); i++){
        s[i] = aux[i];
    }
    s[i] = '\0';
}

int main()
{
    char c = '\0', s[MAX];
    apagaCaracter(s, c);
    printf("%s\n", s);
    return 0;
}