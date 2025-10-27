
#include<stdio.h>
void piramide(int N);

int main(void){
    int N;
    scanf("%d",&N);
    if (N<2){return 0;}
    piramide (N);
    return 0;
}

void piramide(int N){
    int c=1,co;
    while (c<=N){
        co=c-N;
        while (co<c){
            if(co>0) printf("%d",co);
            else printf(" ");
            printf(" ");
            co++;
        }
        printf("%d",co);
        while (co>c-N)
        {
            --co;
            if (co<=0){
                printf("\n");
                break;
            }
            printf(" %d",co);
        }
    c++;
    }
}