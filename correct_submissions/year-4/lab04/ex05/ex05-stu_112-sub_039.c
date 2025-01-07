
#include<stdio.h>

#define MAX 100


int main()
{
    int i=0, c;
    char s[MAX];

    for(c = getchar(); c != '\n' && c != EOF; c = getchar())
        s[i++] = c;

    s[i] = '\0';

    printf("%s\n", s);
    
    return 0;    
}