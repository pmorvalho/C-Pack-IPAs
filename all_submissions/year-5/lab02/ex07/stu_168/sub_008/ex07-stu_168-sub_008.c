
#include <stdio.h>

int main(){
    int N,i=1,cont=0;
    scanf("%d",&N);
    while(i<=N){
        if (N%i == 0)
            cont++;
        i++;
    }
    printf("%d\n",cont);
    return 0;
}