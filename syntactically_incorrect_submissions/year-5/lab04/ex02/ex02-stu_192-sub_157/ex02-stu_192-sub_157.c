
#include <stdio.h>

#define VECMAX 100

int main() {
    int n, num, i = 0, e = 0;
    int numeros[VECMAX];
    char result[VECMAX][VECMAX];
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &num);
        numeros[i] = num;
        ++i;
    }
    i = 0;
    while(i < n) {
        while(e < numeros[i]) {
            result[i][e] = '*';
            ++e;
        }
        while(e < n) {
            result[i][e] = ' ';
            ++e;
        }
        e = 0;
        ++i;
    }
    i = 0;
    while(e < n) {
        while(i < n-1) {
            printf("%c", result[i][e]);
            ++i;
        }
        while(i < n) {
            printf("%c\n", result[i][e]);
            ++i;
        }
        i = 0;
        ++e;
    }
}