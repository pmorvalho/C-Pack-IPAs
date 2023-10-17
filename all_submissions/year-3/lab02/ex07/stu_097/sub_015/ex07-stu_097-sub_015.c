
#include <stdio.h>

int main(){
    
    int N, contador_div=0, i=1;
    scanf("%d", &N);

    while (i <= N){
        if ((N % i) == 0)
            contador_div ++;
        i++;
    }
    printf("%d \n", contador_div);
    return 0; 
}