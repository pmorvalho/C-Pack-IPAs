
# include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    do {
        printf("%d\n", a);
        a--;
    } while (a != 0);
    return 0;
}