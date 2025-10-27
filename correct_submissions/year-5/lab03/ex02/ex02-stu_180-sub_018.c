

#include <stdio.h>

void piramide(int N){
    int i, j, k, p;
    for (i=1; i<=N; i++){
        j=N-i;
        for (k=1; k<=j; k++){
            printf("  ");
        }
        for(p=1; p<=i; p++){
            if (i==1){
                printf("%d\n", p);
            }
            else{
                printf("%d ", p);
            }
        }
        j=N;
        for(p=i-1; p > 0; p--){
            if (p==1){
                printf("%d\n", p);
            }
            else{
                printf("%d ", p);
            }
            
        }
    }
}


int main(){
    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}