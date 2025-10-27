

#include <stdio.h>

int main() {
    long f;
    scanf("%ld", &f);
    if ((f % 9) == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}