
#include <stdio.h>
int main(){
    int N,i,soma=0;
    scanf("%d",&N);
    int numeros[N]; 
    
    for (i=0;i<N;i++){
        scanf("%d",&numeros[i]);
        soma+=numeros[i];
    }
    printf("%d\n%d\n",N,soma);
    return 0; 
} 