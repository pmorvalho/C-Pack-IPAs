
#include <stdio.h>
#include <string.h>
#define MAX 80

int main(){

    
    char s[MAX];
    int comprimento, i = 0, metade;

    scanf("%s", s);
    
    comprimento = strlen(s);

    metade = comprimento/2;
    
    char s1[metade+1], s2[metade+1];

    for (i = 0; i < metade; i++)
        s1[i] = s[i];
    s1[metade] = '\0';
    
    for (i = 0; i < metade; i++)
        s2[i] = s[comprimento-1-i];
    s2[metade] = '\0';

    if (strcmp(s1, s2))
        printf("no\n");  
    else
        printf("yes\n");
    
    return 0;
}