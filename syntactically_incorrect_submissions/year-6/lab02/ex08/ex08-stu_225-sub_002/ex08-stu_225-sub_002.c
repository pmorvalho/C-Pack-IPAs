
#include <stdio.h>
int main() {
    int i, n;
    double num,soma;
    soma=0;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%lf", &num);
        soma+=num;
    }
    double media = soma / n;
    printf("%.2f\n",media);
    return 0;
}



