
#include <stdio.h>
void quadrado (int N) {
    int i, j;
    while (N <= 1){
        scanf("%d", &N);
    }
    for(i = 1; i < N; i++){
        for (j = 1; j < N; j++){
            printf("%d\t", (1+j+i));
        }
        printf("\n"); 
    }
}
int main (){
    int N;
    scanf("%d", &N);
    quadrado (N);
    return 0;
}
