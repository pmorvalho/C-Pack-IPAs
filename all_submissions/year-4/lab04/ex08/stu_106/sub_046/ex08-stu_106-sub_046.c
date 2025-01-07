
#include <stdio.h>
#include <string.h>

int main() {
    char n1[101], n2[101];
    int cmp;

    scanf("%s %s", n1, n2);
    cmp = strcmp(n1, n2);

    if (cmp > 0) {
        printf("%s\n", n1);
    }
    else {
        printf("%s\n", n2);
    }

    return 0;
    
}