
#include<stdio.h>

void quadrado(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d%c", i+j+1, (j ==n-1?'\n':'\t'));
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}
