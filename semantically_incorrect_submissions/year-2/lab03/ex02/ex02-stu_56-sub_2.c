# include <stdio.h>

void piramide(int N){
    int num=1,cont=1,num_espacos=N,N1=cont;
    while(cont<=N){
        while(num_espacos!=0){
            printf("  ");
            num_espacos-=1;
        }
        num_espacos=N-cont;
        if (cont==1){
            printf("%d",cont);
        }
        else{
            while(num<cont){
                printf("%d ",num);
                num+=1;
            }
            while(N1>=1){
                printf("%d ",N1);
                N1-=1;
            }
        }
        num=1;
        cont+=1;
        N1=cont;
        printf("\n");
    }
}
int main(){
    int N;
    scanf("%d",&N);
    piramide(N);
    return 0;
}