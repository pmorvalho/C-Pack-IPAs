

#include <stdio.h>

void cruz(int N);

int main(){
    int N;
    scanf("%d",&N);
    cruz(N);
    return 0;
}

void cruz(int N){

    int linha,coluna;
    for( linha=1; linha<=N; linha++){
        for(coluna=1;coluna<=N;coluna++){
        
        if (linha==coluna||linha+coluna==N+1) {printf("*");}
        else {printf("-");}

        if(coluna<N) {printf(" ");}
        }
        printf("\n");
}
}