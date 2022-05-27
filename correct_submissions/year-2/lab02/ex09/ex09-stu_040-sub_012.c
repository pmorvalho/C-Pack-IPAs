#include <stdio.h>



int main() {
    int H, M, S;
    scanf("%d", &S);
    H = S / 3600;
    S = S % 3600;
    M = S / 60;
    S = S % 60;
    printf("%02d:%02d:%02d\n",H, M, S);
    
    return 0;
}