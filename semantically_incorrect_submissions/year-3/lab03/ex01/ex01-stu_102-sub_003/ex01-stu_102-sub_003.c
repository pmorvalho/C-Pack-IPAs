
#include <stdio.h>
void quadrado (int N){
    int l = 1,h,aux=0,buf = 0;
    for (h = 1; h <= N; ++h){
        for (l = 1 + buf; l <= (N + aux); ++l){
            if (l == N + aux)
                {printf("%d",l);}
            else
                {printf("%d\t",l);}
        }
        buf = l - N;
        aux += 1;
        printf("\n");
    }
}
int main(){
    int N;
    printf("Escreve numero: ");
    scanf("%d",&N);
    quadrado(N);
    return 0;
}