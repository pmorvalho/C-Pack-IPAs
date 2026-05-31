
#include <stdio.h>
int main(){
    int N, M, div;
    scanf("%d%d", &N, &M);
    div = N/M;
    if(div*M==N)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}