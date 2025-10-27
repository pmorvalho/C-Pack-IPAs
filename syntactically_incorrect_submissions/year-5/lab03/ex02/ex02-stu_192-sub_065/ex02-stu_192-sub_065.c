
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
            (e == 1) ? printf("%c", ' ') : printf("%c%c", ' ', ' ');
            ++e;
        }
        while(N-i <= e && e <= N) {
            if(e == 1)
                printf("%d", num);
            else if (i == 0)
                printf("%c%d\n", ' ', num);
            else
                printf("%c%d", ' ', num);
            ++num;
            ++e;
        }
        num = num - 2;
        while(N < e && e < N+i) {
            printf("%C%d", ' ', num);
            --num;
            ++e;
        }
        if(e == N+i) {
            (i == N-i) ? printf("%c%d\n", ' ', num) : printf("%c%d\n", ' ', num);
            ++e;
        }
        e = 1;
        num = 1;
        ++i;
    }
}
