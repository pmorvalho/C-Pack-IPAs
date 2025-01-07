
#include <stdio.h>

void cruz(int N);

int main(void){
    int n;
    scanf("%d",&n);
    cruz(n);


    return 0;
}

void cruz(int N){
    int count = N;
    int i,j;
    for(i = 1; i <= N;i++){
        for(j = 1; j <= N;j++){
            if(j != 1){
                printf(" ");
            }
            if(j == i || j == count){ 
                printf("*");
            }
            else{
                printf("-");
            }

        }
        printf("\n");
        count--;
    }

    return;
}