

#include <stdio.h>

void piramide(int N);

int main(){
    int N;
    scanf("%d",&N);
    piramide(N);
    return 0;
}

void piramide(int N){

    int linha,i,esp,j,k;


    for( linha=1; linha<=N; linha++){
        esp=2*(N-linha);
        for(j=1; j<=esp;j++) {printf(" ");}
        for (i=1;i<=linha;i++) {printf("%d ",i);}
        for (k=linha-1;k>0;k--) {printf("%d ",k);}
        printf("\n");
}

}