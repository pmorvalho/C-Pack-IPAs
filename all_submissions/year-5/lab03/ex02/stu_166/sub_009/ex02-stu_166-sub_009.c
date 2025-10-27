

#include <stdio.h>

void piramide(int n) {
    int vc = 1, espaco = n - 1, vg = 0, num = 1;
    while (vc - 1 != n) {
        while (vg < espaco) {
            printf("  ");
            vg++;
        }
        espaco--;
        vg = 0;
        while (num - 1 != vc) {
            printf("%d ", num);
            num++; 
        }
        num -= 1;
        while (num != 1) {
            num--;
            printf("%d ", num);
        }
        printf("\n");
        vc++;
    }
}

int main () {
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}