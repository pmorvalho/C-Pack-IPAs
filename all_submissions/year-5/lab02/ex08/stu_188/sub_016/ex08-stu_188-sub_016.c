
#include <stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    float numeros[N],media,todos_numeros=0;
    for(i=0;i<N;i++){
        scanf("%f",&numeros[i]);  
        todos_numeros=todos_numeros+numeros[i];
    }
    media=todos_numeros/N;
    printf("%.2f\n", media);
    return 0;
}
