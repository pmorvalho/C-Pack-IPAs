

#include <stdio.h>

int main(){
    
    int N, V, Cont;
    scanf("%d",&N);
    
    V = 1;
    Cont = 0;
    
    while(V<=N){
        if(N%V==0){
            Cont++;
        }
        V++;
    }
    printf("%d\n",Cont);
    return 0;
}