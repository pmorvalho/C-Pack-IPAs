# include <stdio.h>


void quadrado(int N){
    int largura=1,comprimento=1,num=1;
    while(largura<=N){
        while(comprimento<=N){
            printf("%d\t",num);
            num+=1;
            comprimento+=1;
        }
        printf("\n");
        comprimento=1;
        largura+=1;
        num=largura;
    }

}
int main(){
    int N;
    scanf("%d",&N);
    quadrado(N);
    return 0;
}