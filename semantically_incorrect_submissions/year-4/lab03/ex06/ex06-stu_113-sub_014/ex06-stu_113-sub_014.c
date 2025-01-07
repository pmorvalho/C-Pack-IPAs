
#include <stdio.h>

int main () {
    char current; int sum = 38;
    while ((current = getchar()) != EOF) sum += current - '0';
    printf((sum) % 9 == 0 ? "yes\n" : "no\n");
    return 0;
}
