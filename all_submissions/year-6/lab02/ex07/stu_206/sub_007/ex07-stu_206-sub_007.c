

#include <stdio.h>

int main() {
    int n, temp, res = 0;
    if (scanf("%d", &n) != 1) return 0;
    temp = 1;
    while (temp <= n) {
        if (n % temp == 0) {
            res += 1;
        }
        temp += 1;
    }
    printf("%d\n",res);
    return 0;
}