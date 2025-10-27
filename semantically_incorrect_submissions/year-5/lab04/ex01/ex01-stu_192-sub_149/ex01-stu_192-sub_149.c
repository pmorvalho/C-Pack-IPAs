
#include <stdio.h>

#define VECMAX 100

int main() {
    int n, num, i = 0, e = 1;
    int numeros[VECMAX];
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &num);
        numeros[i] = num;
        ++i;
    }
    i = 0;
    while(i < n) {
        while(e < numeros[i]) {
            printf("*");
        }
        if(e == numeros[i])
            printf("*\n");
        e = 1;
    }
    return 0;
}