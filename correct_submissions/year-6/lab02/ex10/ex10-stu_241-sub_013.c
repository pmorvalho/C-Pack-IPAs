
#include <stdio.h>

int main() {
    int n,soma=0,i=0;
    scanf("%d",&n);
    while(n!=0){
        soma+=n%10;
        n/=10;
        i++;
    };
    printf("%d\n%d\n",i,soma);
    return 0;
}