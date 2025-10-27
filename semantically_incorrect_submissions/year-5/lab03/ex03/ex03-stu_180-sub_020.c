

#include <stdio.h>
#define MAX N
#define METADE (N/2)+1


void cruz(int N){
    int i,j;
    int min=1;
    for (i=1; i<=N; i++){
        for (j=1; j<=N ;j++){
            if (i==min){
                if(j==min){
                    printf("* ");
                }
                if(j==MAX){
                    printf("*");
                }
                if(j!=MAX && j!=min){
                    printf("- ");
                }
                if(j==N){
                    printf("\n");
                }
            }
            
        }  
        min++;
        MAX--;      
    }
}



int main(){
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}