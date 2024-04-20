
# include <stdio.h>

int main() {
  int a, c = 1;
    scanf("%d", &a);
    do {
        printf("%d\n", c++);
        a--;
    } while (a != 0);
    return 0;
}
