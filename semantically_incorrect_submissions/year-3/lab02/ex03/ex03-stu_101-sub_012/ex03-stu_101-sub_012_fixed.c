

#include <stdio.h>

int main(){
    int n;
    int m;
    scanf("%d\n%d", &n, &m);
    if (n%m==0)
        printf("yes");
    else
        printf("no");
    printf("\n");
    return 0;
}
