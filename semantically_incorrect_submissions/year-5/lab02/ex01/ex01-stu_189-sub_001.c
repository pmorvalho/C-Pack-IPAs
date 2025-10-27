
#include <stdio.h>
int main(){
    int P,S,T;
    scanf("%d %d %d",&P,&S,&T);
    if(P>S){
        if(P>T){
            printf("%d",P);
        }
        else{
            printf("%d",T);
        }
    }
    else{
        if(S>T){
            printf("%d",S);
        }
        else{
            printf("%d\n",T);
        }
    }
    return 0;
}