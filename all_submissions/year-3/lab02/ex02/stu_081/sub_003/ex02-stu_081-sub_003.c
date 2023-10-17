

#include <stdio.h>

int main(){
    int N, M;

    printf("N?\n");
    scanf("%d", &N);
    printf("M?\n");
    scanf("%d", &M);

    if (N <= M){
        printf("%d\n %d\n", N, M);
    }
    
    else{
        printf("%d\n%d\n", M, N);
    }
    return 0;
}