
#include<stdio.h>
#include<string.h>

void cruz(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == (i) || j == (n - i - 1)){
                printf(" *");
            }
            else{
                printf(" -");
            }
        }
        printf("\n");
    }
}


int main(){
    int num;
    scanf("%d", &num);
    cruz(num);
    return 0;
}