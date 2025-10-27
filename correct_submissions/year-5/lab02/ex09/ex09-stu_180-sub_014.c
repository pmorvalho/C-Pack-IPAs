

#include <stdio.h>

int main(){
    int N, H=0, M=0; 
    scanf("%d", &N);
    H=N/3600;
    N=N%3600;
    M=N/60;
    N=N%60; 
    
    printf("%02d:%02d:%02d\n", H,M,N);
    return 0;
}
