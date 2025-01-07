
#include <stdio.h>

int main(){
    int N, min, hor, seg;
    scanf("%d", &N);
    hor = N / 3600;
    min = (N % 3600) / 60; 
    seg = N % 60; 
    printf("%02d:%02d:%02d\n", hor, min, seg);
    return 0;
}