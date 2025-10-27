
#include <stdio.h>

void piramide(int N){
    int linha,coluna,numero=1;
    for (linha=0; linha<N; linha++){
        for (coluna=0; coluna<=N-linha; coluna++){
            printf(" ");
        }
        for (coluna=0;coluna<=linha;coluna++){
            printf("%d",numero);
            numero++;
        }

        for (coluna=0;
        }
        printf("\n");
    }
}

int main(){

}
