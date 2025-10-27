
#include <stdio.h>

void quadrado(int n) {
    int aux = n;
    for (int i = 1; i <= n; i++) {
        aux += 1;
        for (int j = i; j <= aux - 1; j++) {
            printf("%d\t", j);
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);

    if(n >= 2) quadrado(n);

    return 0;
}
