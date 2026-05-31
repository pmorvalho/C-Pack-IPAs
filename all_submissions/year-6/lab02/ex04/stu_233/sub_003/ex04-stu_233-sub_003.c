

#include <stdio.h>

int main () {
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    if(x <= y && x <= z) {
        printf("%d ", x);
        if(y <= z) {
            printf("%d ", y);
            printf("%d\n", z);}
        else {
            printf("%d ", z);
            printf("%d\n", y);
        }
    } else if (y <= x && y <= z) {
        printf("%d ", y);
        if(x <= z) {
            printf("%d ", x);
            printf("%d\n", z);
        } else {
            printf("%d ", z);
            printf("%d\n", x);
        }
    } else {
        printf("%d ", z);
        if (x <= y) {
            printf("%d ", x);
            printf("%d\n", y);
        } else {
            printf("%d ", y);
            printf("%d\n", x);
        }
    }
    return 0;
}