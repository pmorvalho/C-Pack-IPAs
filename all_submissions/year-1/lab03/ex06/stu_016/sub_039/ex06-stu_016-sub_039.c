#include <stdio.h>

int main() {
    int c, div_9 = 1;
    while((c = getchar()) != EOF && div_9) {
        if((c - '0') % 9 != 0) div_9 = 0;
    }
    if(div_9) printf("yes\n");
    else printf("no\n");
    return 0;
}
