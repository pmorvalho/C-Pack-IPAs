
#include <stdio.h>

int main() {
    int i = 0, n;

    while (((n = getchar()) != ' ') && (n != '\n')) {
        i += n;
    }
    
    if ((i % 9) == 0) printf("yes\n");
    else printf("no\n");

    return 0;
}