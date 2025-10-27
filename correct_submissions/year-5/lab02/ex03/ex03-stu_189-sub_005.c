
#include <stdio.h>
int main(){
    int P,S;
    scanf("%d %d",&P,&S);
    if(P%S==0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}