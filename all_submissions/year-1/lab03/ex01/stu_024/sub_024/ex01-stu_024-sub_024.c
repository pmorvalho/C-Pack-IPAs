lude <stdio.h>

void quadrado(int N);

int main(){
    
    int N;

    scanf("%d", &N);
    
    if (N>=2)
        {
        quadrado(N);
        }
    return 0;
}
    
void quadrado(int N){
    
    int i=0;
    int j=0;
    
    for (i=1;i<=N;i++)
       {
           for (j=i;j<=N+i-1;j++){
            
            printf("%d\t",j); 
            }
            printf("\n");       
            
       } 
        
}
   