
#include <stdio.h>

int main () {
    int n;
    int hh, mm, ss;

    scanf("%d", &n);

    hh = n/3600;

    mm = (n -(3600*hh))/60;

    ss = (n -(3600*hh)-(mm*60));

    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;

}