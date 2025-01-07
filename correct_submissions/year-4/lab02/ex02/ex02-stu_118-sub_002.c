
#include <stdio.h>
int manor(int a, int b) {
    if (b < a) {
        return a;
    }
    else {
        return b;
    }
}
int miaor(int a, int b) {
    if (b > a) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n%d\n", miaor(a, b), manor(a, b));
    return 0;
}