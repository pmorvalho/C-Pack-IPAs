
#include<stdio.h>
void piramide(int N);

void printar(int Nu){
    if (Nu<1){
        printf("  ");
    }
    else{
        printf("%d ",Nu);
    }
}

int main(void){
    int N;
    scanf("%d",&N);
    if (N<2){return 0;}
    piramide (N);
    return 0;
}

void piramide(int N){
    int c=1,Nu=N,co;
    while (c<=N){
        co=c-N;
        while (co<c){
            printar(co);
            co++;
        }
        while (co>c-N)
        {
            printar(co);
            co--;
        }
    printf("\n");
    c++;
    }
}