#include <stdio.h>

int main(){
    int m, n, maior, menor;
    scanf("%d %d", &m, &n);
    if(m > n){
        menor = n;
        maior = m;
    } else {
        menor = m;
        maior = n;
    }
    printf("%d\n%d\n", menor, maior);
    return 0;
}