
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
            (e == 1) ? printf(' ') : printf('  ');
            ++e;
        }
        while(N-i <= e && e <= N) {
            (e == 1) ? printf("%d", num) : printf("%2d", num);
            ++num;
            ++e;
        }
        num = num - 2;
        while(N < e && e < N+i) {
            printf("%2d", num);
            --num;
            ++e;
        }
        if(e == N+i) {
            (i == N-i) ? printf("%d\n", num) : printf("%2d", num);
            ++e;
        }
        while(N+i < e && e < 2*N-1) {
            printf("  ");
            ++e;
        }
        if(e == 2*N-1)
            printf("  \n");
        e = 1;
        num = 1;
        ++i;
    }
}