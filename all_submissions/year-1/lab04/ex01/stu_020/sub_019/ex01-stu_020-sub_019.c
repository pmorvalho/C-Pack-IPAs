#include <stdio.h>
#define VECMAX 100

int main(){
    int i=1, n,v,grafico[VECMAX],cont;

    for (i = 1; i < VECMAX;i++)             
        grafico[i] = 0;             

    scanf("%d",&n);                 

    i = 1;                          
    scanf("%d",&v);                 
    while (i < n){
        grafico[i] = v;
        i++;
        scanf("%d",&v);
    }
    grafico[i] = v;                 


    

    for (i = 1; i <= n;i++)                     
        for (cont = 0;cont <= grafico[i];cont++)  
            if (cont < grafico[i])              
            {
                printf("*");
            }
            else
            {
                printf("\n");
            }
    return 0;
}
