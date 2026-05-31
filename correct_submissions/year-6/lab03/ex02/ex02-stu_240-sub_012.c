
#include <stdio.h>

void piramide(int num){
    int i, j, y, contador = 1;
    for (i = num; i > 0; i--){
        for (j = 1; j < i; j++){
            printf("  ");
        }
        for (j = 1; j <= contador; j++){
            printf("%d", j);
            if (j < contador){
                printf(" ");
            }
        }
        for (y = contador - 1; y > 0; y--){
            printf(" %d", y);
        }
        printf("\n");
        contador++;
    }
}

int main(){
    int num;
    scanf("%d", &num);
    piramide(num);
    return 0;
}