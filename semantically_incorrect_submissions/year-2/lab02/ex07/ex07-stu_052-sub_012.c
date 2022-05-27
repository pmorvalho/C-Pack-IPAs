

#include <stdio.h>

int main(){
    
    int N, V;
    scanf("%d",&N);
    
    V = 1;
    
    while(V<=N){
        if(N%V==0){
            printf("%d\n",V);
        }
        V++;
    }
    return 0;
}