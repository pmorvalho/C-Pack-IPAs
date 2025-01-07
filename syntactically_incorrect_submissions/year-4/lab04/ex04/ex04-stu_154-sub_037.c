
#include <stdio.h>
#include <string.h>
#define MAX 80



int main() {
    char palavra[MAX];
    int i;
    scanf("%s", palavra);

    int length = strlen(palavra);
    for (i = 0; i < length / 2; i++) {
        if (palavra[i]!= palavra[length - i - 1]) {
            printf("no\n");
        }
        else {
            printf("yes\n");
        }
    }

    return 0;
    
}
