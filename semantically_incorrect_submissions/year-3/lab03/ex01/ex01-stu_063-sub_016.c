

#include <stdio.h>

void quadrado(int n){
    int i, j, estado = 1;
    for (j = 0; n > j; j++){
        for (i = 0; n > i; i++){
            if (i)
                printf("\t%d", i + estado);
            printf("%d", i + estado);
        }
        estado ++;
        putchar('\n');
    }
}

int main(){
    int n;
    scanf("%d",&n);
    quadrado(n);
    return 0;
}