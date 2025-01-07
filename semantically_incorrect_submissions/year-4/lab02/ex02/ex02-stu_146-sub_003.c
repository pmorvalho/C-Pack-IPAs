

#include <stdio.h>

int main() {

    int m, n;

    scanf("%d%d",&m,&n);


    printf("%d\n", m > n ? n : m); 
    printf("%d\n", m < n ? n : n);

    return 0;
}