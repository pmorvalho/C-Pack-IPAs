
#include <stdio.h>

int main(){
    int n, cont  = 0,som=0;
    scanf("%d",&n);
    while (n>0){
        som = som + n%10;
        n = n/10;
        cont++;
    }
    printf("%d\n%d\n",cont,som);
    return 0;
}