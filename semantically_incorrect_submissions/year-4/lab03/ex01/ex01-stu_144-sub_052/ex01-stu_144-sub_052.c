
#include <stdio.h>


void quadrado(int n){

    int i;
    int j;

    for(i = 1; i <= n; i++){
        for(j = 1; i <= n; j++){
            printf("%d", i + j - 1);
            if(j != n) putchar('\t');
        }
        putchar('\n');
    }
}



int main(){
    
    int N;
    scanf("%d", &N);
    if( N >= 2)
        quadrado(N);

    while(N >= 2){
        scanf("%d", &N);
        quadrado(N);
    }

    return 0;
}
