
#include <stdio.h>

void cruz(int N);

int main() {
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}

void cruz(int N) {
    int i = 0, e = 1;
    if(N%2==0) {
        while(i < N/2) {
            while(e <= N/2) {
                (e == i+1) ? printf("%c%c", '*', ' ') : printf("%c%c", '-', ' ');
                ++e;
            }
            while(e > N/2 && e < N) {
                (e == N-i) ? printf("%c%c", '*', ' ') : printf("%c%c", '-', ' ');
                ++e;
            }
            if(e == N) {
                (e == N-i) ? printf("%c\n", '*') : printf("%c\n", '-');
                ++e;
            }
            ++i;
            e = 1;
        }
        while(i >= N/2 && i < N) {
            while(e <= N/2) {
                (e == N-i) ? printf("%c%c", '*', ' ') : printf("%c%c", '-', ' ');
                ++e;
            }
            while(e > N/2 && e < N) {
                (e == i+1) ? printf("%c%c", '*', ' ') : printf("%c%c", '-', ' ');
                ++e;
            }
            if(e == N) {
                (e == i+1) ? printf("%c\n", '*') : printf("%c\n", '-');
                ++e;
            }
            ++i;
            e = 1;
        }
    }
    else {
        while(i < N/2) {
            while(e <= N/2) {
                (e == i+1) ? printf("%c%c", '*', ' ') : printf("%c%c", '-', ' ');
                ++e;
            }
            while(e > N/2 && e < N) {
                (e == N-i) ? printf("%c%c", '*', ' ') : printf("%c%c", '-', ' ');
                ++e;
            }
            if(e == N) {
                (e == N-i) ? printf("%c\n", '*') : printf("%c\n", '-');
                ++e;
            }
            ++i;
            e = 1;
        }
        if(i == N/2) {
            while(e <= N/2) {
                printf("%c%c", '-', ' ');
                ++e;
            }
            if(e == N/2 + 1) {
                printf("%c%c", '*', ' ');
                ++e;
            }
            while(e > N/2 + 1 && e < N) {
                printf("%c%c", '-', ' ');
                ++e;
            }
            if(e == N) {
                printf("%c\n", '-');
                ++e;
            }
            ++i;
            e = 1;
        }
        while(i > N/2 && i < N) {
            while(e <= N/2) {
                (e == N-i) ? printf("%c%c", '*', ' ') : printf("%c%c", '-', ' ');
                ++e;
            }
            while(e > N/2 && e < N) {
                (e == i+1) ? printf("%c%c", '*', ' ') : printf("%c%c", '-', ' ');
                ++e;
            }
            if(e == N) {
                (e == i+1) ? printf("%c\n", '*') : printf("%c\n", '-');
                ++e;
            }
            ++i;
            e = 1;
        }
    }
}

