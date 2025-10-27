
#include <stdio.h>
void line(int i, int n) {
    int j;
    for(j = i; j < (n + i - 1); j++) {
        printf("%d\t", j);
    }
    printf("%d\n", n + i - 1);

}
int main() {
    int n, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        line(i, n);
    }
    return 0;
}