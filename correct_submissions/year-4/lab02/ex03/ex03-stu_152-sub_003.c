
#include <stdio.h>

int main(){
    int divisor,dividendo;
    
    scanf("%d%d",&dividendo,&divisor);

    if (dividendo % divisor == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    
    return 0;
}