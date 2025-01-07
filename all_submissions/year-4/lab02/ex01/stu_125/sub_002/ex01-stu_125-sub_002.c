
#include <stdio.h>

int main() {
    int max, n1, n2, n3;

    scanf("%d%d%d", &n1, &n2, &n3);
    max = (n1>n2 ? n2:n1);
    max = (n3>max ? n3:max);
    printf("%d\n", max);

    return 0;
}