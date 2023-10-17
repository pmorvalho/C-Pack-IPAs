
#include <stdio.h>
void quadrado (int N) {
    int l, c;
    for(l = 1; l < N; l++){
        for (c = 1; c < N; c++){
            printf("%d\t", (1+l+c));
        }
        printf("\n"); 
    }
}
int main (){
    int N;
    scanf("%d", &N);
    if (N>=2){
        quadrado (N);
    }    
    return 0;
}
