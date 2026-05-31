
#include <stdio.h>
#include <string.h>

#define YES 1
#define NO 0
#define MAX 80








int main() {
    char str[MAX];
    int n, i, estado = YES;
    scanf("%s", str);
    n = strlen(str);
    for (i = 0; i < (n/2); i++)
        if (str[i] != str[n-i-1]) {
            estado = NO;    
            break;
        }
    if (estado == YES)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}



