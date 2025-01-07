
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    if(N % M == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }

    return 0;
}