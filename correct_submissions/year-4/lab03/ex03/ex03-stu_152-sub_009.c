
# include <stdio.h>

int estr1(int linha){
    return linha;
}
int estr2(int linha,int N){
    return N - (linha - 1);
}

void cruz(int N){
    int linha, p_estr1, p_estr2, p;

    for (linha = 1; linha <= N; linha++){

        p_estr1 = estr1(linha);
        p_estr2 = estr2(linha,N);
        for (p = 1;p <= N; p++){
            if ((p == p_estr1) || (p==p_estr2)){
                printf("*");
            }
            else{
                printf("-");
            }

            if (p != N){
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
    int N;
    scanf("%d",&N);
    cruz(N);
    return 0;
}