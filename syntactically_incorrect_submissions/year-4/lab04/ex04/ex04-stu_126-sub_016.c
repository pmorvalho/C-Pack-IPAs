
#include <stdio.h>
#include <string.h>

int main() {
    int MAX = 80;
    char palavra[MAX];

    scanf("%s", palavra);

    int len = strlen(palavra);

    if (len < MAX) {
        for (int i = 0, j = len - 1; i < j; i++, j--) {
            if (palavra[i] != palavra[j]) {
                printf("no\n");
            }
        }
        printf("yes\n");
    } 
    return 0;
}

    
