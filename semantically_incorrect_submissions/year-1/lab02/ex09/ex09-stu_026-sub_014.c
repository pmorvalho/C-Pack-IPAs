#include <stdio.h>

int main(){
    int n, horas, mins, segs;
    scanf("%d", &n);
    horas = n / 3600;
    n %= 3600;
    mins = n /60;
    segs = n % 60;
    printf("%d:%d:%d\n", horas, mins, segs);
    return 0;
}