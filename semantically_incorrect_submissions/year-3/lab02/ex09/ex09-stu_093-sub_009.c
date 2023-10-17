
#include <stdio.h>

int main(){

    int n, remainder;
    int hh = 0;
    int mm = 0;
    int ss = 0;

    scanf("%d", &n);


    hh = n / 3600;
    remainder = n % 3600;
    remainder = n;
    mm = remainder / 60;
    remainder %= 60;
    ss = remainder;
    
    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}