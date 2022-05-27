#include <stdio.h>


void piramide(int N){
    
    int i=0;
    int j=0;
    int k=0;
    int l=0;
    
    for (i=1;i<=N;i++){
            for (j=0;j<=(N-i);j++){
            printf(" ");   
           }                         
            
            for (k=1;k<=i;k++){
            printf("%d ",k);      
            }

            for(l=i-1;l>=1;l--){  
            printf("%d ",l);    
            }
            
            printf("\n");
    }

printf("\n");

}




int main(){
   int N; 
    
    scanf("%d",&N);
    if (N>=2)
        piramide(N);
    return 0;
}