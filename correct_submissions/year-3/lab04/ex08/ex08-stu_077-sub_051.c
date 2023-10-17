
#include<stdio.h>
#define MAX 100
#define TRUE 1
#define FALSE 0

int leLinha(char s[]) 
{
    int i, c;
    for (i = 0; i < MAX && (c = getchar()) != EOF && c != '\n' && c != ' '; i++) {
        s[i] = c;
    }
    s[i] = '\0';
    return i;
}

int main() 
{
    char n1[MAX], n2[MAX];
    int i, max;
    leLinha(n1);
    leLinha(n2);
    for (i = 0; n1[i] == n2[i] && n1[i] != '\0'; i++);
    if (n1[i] > n2[i])
    {
        max = TRUE;
    }
    else
    {
        max = FALSE;
    }
    if (max)
    {
        printf("%s\n", n1);
    }
    else
    {
        printf("%s\n", n2);
    }
    return 0;
}