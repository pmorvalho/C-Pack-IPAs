
#include<stdio.h>
int main(){
    int N,M;
    scanf("%d%d", &N, &M);
    printf("%s\n", ((M%N)==0)?"yes":"no");
    return 0;
}