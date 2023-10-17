#include <stdio.h>


int main(){

    int N;
    int i=0;
    int divisores;

    
    scanf("%d", &N);

    while (i <= N){
        
        if(N%i == 0){
            
            divisores++;
            i++;
        }
        
        else{
            
            i++;

        }
    
    
    }

    printf("%d",divisores);

return 0;
}