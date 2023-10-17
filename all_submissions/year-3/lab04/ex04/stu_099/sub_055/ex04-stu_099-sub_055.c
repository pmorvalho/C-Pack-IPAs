
#include <stdio.h>
#include <string.h>

#define MAX 80

int main()
{
    char palavra[MAX];
    int r = 0, l = 0, pal = 1;

    scanf("%s", palavra);

    r = strlen(palavra);
    
    while (r > l) {
        
        r--;
        if (palavra[l] != palavra[r]) {
            pal = 0;
            break;
        }
        l++;
    }

    if (pal == 0)
    {
        printf("no\n");
    } else
        printf("yes\n");
    
    return 0;
}
