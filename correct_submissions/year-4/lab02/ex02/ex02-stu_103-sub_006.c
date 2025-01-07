
#include <stdio.h>

int biggest(int N, int M){
    if (M>N)
    {
        printf("%d\n%d\n",N,M);
    }
    else{
        printf("%d\n%d\n",M,N);
    }
    return 0;
}
int main(){
    int N,M;
    scanf("%d %d", &N, &M);
    biggest(N,M);
    return 0;
}
