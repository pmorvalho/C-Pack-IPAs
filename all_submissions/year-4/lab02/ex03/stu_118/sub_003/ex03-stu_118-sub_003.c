
#include <stdio.h>

int divisor(int a,int b) {
    return a % b ==0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (divisor(a, b)){
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
    return 0;
}
