
#include <stdio.h>
int main () {
    int A, B, C, menor, medio, maior;
    scanf("%d %d %d", &A, &B, &C);
    menor = medio = maior = A;
    if (A > B && A > C) {
        maior = A;
        if (B > C){
            medio = B;
            menor = C;
        }
        else {
            medio = C;
            menor = B;
        }
    }
    if (B > A && B > C){
        maior = B;
        if (C > A){
            medio = C;
            menor = A;
        }
        else{
            medio = A;
            menor = C;
        }
    }
    if (C > A && C > B){
        maior = C;
        if (B > A){
            medio = B;
            menor = A;
        }
        else{
            medio = A;
            menor = B;
        }
    }
    printf("%d %d %d\n", menor, medio, maior);
    return 0;
}
