#include <stdio.h>

int main(){
    int n, ad, linha;
    scanf("%d", &n);
    if (n >=2){
        for(linha =1;linha <= n; ++linha){
            for(ad=0; ad < n; ++ad)
                printf("%d\t", linha+ad);
            printf("\n");
        }
    }
    return 0;
}