
#include <stdio.h>

void quadrado(int N) {
    int i=1,num=N,voltas=0;
    while (N<2) {
        scanf("%d",&N);
    }
    for(;N>0;N--){
        for(;i<=(num+voltas);i++) {
            if (i==(num+voltas)) 
                printf("%d",i);
            else 
                printf("%d\t",i);
        }
        voltas+=1;
        i=voltas+1;
        printf("\n");
    } 
}
int main (){
    int N;
    scanf("%d",&N);
    quadrado(N);
    return 0;
}