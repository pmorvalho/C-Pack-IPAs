
#include <stdio.h>
#include <string.h>

int main(){
    int i, j;
    char str[80], invertida[80];
    scanf("%s", str);
    
    int len = strlen(str);
    for(i=len-1; i>=0; i--)
        invertida[j++] = str[i];
    
    invertida[j] = '\0';
    
    if(strcmp(str, invertida) == 0)
        printf("yes\n");
    else
        printf("no\n");
    
    return 0;
}