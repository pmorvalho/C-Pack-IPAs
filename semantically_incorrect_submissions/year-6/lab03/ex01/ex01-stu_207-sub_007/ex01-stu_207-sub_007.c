
#include <stdio.h>
void quadrado(int N);

int main(){
    int N;
    scanf("%d", &N);
    if (N>=2)
        quadrado(N);
    return 0;
}

void quadrado(int N){
    int x, y;
    for (x = 0; x < N; x++){
        for (y = 0; y < N; y++){
            printf("%d\t", 1 + x + y);
        }
        printf("\n");
    }
}