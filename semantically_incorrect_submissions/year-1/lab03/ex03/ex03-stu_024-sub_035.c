#include <stdio.h>


void cruz(int N){
    int i=0;             
    int j=0;

    
    for(i=0;i<N;i++){
        printf("\n");
        
        for(j=0;j<N;j++){
        
            if( (i==j) || (j==N-i-1)){
                printf("* ");
                
            }
            else{
                printf("- ");
               
            }   

        }
        
        printf("\n");
    }



}





int main(){
   int N; 
    
    scanf("%d",&N);
    if (N>=2)
        cruz(N);
    return 0;
}
