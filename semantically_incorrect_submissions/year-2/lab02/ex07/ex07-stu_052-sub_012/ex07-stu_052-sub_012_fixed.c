

#include <stdio.h>

int main(){
    
    int N, V;
    int Cont=0;
    scanf("%d",&N);
    
    V = 1;
    
    while(V<=N){
        if(N%V==0){
	  Cont++;
        }
        V++;
    }
    printf("%d\n",Cont);
    return 0;
}
