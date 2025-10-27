
#include <stdio.h>
int main(){
    int P,S;
    scanf("%d %d",&P,&S);
    if(P<S){
        printf("%d\n%d\n",P,S);
    }
    else{
        printf("%d\n%d\n",S,P);
    }
}