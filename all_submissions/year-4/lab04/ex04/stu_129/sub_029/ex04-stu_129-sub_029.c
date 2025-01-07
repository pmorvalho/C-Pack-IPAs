
#include <stdio.h>
#include <string.h>

#define MAX 80

int main()
{
    int i, j, tamanho;
    char s[MAX];
    scanf("%s", s);
    tamanho = strlen(s);
    for(i = 0, j = tamanho - 1; i < j; i++, j--) {
        if(s[i] != s[j]) {
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    return 0;
}