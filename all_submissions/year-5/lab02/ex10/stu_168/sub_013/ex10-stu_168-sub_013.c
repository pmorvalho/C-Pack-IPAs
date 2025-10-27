
#include <stdio.h>

int main(){
    int cont=0,soma=0,n;
    scanf("%d",&n);
    while(n>0){
        soma+=n%10;
        n/=10;
        cont++;
    }
    printf("%d\n%d\n",cont,soma);
    return 0;
}