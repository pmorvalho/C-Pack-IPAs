#include <stdio.h>
#define VECMAX 100

int main(){
    
    int n;
    int i=0;
    int numero;
    
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d",&numero);
        
        while(numero != 0){
            printf("* ");
            numero--;
        }
        printf("\n");
    }







return 0;
}


