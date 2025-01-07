
#include <stdio.h>

int maior(int a, int b, int c) {
int m;
m = a > b ? a : b;
return m > c ? m : c;
}

int menor(int a, int b, int c) {
int m;
m = a < b ? a : b;
return m < c ? m : c;
}

int meio(int a, int b, int c) {
    if (a < b && b < c) {
        return b;
    }
    else if (a < c && c < b) {
        return c;
    }
    else if (b < a && a < c) {
        return a;
    }
    else if (b < c && c < a) {
        return c;
    }
    else if (c < a && a < b) {
        return a;
    }
    else {
        return b;
    }
}


int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d\n", menor(a, b, c), meio(a, b, c), maior(a, b, c));
    return 0;
}