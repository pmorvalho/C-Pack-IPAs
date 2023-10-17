
#include <stdio.h>

#define MAX 80

int main()
{
    char palavra[MAX];
    int i = 0, j = 0, pal = 1;

    scanf("%s", palavra);
    
    while (palavra[++i] != '\0') {}
    
    while (i > 0) {
        i--;
        if (palavra[j] != palavra[i]) {
            pal = 0;
            break;
        }
        j++;
    }

    if (pal == 0)
    {
        printf("no\n");
    } else
        printf("yes\n");
    
    return 0;
}
