
#include <stdio.h>
int main(){
    int P,S,T;
    scanf("%d %d %d",&P,&S,&T);
    if(P>S){
        if(P>T){
            printf("%d\n",P);
        }
        else{
            printf("%d\n",T);
        }
    }
    else{
        if(S>T){
            printf("%d\n",S);
        }
        else{
            printf("%d\n",T);
        }
    }
    return 0;
}