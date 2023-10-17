
#include <stdio.h>

int main(){

    int n, remainder;
    int hh = 0;
    int mm = 0;
    int ss = 0;

    scanf("%d", &n);

    if((n / 3600) > 1){
        hh = n / 3600;
        remainder = n % 3600;
    }
    else
        remainder = n;
    if((remainder / 60) > 1){
        mm = remainder / 60;
        remainder %= 60;
    }
    else
        ss = remainder / 60;
    
    printf("%02d:%02d:%02d", hh, mm, ss);

    return 0;
}