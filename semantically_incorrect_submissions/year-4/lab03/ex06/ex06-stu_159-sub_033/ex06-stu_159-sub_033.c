
#include <stdio.h>

int main() {
    int i = 0, n = 0;

    while (((n = getchar()) != ' ') && (n != '\n')) {
        i += n - 48;
    }
    
    if (!(i % 9)) printf("yes\n");
    else printf("no\n");

    return 0;
}