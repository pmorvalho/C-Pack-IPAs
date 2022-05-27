#include <stdio.h>
#define VECMAX 100

int main(){
    int i=1, n,v,grafico[VECMAX],cont,maior=0;

    for (i = 1; i < VECMAX;i++)             
        grafico[i] = 0;             

    scanf("%d",&n);                 

    i = 1;                          
    scanf("%d",&v);                 
    while (i < n){
        grafico[i] = v;
        i++;
            if (v > maior){
                maior = v;}
        scanf("%d",&v);
    }
    grafico[i] = v;                 
    if (v > maior){
        maior = v;
    } 

    

    for (cont = 1; cont <= maior;cont++)                     
        {
        for (i = 1; i <= n;i++)  
            if (grafico[i] >= cont)              
            {
                printf("*"); 
            }     
            else if (grafico[i] < cont)              
            {
                printf(" "); 
            }     
        printf("\n"); 
        }
    return 0;
}