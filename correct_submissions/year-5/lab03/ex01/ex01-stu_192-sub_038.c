
#include <stdio.h>

void quadrado(int N);

int main() {
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}

void quadrado(int N) {
    int i = 0, e = 1;
    while(i < N) {
        while(e < N) {
            printf("%d\t", e+i);
            e++;
        }
        if (e == N) {
            printf("%d\n", e+i);
            e = 1;
        }
        ++i;
    }
}