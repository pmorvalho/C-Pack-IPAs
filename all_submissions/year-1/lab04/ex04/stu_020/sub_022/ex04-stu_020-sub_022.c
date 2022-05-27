#include <stdio.h>
#include <string.h>
#define MAX 80

int main()
{   
    int i,size,diferencas=0;
    char s[MAX];        
    scanf("%s",s);      
    
    size = strlen(s);

    for(i=0; i < (size / 2); i++)
        if (s[i] != s[size - i - 1])
            diferencas += 1;

    if (diferencas == 0)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}