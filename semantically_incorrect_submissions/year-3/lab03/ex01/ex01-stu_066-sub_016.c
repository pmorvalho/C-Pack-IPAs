
#include <stdio.h>

void quadrado(int N) {
    int i=1,num=N,voltas=0;
    while (N<2) {
        scanf("%d",&N);
    }
    for(;N>0;N--){
        for(;i<=(num+voltas);i++) {
            printf("%d\t",i);
        }
        voltas+=1;
        i=voltas+1;
        printf("\n");
    } 
}
int main (){
    int M;
    scanf("%d",&M);
    quadrado(M);
    return 0;
}