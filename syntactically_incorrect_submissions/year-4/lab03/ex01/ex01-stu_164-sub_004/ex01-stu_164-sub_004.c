
#include<stdio.h>

void quadrado(int n){
    for(int i = 0; i <= n - 1; i++){
        for(int j = 1; j <= n; j++){
            printf("%d\t", (j+i));
        }
        printf("\n");
    }
}


int main(){
    int num;
    scanf("%d", &num);
    if (num >= 2){
        quadrado(num);
    }
    return 0;
}