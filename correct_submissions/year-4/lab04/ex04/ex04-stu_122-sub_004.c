
#include <stdio.h>
#include <string.h>
#define MAX 80

int is_palindromo(char s[])
{
    int i = 0, max = strlen(s) - 1;
    for(i = 0; i < max/2; i++)
        if(s[i] != s[max - i])
            return 0;
    return 1;

}

int main()
{
    char s[MAX];
    scanf("%s",s);
        printf("%s\n",is_palindromo(s)?"yes":"no");
    return 0;
}