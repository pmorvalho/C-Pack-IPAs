
#include <stdio.h>

void quadrado(int N){
    int i,n;
    int N_copy = N;
    int n_copy=1;
    for (i = 0; i< N; i++){
        for(n = n_copy;n<=N_copy;n++){
            printf("%d\t", n);
        }
        N_copy++;
        n_copy++;
        printf("\n");    
    }
   
    
}

int main(){
    int N;
    scanf("%d",&N);
    printf("\n");
    while (N< 2) {
        printf("Invalid number try again :\n");
        scanf("%d",&N);}
    quadrado(N);
    return 0;
}
