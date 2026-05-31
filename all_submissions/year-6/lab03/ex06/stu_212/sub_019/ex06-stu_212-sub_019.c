
#include <stdio.h>
int main () {
    int c;
    int acc = 0;
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            acc += (c - '0');
        }
    } 
    if (acc % 9 == 0) {
        printf("yes\n");}
    else {printf("no\n");
    }
    return 0;
}