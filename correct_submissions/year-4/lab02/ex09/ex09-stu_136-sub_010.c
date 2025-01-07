

#include <stdio.h>

int main() {

    int n;
    int h, m, s;

    scanf("%d",&n);
    s = n;

    h = s / 3600;
    s = s % 3600;

    m = s / 60;
    s = s % 60;

    printf("%02d:%02d:%02d\n",h,m,s);

    return 0;
}