
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
void maisculas(char s[])
{
    int i, quantidade;
    quantidade = strlen(s);
    char s1[MAX];
    for (i=0; i<quantidade; i++){
        s1[i] = toupper(s[i]);}
    printf("%s", s1);
}
int main()
{
    char s[MAX];
    fgets(s, sizeof(s), stdin);
    maisculas(s);
    return 0;
}