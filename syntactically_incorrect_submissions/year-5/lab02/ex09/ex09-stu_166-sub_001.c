
#include <stdio.h>

int main () {
    int n, h = 0, m = 0 ,s = 0;
    scanf("%d",&n);
    while (n >= 3600) {
        h++;
        n -= 3600;
    }
    while (n >= 60) {
        m++;
        n -= 60;
    }
    s = n;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}
//teste