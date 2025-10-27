
#include <stdio.h>

void piramide(int N);

int main() {
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}

void piramide(int N) {
    int i = 0, e = 1, num = 1;
    while(i < N) {
        while(e < N-i) {
            printf(" ");
            ++e;
        }
        while(N-i <= e <= N) {
            printf("%d", num);
            ++num;
            ++e;
        }
        --num;
        while(N < e <= N+i) {
            (i == N-1) ? printf("%d\n", num) : printf("%d", num);
            --num;
            ++e;
        }
        while(N+i < e < 2*N-1) {
            printf(" ");
            ++e;
        }
        if(e == 2*N-1)
            printf(" \n");
        e = 1;
        num = 1;
    }
}