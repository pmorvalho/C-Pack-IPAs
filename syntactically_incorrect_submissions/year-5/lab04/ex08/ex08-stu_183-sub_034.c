

#include <stdio.h>

int main() {
    double n1, n2;
    scanf("%lf %lf", &n1, &n2);
    if (n1 > n2) 
        printf("%lf", n1);
    else
        printf("%lf", n2);

    return 0;
}