
#include <stdio.h>
int main () {
    int digito;
    scanf("%d", &digito);
    int num = 1;
    while (num <= digito) {
        printf("%d\n", num);
        num += 1;
    }
    return 0;
}