
#include <stdio.h>

void piramide(int N){
    int linha, i, space;

    for (linha=1; linha<=N; ++linha){
        space = (N-linha)*2;
        while(space>0){
            printf(" ");
            --space;
        }
        for (i=1; i<=linha; ++i){
            printf("%d ", i);
        }
        for (i=linha-1; i>0; --i){
            printf("%d", i);
            if (i!=1){
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
    int N;
    scanf("%d", &N);

    piramide(N);
    return 0;

}