
#include <stdio.h>
#include <string.h>
#define MAX 100
void apagaCaracter(char s[], char c)
{
    int quantidade = strlen(s), i;
    for (i = 0; i < quantidade; i++){
        if (s[i] != c){
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
int main()
{
    char s[MAX], c;
    fgets(s, sizeof(s), stdin);
    scanf("%c", &c);
    apagaCaracter(s, c);
    return 0;
}