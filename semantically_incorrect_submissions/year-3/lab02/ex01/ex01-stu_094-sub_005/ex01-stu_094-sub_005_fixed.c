

#include <stdio.h>

int main () {

    int v1, v2, v3;

    scanf("%d%d%d", &v1, &v2, &v3);

    if ((v2 - v1) < 0) {
        if ((v3 - v1) < 0) {
            printf("%d", v1);
        }
        else {
            printf("%d", v3);
        }
    }
    else {
        if ((v3 - v2) < 0) {
            printf("%d", v2);
        }
        else {
            printf("%d", v3);
        }
    }
    printf("\n");
    return 0;

}
