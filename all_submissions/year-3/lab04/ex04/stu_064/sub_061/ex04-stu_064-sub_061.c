

#include <stdio.h>
#include <string.h>  

#define MAX 80

int main(){
    char palavra[MAX], palavrainvertida[MAX];
    int i, j, len;

    scanf("%s", palavra);
    len = strlen(palavra);
    j = len - 1;

    for(i = 0; i < len; i++) {
      palavrainvertida[j] = palavra[i];
      j--;
    }

    palavrainvertida[i] = '\0';
   
    if (strcmp(palavra, palavrainvertida) == 0)  
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
