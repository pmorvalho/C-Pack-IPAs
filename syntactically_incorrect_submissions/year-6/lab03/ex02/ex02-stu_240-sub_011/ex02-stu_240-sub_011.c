
#include <stdio.h>

void piramide(int n){
    int contador = 1;
    for (int i = n; i > 0; i--){ 
        for (int j = 1; j < i; j++){
            printf(" ");
        }
        for (int j = 1; j <= contador; j++){
            printf("%d", j);
        }
        int y;
        for (y = contador - 1; y > 0 ; y--){
            printf("%d", y);
        }
        printf("\n");
        contador ++;
    }
}

int main(){
    int num;
    scanf("%d", &num);
    piramide(num);
    return 0;
}