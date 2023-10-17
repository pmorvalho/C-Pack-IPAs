

#include <stdio.h>

void piramide(int N);

int main(){
    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}

void piramide(int N){
    int i,j,k,l = 1,m;
    for (i = N; i > 0; i--){
        
        for (j = 0; j < (i-1)*2; j++){
            putchar(' ');
        }
        for (k = 1; k <= l; k++){
            printf("%d ",k);
        }
        for (m = l-1; m > 0; m--){
            if (m == 1 && i == 1)
            printf("%d", m);
            else
            printf("%d ", m);
        }
        l++;
        putchar('\n');
    }
}