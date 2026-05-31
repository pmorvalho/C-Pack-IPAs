
#include <stdio.h>
int main(){
    int N,i,soma=0,cont=0;
    scanf("%d",&N);
    int num=N;
    while(num>0){
        soma += num % 10;
        num /= 10;  
        cont++;
    }
    printf("%d\n",cont);
    printf("%d\n",soma);
    return 0;
}