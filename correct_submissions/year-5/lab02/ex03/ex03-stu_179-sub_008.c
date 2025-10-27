
#include <stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);

    if (m % n == 0)
        printf("yes\n");
    else 
        printf("no\n");

    return 0;
}