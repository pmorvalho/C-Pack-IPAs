
#include <stdio.h>

int main(){
    int divisor,dividendo;
    
    scanf("%d%d",&dividendo,&divisor);

    if (dividendo % divisor == 0){
        printf("yes");
    }
    else{
        printf("no");
    }
    
    return 0;
}