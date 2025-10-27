
#include <stdio.h>

void piramide(int N){
    int i, j, k, l;
    for(i=1; i<=N; i++){
        for(j = (N-i)*2; j != 0; j--){
            printf(" ");
        }
        for(k = 1; k<=(i - 1); k++){
            printf("%d ", k);
        }
        for(l = i; l>=2; l--){
            printf("%d ", l);
        }
        printf("1\n");
    }
}

int main(){
    int N;
    scanf("%d", &N);
    while(N < 2){
        scanf("%d", &N);
    }
    piramide(N);
    return 0;
}

