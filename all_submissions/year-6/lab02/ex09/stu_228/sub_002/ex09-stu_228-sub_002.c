

#include <stdio.h>
int main() {   
    int n;
    scanf("%d", &n);
    int m = 0, h= 0;
    while (n >= 3600) {
        n -= 3600;
        h++;
        if (h == 24) h = 0;
    }
    while (n >= 60) {
        n -= 60;
        m++;
        if (m == 60) m =0 ;
    }
    printf("%02d:%02d:%02d\n", h, m, n);
} 