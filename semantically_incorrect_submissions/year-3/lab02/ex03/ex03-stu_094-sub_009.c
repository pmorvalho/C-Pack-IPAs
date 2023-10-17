

#include <stdio.h>

int main () {

    int v1, v2;

    scanf("%d %d", &v1, &v2);

    if ((v1 % v2) == 0) {
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}