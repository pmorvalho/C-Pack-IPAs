
#include <stdio.h>
int main(){
    int P,S,T;
    scanf("%d %d %d",&P,&S,&T);
    if (P>S && S>T){
        printf("%d %d %d\n",T,S,P);
    }
    if (P>T && T>S){
        printf("%d %d %d\n",S,T,P);
    }
    if (S>P && P>T){
        printf("%d %d %d\n",T,P,S);
    }
    if (S>T && T>P){
        printf("%d %d %d\n",P,T,S);
    }
    if (T>P && P>S){
        printf("%d %d %d\n",S,P,T);
    }
    if (T>S && S>P){
        printf("%d %d %d\n",P,S,T);
    }
    return 0;
}