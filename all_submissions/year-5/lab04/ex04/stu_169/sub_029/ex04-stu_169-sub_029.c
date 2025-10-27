

#include <stdio.h>
#include <string.h>
#define MAX 80

int main() {
    char seq[MAX];
    int j, i = 0;

    scanf("%s", seq); 

    for (i = 0, j = (strlen(seq) - 1); i < j; i++, j--) {
        if (seq[i] != seq[j]) { 
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    return 0;
}