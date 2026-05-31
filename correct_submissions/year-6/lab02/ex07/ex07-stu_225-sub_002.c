
#include <stdio.h>
int main(){
    int N,i;
    long cont;
    scanf("%d",&N);
    cont=0;
    for (i=1;i<=N;i++){
        if (N%i==0)
            cont++;
    }
    printf("%ld\n",cont);
    return 0;
}