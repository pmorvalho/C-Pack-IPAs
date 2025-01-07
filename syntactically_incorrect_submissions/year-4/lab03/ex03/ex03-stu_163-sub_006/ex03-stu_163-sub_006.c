
#include <stdio.h>



int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        for(int j= 0; j<n; j++){
            if(j==i|| j==n-1-i){
                printf("*");
            }
            else{
                printf("-");                
            }
            if(j != n-1) printf(" ");
        }
        printf("\n");
    }
}