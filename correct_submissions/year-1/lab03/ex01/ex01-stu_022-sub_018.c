#include <stdio.h>

void quadrado(int n);

int main(){
    int n;
    scanf("%d", &n);
    if (n >=2)
        quadrado(n);
    return 0;
}


void quadrado(int n){
    int ad, linha;
        for(linha =1;linha <= n; ++linha){
            for(ad=0; ad < n; ++ad)
                if (ad < n-1)
                printf("%d\t", linha+ad);
                else
                printf("%d", linha+ad);
            printf("\n");
            }
}

