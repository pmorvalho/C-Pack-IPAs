
#include <stdio.h>
int main(){
    int i,soma,n;
    soma=i=0;
    scanf("%d",&n);
    while (n>0){
        soma+=n%10;
        i++;
        n=n/10;
    }
    printf("%d\n%d\n",i,soma);
}
