
#include <stdio.h>
#include <string.h>
#define MAX 80

int main(){

    
    char s[MAX];
    int comprimento, i = 0, metade;

    scanf("%s", s);
    
    comprimento = strlen(s);

    metade = comprimento/2;
    
    char s1[metade], s2[metade];

    for (i = 0; i < metade; i++)
        s1[i] = s[i];
    
    for (i = 0; i < metade; i++)
        s2[i] = s[comprimento-1-i];


    if (strcmp(s1, s2))
        printf("no\n");  
    else
        printf("yes\n");
    
    return 0;
}