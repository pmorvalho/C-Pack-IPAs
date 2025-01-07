
#include <stdio.h>


void quadrado(int N){

    int i = 1;
    int j = 1;
    
    while(i <= N){
        while(j <= N){
            printf("%d", i + j - 1);
            if(j != N) putchar('\t');
            j++;
        }
        i++;
        j = 1;
        putchar('\n');
    }
}



int main(){
    
    int N;
    scanf("%d", &N);
    if(N >= 2)
        quadrado(N);

    return 0;
}
