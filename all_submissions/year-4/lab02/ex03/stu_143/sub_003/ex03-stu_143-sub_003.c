

#include <stdio.h>

int main(){

    int m1, m2;
    scanf("%d%d", &m1, &m2);
    if (m1 % m2 == 0)
        printf("yes\n");
    else
        printf("no\n");

    return 0;

}