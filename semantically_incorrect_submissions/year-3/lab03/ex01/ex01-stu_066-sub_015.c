
#include <stdio.h>

void quadrado(int N) {
    int i;
    scanf("%d",&N);
    while (N<2) {
        scanf("%d",&N);
    }
    for(;N>0;N--){
        for(i=1;i<=N;i++) {
            printf("%d\t",i);
        }
        printf("\n");
    } 
}
int main (){
    void quadrado(int N);
    return 0;
}