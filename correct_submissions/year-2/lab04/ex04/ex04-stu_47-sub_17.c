#include <stdio.h>
#include <string.h>

#define MAX 80

int main(){
    int i, j, c;
    char palavra[MAX], p_inv[MAX];

    for (i = 0; i < MAX-1 && (c = getchar()) != EOF && c != '\n' && c != ' '; i++)
        palavra[i] = c;
    palavra[i] = '\0';

    for (j = 0; i > 0; j++){
        i--;
        p_inv[j] = palavra[i];
    }
    p_inv[j] = '\0';

    if(strcmp(palavra, p_inv))
        printf("no\n");
    else
        printf("yes\n");
    return 0;
}