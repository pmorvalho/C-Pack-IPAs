
#include <stdio.h>

int main(){
    int n;
    int hh, mm, ss, remainder;

    scanf("%d", &n);

    hh = n / 3600;
    remainder = n - hh * 3600;

    mm =  remainder / 60;
    remainder = remainder - mm * 60;

    ss = remainder;

    printf("%02d:%02d:%02d\n", hh, mm, ss);
    
    return 0;
}