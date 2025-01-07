
#include <stdio.h>


int main(){
    int N;
    int h;
    int m;
    int s;
    scanf("%d", &N);
    h = N/3600;
    m = (N % 3600)*60;
    s = m % 60;
    printf("%.2f:%.2f:%.2f\n", h, m, s);
    return 0;
}