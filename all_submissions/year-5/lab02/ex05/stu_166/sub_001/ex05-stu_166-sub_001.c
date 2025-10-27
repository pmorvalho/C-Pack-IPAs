
#include <stdio.h>
int main() {
    int n, res=1;
    scanf("%d", &n);
    while (n + 1 != res) {
        printf("%d\n", res);
        res++ ;
    }
    return 0;
}
//teste