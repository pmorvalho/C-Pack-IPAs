
#include <stdio.h>

int biggest(int N, int M){
    if (M>N)
    {
        printf("%d\n%d",N,M);
    }
    else{
        printf("%d\n%d",M,N);
    }
}
int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    biggest(N,M);
    return 0;
}
