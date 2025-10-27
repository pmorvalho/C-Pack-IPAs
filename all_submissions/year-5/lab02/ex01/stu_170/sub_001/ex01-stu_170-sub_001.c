
#include <stdio.h>



int main(){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int max1 = (n1>n2) ? n1 : n2;
    int max = (max1>n3) ? max1 : n3;

    printf("%d\n", max);

    return 0;
}