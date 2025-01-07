
#include <stdio.h>

int main(){
    int n,dig,soma=0,nrdig=0;
    scanf("%d",&n);
    while (n>0){
        dig = n%10;
        soma += dig;
        nrdig++;
        n /= 10;
    }
return printf("%d\n%d\n",nrdig,soma)== EOF;
}