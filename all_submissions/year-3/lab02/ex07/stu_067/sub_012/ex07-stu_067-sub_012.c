
#include<stdio.h>
int main(){
    int nd=0, N, i;
    scanf("%d", &N);

    for(i=1; i<=N ; i++){
        if((N%i)==0){
            nd++;
        }
    }
    printf("%d\n",nd);
    return 0;
}